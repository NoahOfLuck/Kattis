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

int main(){
    map<char,vector<string>> map1;
    string curr;
    cin>>curr;

    int N;
    cin>>N;

    while(N--){
        string temp;
        cin>>temp;
        map1[temp[0]].push_back(temp);

    }

    if(map1.find(curr[curr.size()-1])==map1.end()){
        cout<<"?"<<endl;
        return 0;
    }

    
    auto it = map1.find(curr[curr.size()-1]);
    
    string kkb;
    for(int i=0; i<((*it).second).size();i++){
        kkb=((*it).second)[0];
        string poop = ((*it).second)[i];

        if((*it).second.size()==1){
            map1.erase(it);
        }

        if(map1.find(poop[poop.size()-1])==map1.end()){
            cout<<poop<<'!'<<endl;
            return 0;
        }
    }

    cout<<kkb<<endl;
    

    return 0;
}