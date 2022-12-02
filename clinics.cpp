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

class patients{
    public:
        string name;
        int priority;

    patients(): name(""),priority(0){}
    patients(string name,int priority):name(name),priority(priority){}

    bool operator< (const patients worker1) const{
            if(priority != worker1.priority){
                return priority>worker1.priority;
            }
            return name<worker1.name;
        }
};

int main(){
    set<patients>set1;
    unordered_map<string,int>map1;
    int Q,K;
    cin>>Q>>K;

    for(int i=0;i<Q;i++){
        int curr;
        cin>>curr;

        if(curr==1){
            int T,S;
            string name;
            cin>>T>>name>>S;
            int priority = S+(K*(-T));
            set1.insert(patients(name,priority));
            map1[name]=priority;
        }

        else if(curr==2){
            int temp;
            cin>>temp;
            if(set1.empty()){
                cout<<"doctor takes a break"<<endl;
            }
            else{
            patients one = *set1.begin();
            // if(set1.size()>1){
            // auto it = set1.begin();
            // it++;
            // patients two = (*it);

            // one.priority+= temp*K;
            // two.priority += temp*K;

            // if(one.priority>=two.priority){
            //     cout<<one.name<<endl;
            //     set1.erase(set1.begin());
            // }
            // else{
            //     cout<<two.name<<endl;
            //     set1.erase(it);
            // }
            // }

            // else{
                cout<<one.name<<endl;
                set1.erase(set1.begin());
            // }

            }
        }

        else{
            int kkb;
            string jx;
            cin>>kkb>>jx;
            
            if(map1.find(jx)!=map1.end()){
                int lol = map1[jx];
                if(set1.find(patients(jx,lol))!=set1.end()){
                    auto it1 = set1.find(patients(jx,lol));
                    set1.erase(it1);
                }
            }

        }
    }



    return 0;
}