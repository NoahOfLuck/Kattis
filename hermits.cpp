#include <iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>
#include <climits>

using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    int N;
    cin>>N;

    vector<int> adj[1010];

    for(int i=1;i<N+1;i++){
        int a;
        cin>>a;
        adj[i].push_back(a);
    }

    int M;
    cin>>M;

    while(M--){
        int first,second;
        cin>>first>>second;
        addEdge(adj,first,second);
    }

    for(int i=1;i<N+1;i++){
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<' ';
        }
        cout<<endl;
    }

    return 0;
}