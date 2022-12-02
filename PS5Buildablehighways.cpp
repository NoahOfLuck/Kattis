#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

const int INF = 1e9; // INF = 1B, not 2^31-1 to avoid overflow

int main() {
    int N;
    cin>>N;

    while(N--){
    int V;
    cin>>V;

    vector<vii> AL(V, vii());
	for(int i=0;i<V;i++){
        int curr;
        cin>>curr;
        while(curr--){
            int a,w;
            cin>>a>>w;
             AL[i].emplace_back(a, w);
        }
    }
 
    int t;
    cin>>t;
    while(t--){
    int s,e,k;
    cin>>s>>e>>k;
    
//     vi dist(V, INF); dist[s] = 0;
//     priority_queue<ii, vector<ii>, greater<ii>> pq; pq.push({0, s});
//    set<ii> pq;
//   for (int u = 0; u < V; ++u)
//     pq.insert({dist[u], u});
  
bool found =false;

vi dist(V, INF); dist[s] = 0;
set<ii> pq;
for (int u = 0; u < V; ++u)
    pq.insert({dist[u], u});
while(!found){
  int count = 1;
  while (!pq.empty()) {                          // main loop
    auto [d, u] = *pq.begin();                   // shortest unvisited u
    pq.erase(pq.begin());
    for (auto &[v, w] : AL[u]) {                 // all edges from u
      if (dist[u]+w >= dist[v]) continue;        // not improving, skip
      pq.erase(pq.find({dist[v], v}));           // erase old pair
      dist[v] = dist[u]+w;                       // relax operation
      pq.insert({dist[v], v});                   // enqueue better pair
      
    }
    count+=1;
    if(count>=k && (*pq.begin()).second !=e){
        AL[(*pq.begin()).second].erase(AL[(*pq.begin()).second].begin(),AL[(*pq.begin()).second].end());
        break;
    }
  }
  found=true;
}
    cout<<dist[e]<<endl;
    
    }


    }

  return 0;
}