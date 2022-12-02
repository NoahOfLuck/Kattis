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
        if(count==worker1.count){
            return number<worker1.number;
        }
            return count>worker1.count;
        }
};


int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int N;
    cin>>N;

    set<patients>set1;
    unordered_map<int,int>map1;
    list<int>deck;
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
                set1.insert(patients(b,a));
            }
            else{
                set1.erase(patients(b,map1[b]));
                map1[b]+=a;
                set1.insert(patients(b,map1[b]));
            }

            if(map1.find(b)==map1.end()){
            map1[b]=a;
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
                set1.insert(patients(b,a));
            }

            else{
                set1.erase(patients(b,map1[b]));
                map1[b]+=a;
                set1.insert(patients(b,map1[b]));
            }

            if(map1.find(b)==map1.end()){
            map1[b]=a;
            }

           
            
            cout<<(*set1.begin()).number<<endl;
        }

        if(command=="REMOVE_BOTTOM"){
            int a;
            cin>>a;

            while(a--){
                int temp = deck.back();
                deck.pop_back();
                int count=1;
                while(temp == deck.back() && a>0){
                    count++;
                    deck.pop_back();
                    a--;
                }
                set1.erase(patients(temp,map1[temp]));
                map1[temp]-=count;
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
                int count=1;
                while(temp == deck.front() && a>0){
                    count++;
                    deck.pop_front();
                    a--;
                }
                set1.erase(patients(temp,map1[temp]));
                map1[temp]-=count;
                set1.insert(patients(temp,map1[temp]));
            }

            cout<<(*set1.begin()).number<<endl;
        }
    }





    return 0;
}