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

bool operator< (const pair<long long,long long>& worker1, const pair<long long,long long> &worker2)
    {
    if (worker1.second==worker2.second){
        return worker1.first<worker2.first;
    }
        return worker1.second > worker2.second;
    }
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int N;
    cin>>N;

    unordered_map<long long,long long> map1;
    list<pair<long long,long long>>deck;
    priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,less<vector<pair<long long,long long>>::value_type>>queue1;
    pair<long long,long long> majority= {0,0};

    while(N--){
        string command;
        cin>>command;

        if(command=="PUT_TOP"){
            long long a,b;
            cin>>a>>b;
            deck.push_front({b,a});

            if(map1.find(b)==map1.end()){
                map1[b]=a;
            }
            else{
                map1[b]+=a;
            }

            queue1.push({b,map1[b]});

            if(map1[b]>majority.second){
                majority = {b,map1[b]};
            }
            if(map1[b]==majority.second){
                if(b<majority.first){
                    majority = {b,map1[b]};
                }
            }
            cout<<majority.first<<endl;

        }
        if(command=="PUT_BOTTOM"){
             int a,b;
            cin>>a>>b;
            deck.push_back({b,a});


            if(map1.find(b)==map1.end()){
                map1[b]=a;
            }
            else{
                map1[b]+=a;
            }

            queue1.push({b,map1[b]});

            if(map1[b]>majority.second){
                majority = {b,map1[b]};
            }
            if(map1[b]==majority.second){
                if(b<majority.first){
                    majority = {b,map1[b]};
                }
            }
            cout<<majority.first<<endl;
        }
        if(command=="REMOVE_TOP"){
            long long a;
            cin>>a;

            while(a){
                pair<long long,long long> temp = deck.front();
                if(temp.second>=a){
                    map1[deck.front().first]-=a;
                    deck.front().second-=a;
                    a=0;
                }


                else{
                    map1[deck.front().first]-=deck.front().second;
                    a-=deck.front().second;
                    deck.pop_front();
                }
                
                if(temp.first==majority.first){
                    queue1.pop();
                    if(queue1.top().second>=map1[deck.front().first]){
                    while(map1[queue1.top().first]!=queue1.top().second){
                        queue1.pop();
                    }
                    majority = {queue1.top().first,queue1.top().second};
                    }
                }
                
            }
            cout<<majority.first<<endl;

        }
        if(command=="REMOVE_BOTTOM"){
            int a;
            cin>>a;

            while(a){
                pair<int,int> temp = deck.back();
                if(temp.second>=a){
                    map1[deck.back().first]-=a;
                    deck.back().second-=a;
                    a=0;
                }


                else{
                    map1[deck.back().first]-=deck.back().second;
                    a-=deck.back().second;
                    deck.pop_back();
                }
                
                if(temp.first==majority.first){
                    queue1.pop();
                    if(queue1.top().second>=map1[deck.back().first]){
                    while(map1[queue1.top().first]!=queue1.top().second){
                        queue1.pop();
                    }
                    majority = {queue1.top().first,queue1.top().second};
                    }
                }
                

            }
            cout<<majority.first<<endl;
        }

     }
    return 0;
}