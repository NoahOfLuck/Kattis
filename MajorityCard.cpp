//LT16_K47715
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
#include<list>
#include<unordered_map>

using namespace std;

class patients{
    public:
        int number;
        int count;

    patients(): number(0),count(0){}
    patients(int number,int count):number(number),count(count){}

    bool operator< (const patients worker1) const{
            return count>=worker1.count;
        }
};


int main(){
    int N;
    cin>>N;

    set<patients>set1;
    unordered_map<int,int>map1;
    list<int>deck;
    pair<int,int> majority = {0,0};
    pair<int,int> next;
    while(N--){
        string command;
        cin>>command;

        if(command=="PUT_TOP"){
            int a,b;
            cin>>a>>b;
            for(int i=0;i<a;i++){
            deck.push_front(b);
            }

            if(map1.find(b)==map1.end()){
            map1[b]=a;
            }
            else{
                map1[b]+=a;
            }

            if(map1.find(b)==map1.end()){
                set1.insert(patients(b,a));
            }

            else{
                int temp = map1[b];
                set1.erase(patients(b,map1[b]));
                map1[b]+=a;
                set1.insert(patients(b,map1[b]));
            }
            
            cout<<(*set1.begin()).number<<endl;

        }


        if(command=="PUT_BOTTOM"){
            int a,b;
            cin>>a>>b;
            for(int i=0;i<a;i++){
            deck.push_back(b);
            }

            if(map1.find(b)==map1.end()){
            map1[b]=a;
            }
            else{
                map1[b]+=a;
            }

            if(map1.find(b)==map1.end()){
                set1.insert(patients(b,a));
            }

            else{
                int temp = map1[b];
                set1.erase(patients(b,map1[b]));
                map1[b]+=a;
                set1.insert(patients(b,map1[b]));
            }
            
            cout<<(*set1.begin()).number<<endl;
        }

        if(command=="REMOVE_BOTTOM"){
            int a;
            cin>>a;

            while(a--){
                int temp = deck.back();
                deck.pop_back();
                set1.erase(patients(temp,map1[temp]));
                map1[temp]-=1;
                set1.insert(patients(temp,map1[temp]));
            }

            cout<<(*set1.begin()).number<<endl;
        }

        if(command=="REMOVE_TOP"){
            int a;
            cin>>a;

            while(a--){
                int temp = deck.front();
                deck.pop_front();
                set1.erase(patients(temp,map1[temp]));
                map1[temp]-=1;
                set1.insert(patients(temp,map1[temp]));
            }

            cout<<(*set1.begin()).number<<endl;
        }
    }





    return 0;
}