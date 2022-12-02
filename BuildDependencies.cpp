#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>
#include<unordered_map>

using namespace std;

unordered_map<string,vector<string>>map1;
unordered_map<string,int>visited;
bool back_edge;

void DepthFirstSearch(string city){
    visited[city]=1;
    for(auto &v: map1[city]){
        if(visited.find(v)==visited.end()){
            DepthFirstSearch(v);
        }
        else if(visited[v]==1){
            back_edge=true;
        }
    }
    visited[city]=2;
}

int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        string a,b;
        cin>>a>>b;
        map1[a].push_back(b);
    }

    string city;
    while(cin>>city){
        back_edge=false;
        visited.clear();
        DepthFirstSearch(city);
        if(back_edge==true){
            cout<<city<<" "<<"safe"<<endl;
        }
        else{
            cout<<city<<" "<<"trapped"<<endl;
        }

    }


    return 0;
}