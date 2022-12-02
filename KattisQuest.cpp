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
    long long N;
    cin>>N;
    map<int,multiset<long long>>map1;

    while (N--){
        string command;
        cin>>command;

        if(command=="add"){
            long long E,G;
            cin>>E>>G;
            map1[E].insert(G);
        }

        if(command=="query"){
            long long sum=0;
            long long X;
            cin>>X;


            auto it = map1.lower_bound(X);
            if(it != map1.begin() && (*it).first != X){
                it--;
            }
            
            while(X>=(*map1.begin()).first && !map1.empty()){
                if(X<(*it).first){
                    it--;
                }
                else{
                X -=(*it).first;
                auto it1 =(*it).second.end();
                it1--;
                sum+=(*it1);
                (*it).second.erase(it1);
                if((*it).second.empty()){
                    if(it== map1.begin()){
                        map1.erase(it);
                        break;
                    }

                    auto it2 = it;
                    it--;
                    map1.erase(it2);
                }
                }
                

            }
            
            cout<<sum<<endl;
            
        }
        }

    return 0;
}


