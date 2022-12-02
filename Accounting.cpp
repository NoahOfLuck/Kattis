#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include <unordered_map>
#include<string>

using namespace std;


int main(){
    unordered_map<int,int> map1;
    int N,Q;
    cin>>N>>Q;

    int default1 =0;

    for(int i =0; i<Q; i++){
        string com;
        cin>>com;
        if(com == "SET"){
            int P, V;
            cin>>P>>V;
            map1[P]=V;
        }

        if(com=="PRINT"){
            int P;
            cin>>P;
            if(map1.find(P)==map1.end()){
                cout<<default1<<endl;
            }

            else{
                cout<<map1[P]<<endl;
            }
        }

        if(com=="RESTART"){
            int V;
            cin>>V;
            default1 = V;
            map1.clear();
        }

    }




    return 0;
}