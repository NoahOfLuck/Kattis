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

typedef vector<int> visited;

vector<visited> AdjacencyList;
visited visit;
bool back_edge_found;
void DepthFirstSearch(int un){
    visit[un]=1;
    for(auto &v: AdjacencyList[un]){
        if(!visit[v])
            DepthFirstSearch(v);
        else back_edge_found = true;
    }
}

void addEdge(int v, int w)
{
    AdjacencyList[v].push_back(w);
    AdjacencyList[w].push_back(v);  
}

int main() {
    int N;
    cin>>N;

    while(N--){
        int R,P;
        int count=0;
        cin>>R>>P;
        
        AdjacencyList.assign(R,visited());
        while(P--){
            int a,b;
            cin>>a>>b;
            a--;
            b--;
            addEdge(a,b);
        }

        visit.assign(R,0);


    
    for(int i=0; i<visit.size(); i++){
        back_edge_found=false;
      if(visit[i] == 1){
        count++;
        DepthFirstSearch(i);
      }
    }
        cout<<count+1<<endl;
}
    return 0;
}






