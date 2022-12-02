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
#include<stack>
#include<list>

using namespace std;

typedef vector<int> vii;

int main(){
    int N; cin>>N;

    while(N--){
        int V,E; cin>>V>>E;
        vector<vii> AL(V,vii());
        vector<int> loc;
        vector<int> in;
        in.assign(V,0);

        for(int i=0;i<V;i++){
            int temp; cin>>temp;
            loc.push_back(temp);
        }

        for(int i=0;i<E;i++){
            int a,b;cin>>a>>b;
            a--;b--;
            AL[a].emplace_back(b);
            in[b]++;
        }

        queue<int>loc1;
        queue<int>loc2;

        for(auto& i : in){
            if(i==0){
                if(loc[i]==1){
                    loc1.push(i);
                }
                else{
                    loc2.push(i);
                }
            }
        }

        int curr = 1;
        int count =0;
        while(!loc1.empty()||!loc2.empty()){
           
            if(curr==1){
            while(!loc1.empty()){
                int curr = loc1.front(); loc1.pop();
                for(auto& j : AL[curr]){
                    in[j]--;
                    if(in[j]==0){
                        if(loc[j]==1){
                        loc1.push(j);
                        }
                        else{
                            loc2.push(j);
                        }
                    }
                } 
            }
            curr=2;
            count++;
            }


            if(curr==2){
            while(!loc2.empty()){
                int curr = loc2.front(); loc2.pop();
                for(auto& j : AL[curr]){
                    in[j]--;
                    if(in[j]==0){
                        if(loc[j]==1){
                            loc1.push(j);
                        }
                        else{
                            loc2.push(j);
                        }
                    }
                } 
            }
            curr=1;
            count++;
            }
            
        }
        cout<<count<<endl;

    }










    return 0;
}