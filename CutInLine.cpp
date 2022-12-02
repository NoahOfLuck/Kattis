#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>
#include<list>

using namespace std;

int main(){
    int N;
    cin>>N;

    list<string>list1;

    while(N--){
        string temp;
        cin>>temp;
        list1.push_back(temp);
    }

    int C;
    cin>>C;

    while(C--){
        string command;
        cin>>command;

        if(command=="cut"){
            string a,b;
            cin>>a>>b;

            auto it = find(list1.begin(),list1.end(),b);
            list1.insert(it,a);
        }

        if(command=="leave"){
            string c;
            cin>>c;
            auto it1 = find(list1.begin(),list1.end(),c);
            list1.erase(it1);
        }
    }


    for(auto it=list1.begin();it!=list1.end();it++){
        cout<<*it<<endl;
    }


    return 0;
}