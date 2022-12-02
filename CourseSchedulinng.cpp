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
    int N;
    cin>>N;
    map<string,set<string>> map1;

    while(N--){
        string f,s,t;
        cin>>f>>s>>t;

        map1[t].insert(f+s);

    }

    for(auto it=map1.begin();it!=map1.end();it++){
        cout<<(*it).first<<' '<<(*it).second.size()<<endl;
    }



    return 0;
}