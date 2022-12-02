#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<string>
#include<unordered_map>
#include<sstream>
#include<set>
#include<cstring>
#include<cmath>

using namespace std;

class cats{
    public:
        int id;
        string name;
        int IL;
        cats(): id(0), name(""), IL(0){}
        cats(int  id,string name,int IL):id(id), name(name),IL(IL){}

        bool operator< (const cats worker1) const{
            if(IL != worker1.IL) return IL>worker1.IL;
            return id<worker1.id;

        }

};


int main(){
    std::ios_base::sync_with_stdio(0), std::cin.tie(0);
    unordered_map<string,int> map1;
    unordered_map<string,int>map2;
    set<cats>queue1;
    int N;
    cin>>N;
    int id=0;
    while(N--){
        cats cat;
        int command;
        cin>>command;

        if(command ==0){
            string name;
            int number;
            cin>>name>>number;
            queue1.insert(cats(id,name,number));
            map1[name]=number;
            map2[name]=id;
            id++;
        }

        else if(command==3){
            if(queue1.empty()){
            cout<<"The clinic is empty"<<endl;
        }
        else{
            cout<<(*queue1.begin()).name<<endl;
        }
        }

        else if(command == 1){
            string name;
            int number;
            cin>>name>>number;
            int IL = map1[name];
            int id = map2[name];
            auto it = queue1.find(cats(id,name,IL));
            cats temp = *it;
            temp.IL+=number;
            map1[name] = temp.IL;
            queue1.erase(it);
            queue1.insert(temp);
        }

        else if(command==2){
            string name;
            cin>>name;
            int IL=map1[name];
            int id = map2[name];
            auto it = queue1.find(cats(id,name,IL));
            queue1.erase(it);
    
        }
    }

    return 0;
}