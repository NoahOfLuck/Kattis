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
    int n,q;
    cin>>n>>q;
    map<int,int>map1; //parent of group
    map<int,int>map2; //count

    int index = 0;

    while(q--){
        char command;
        cin>>command;
        if (command == 't'){
            int a,b;
            cin>>a>>b;

            if(map1.find(a)!=map1.end()){
                map1[b]=a;
            }
            else if(map1.find(b)!=map1.end()){
                map
            }




        }




    }








    return 0;
}