#include <bits/stdc++.h>
//Source Code from Steven Halim
using namespace std;

typedef pair<long long, long long> ii;
typedef vector<long long> vi;
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
  vi dist_old(V, INF); dist_old[s] = 0;                  
  vi dist_new(V,INF); dist_new[s]=0;
  for (int i = 0; i < k-1; ++i) {                
    bool modified = false;                       
    for (int u = 0; u < V; ++u)                  
      if (dist_old[u] != INF)                        
        for (auto &[v, w] : AL[u]) {             
          if (dist_old[u]+w >= dist_new[v]) continue;    
          dist_new[v] = dist_old[u]+w;                    
          modified = true;                       
        }
    dist_old = dist_new;
    if (!modified) break;                        
  }
    if(dist_new[e]!=INF){
    cout<<dist_new[e]<<endl;
    }
    else{
     cout<<-1<<endl;   
    }    
    }

}
  return 0;
}