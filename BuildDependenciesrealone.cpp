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
#include<stack>

using namespace std;

unordered_map<string,vector<string>>map1;
unordered_map<string,int>visited;
stack<string>ans;

void DepthFirstSearch(string files){
    visited[files]=1;
    for(auto &v: map1[files]){
        if(visited.find(v)==visited.end()){
            DepthFirstSearch(v);
        }
    }
    ans.push(files);
}

int main(){
    int N;
    cin>>N;
    string nonsense;
    getline(cin,nonsense);
    for(int i=0;i<N;i++){
        string command;
        getline(cin,command);
        stringstream ss(command);
        string a; 
        ss>>a;
        a.pop_back();

        string b;
        while(ss>>b){
            map1[b].push_back(a);
        }
    }

    string changed;
    cin>>changed;
    visited.clear();
    DepthFirstSearch(changed);

    while(ans.size()){
        cout<<ans.top()<<endl;
        ans.pop();
    }

    return 0;
}