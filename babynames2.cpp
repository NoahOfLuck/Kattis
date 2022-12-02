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

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
  
#define ordered_set tree<string, null_type,less<string>, rb_tree_tag,tree_order_statistics_node_update>

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    ordered_set male1;
    ordered_set female1;

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
                }
            if(gender==2){
                female1.insert(name);
            }
        }
        else if(N==2){
            string name;
            cin>>name;
            if(male1.find(name)!=male1.end()){
                male1.erase(name);
            }
            else{
                female1.erase(name);
            }
        }

        else if(N==3){
            string s,e;
            int g;
            cin>>s>>e>>g;

            if(g==0){
                int count =  (male1.order_of_key(e)-male1.order_of_key(s)) + (female1.order_of_key(e)-female1.order_of_key(s));
                cout<<count<<endl;
            }

            if(g==1){
                int count = male1.order_of_key(e)-male1.order_of_key(s);
                cout<<count<<endl;
            }

            if(g==2){
                int count = female1.order_of_key(e)-female1.order_of_key(s);
                cout<<count<<endl;
            }
        }


    }






    return 0;
}