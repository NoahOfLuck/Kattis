#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>

using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

const int INF = 1e9; // INF = 1B, not 2^31-1 to avoid overflow

int main() {

  int V;
  int s=0;
  cin>>V;
  vector<vii> AL(V, vii());
  vector<int>temp;

  for(int i=0;i<V;i++){
	int curr;
	cin>>curr;
	temp.push_back(curr);
  }

  for (int i=0;i<V;i++) {
	for(int j=1;j<V;j++){
	int w= temp[i]+temp[j];
    AL[i].emplace_back(j, w);
	AL[j].emplace_back(i,w);
	}                   // directed graph
  }

  vi dist(V, INF); dist[s] = 0;                  // INF = 1e9 here

  priority_queue<ii, vector<ii>, greater<ii>> pq; pq.push({0, s});

  // sort the pairs by non-decreasing distance from s
  while (!pq.empty()) {                          // main loop
    auto [d, u] = pq.top(); pq.pop();            // shortest unvisited u
    if (d > dist[u]) continue;                   // a very important check
    for (auto &[v, w] : AL[u]) {                 // all edges from u
      if (dist[u]+w >= dist[v]) continue;        // not improving, skip
      dist[v] = dist[u]+w;                       // relax operation
      pq.push({dist[v], v});                     // enqueue better pair
    }
  }

  for (int u = 0; u < V; ++u)
    printf("SSSP(%d, %d) = %d\n", s, u, dist[u]);

  return 0;
}