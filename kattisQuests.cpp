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

    multimap<long long,long long> set1;

    for(int i=0;i<N;i++){
        string command;
        cin>>command;

        if(command=="add"){
            long long f,s;
            cin>>f>>s;
            set1.insert(pair<long long,long long>(f,s));
        }

        if(command=="query"){
            long long gold=0;
            long long q;
            cin>>q;
            auto it = set1.upper_bound(q);

            if(set1.empty()){
                gold=0;
            }

            else if((*it).first==q){
                    gold+=(*it).second;
                    set1.erase(it);
                }

            else if(distance(set1.begin(),it)>=2){
                it--;
                while(it!=set1.begin()){
                    if(q-(*it).first<0){
                        break;
                    }
                    else{
                    q-=(*it).first;
                    gold+=(*it).second;
                    auto it2 = it;
                    it--;
                    set1.erase(it2);
                    }
                }
                if(q-(*it).first>0){
                    gold+=(*it).second;
                    set1.erase(it);
                }

            }

            else{
                it--;
                gold+=(*it).second;
                set1.erase(it);
            }

            cout<<gold<<endl;

            }
            
        }

    return 0;
}