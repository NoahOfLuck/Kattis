#include <iostream>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>

using namespace std;

class worker{
    public:
        int V;
        int count;
        worker(): V(0),count(0){}
        worker(int V,int count):V(V),count(count){}
};

int main(){
    std::ios_base::sync_with_stdio(0), std::cin.tie(0);
    int N,Q;
    cin>>N>>Q;

    map<int,int>map1;
    while(N--){
        int curr;
        cin>>curr;

        if(map1.find(curr)==map1.end()){
            map1[curr]=1;
        }
        else{
            map1[curr]+=1;
        }
    }

    while(Q--){
        int T,D;
        cin>>T>>D;
        if(T==1){
            auto it = map1.upper_bound(D);
            if(it==map1.end()){
                cout<<-1<<endl;
            }
            else{
            cout<<(*it).first<<endl;
            map1[(*it).first]-=1;
            if(map1[(*it).first]<=0){
                map1.erase(it);
            }
            }
        }

        if(T==2){
            auto it = map1.lower_bound(D);
            if(it != map1.begin()){
                if((*it).first!=D && (it!=map1.end()||it!=map1.begin())){
                it--;
                }
            }
            if((*it).first>D && it==map1.begin()){
                cout<<-1<<endl;
            }
            else{
            cout<<(*it).first<<endl;
            map1[(*it).first]-=1;
            if(map1[(*it).first]<=0){
                map1.erase(it);
            }
            }
        }


    }




    return 0;
}