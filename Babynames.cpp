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

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    map<char,int> male;
    map<char,int>female;
    set<string>male1;
    set<string>female1;

    for(int i=65;i<91;i++){
        male[char(i)]=0;
        female[char(i)]=0;
    }


    int N;
    while(cin>>N){
        if(N==0){
            break;
        }
        else if(N==1){
            string name;
            int gender;
            cin>>name>>gender;
            if(gender==1){
                male1.insert(name);
                male[name[0]] += 1;
            }
            if(gender==2){
                female1.insert(name);
                female[name[0]] += 1;
            }

        }

        else if(N==2){
            string name;
            cin>>name;
            if(male1.find(name)!=male1.end()){
                male[name[0]]-=1;
            }
            else{
                female[name[0]]-=1;
            }
        }

        else if(N==3){
            char s,e;
            int g;
            cin>>s>>e>>g;

            if(g==0){
                auto it = male.lower_bound(s);
                auto it1 = female.lower_bound(s);
                int count=0;
                while(it != male.lower_bound(e)){
                    count += (*it).second;
                    it++;
                }

                 while(it1 != female.lower_bound(e)){
                    count += (*it1).second;
                    it1++;
                }

                cout<<count<<endl;
            }

            if(g==1){
                int count=0;
                auto it = male.lower_bound(s);
                while(it != male.lower_bound(e)){
                    count += (*it).second;
                    it++;
                }
                cout<<count<<endl;
            }

            if(g==2){
                int count=0;
                auto it = female.lower_bound(s);
                while(it != female.lower_bound(e)){
                    count += (*it).second;
                    it++;
                }
                cout<<count<<endl;
            }
        }


    }






    return 0;
}