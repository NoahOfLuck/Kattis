#include <bits/stdc++.h>
//SourceCode Taken from StevenHalim https://github.com/stevenhalim/cpbook-code/blob/master/ch4/sssp/dijkstra.cpp
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

const int INF = 1e9; // INF = 1B, not 2^31-1 to avoid overflow

int main() {
  int N;
  cin>>N;
  while(N--){
  int V; cin>>V;
  vector<vii> AL(V, vii());
  for (int i=0;i<V;i++) {
    int u; cin>>u;
    while(u--){
        long long a,b;
        cin>>a>>b;
    AL[i].emplace_back(a, b);
    }
  }

  int kkb;
  cin>>kkb;

  while(kkb--){
    int s,e,k;
    cin>>s>>e>>k;

    vi dist(V, INF); dist[s] = 0;                  

  priority_queue<ii, vector<ii>, greater<ii>> pq; pq.push({0, s});

  while (!pq.empty()) {                          // main loop
    auto [d, u] = pq.top(); pq.pop();            // shortest unvisited u
    if (d > dist[u]) continue;                   // a very important check
    for (auto &[v, w] : AL[u]) {                 // all edges from u
      if (dist[u]+w >= dist[v]) continue;        // not improving, skip
      dist[v] = dist[u]+w;                       
      pq.push({dist[v], v});                     
    }
  }
  for (int u = 0; u < V; ++u)
    printf("SSSP(%d, %d) = %d\n", s, u, dist[u]);
}
}
  

  return 0;
}