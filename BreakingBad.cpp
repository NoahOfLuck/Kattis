#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>
#include<cmath>

using namespace std;

class items{
    public:
        string name;
        bool fixed;

    items(): name(""),fixed(false){}
    items(string name, bool fixed): name(name), fixed(fixed){}

    bool operator< (const items worker1) const{
            return name<worker1.name;
        }
};

int main(){
    set<items>set1;
    set<items>set2;
    int N;
    cin>>N;

    while(N--){
        string item;
        cin>>item;
        set1.insert(items(item,false));
    }

    int a;
    cin>>a;

    while(a--){
        string b,c;
        cin>>b>>c;
        auto it = set1.find(items(b,false));
        auto it1 = set1.find(items(c,false));

        // cout<<(*it).fixed<<endl;
        // cout<<(*it1).fixed<<endl;

        if((*it).fixed==0 && (*it1).fixed==0){
            set1.erase(items(b,false));
            set1.erase(items(c,false));
            set2.insert(items(b,true));
            set1.insert(items(c,true));
        }
        else if((*it).fixed==0){
            set1.erase(items(b,false));
            set2.insert(items(b,true));
        }
        else if((*it1).fixed==0){
            set1.erase(items(c,false));
            set2.insert(items(c,true));
        }
        

    }
    
    for(auto it = set1.begin();it!=set1.end();it++){
            cout<<(*it).name<<' ';
        }
        cout<<endl;
        for(auto it1 = set2.begin();it1!=set2.end();it1++){
            cout<<(*it1).name<<' ';
        }
        cout<<endl;

    return 0;
}