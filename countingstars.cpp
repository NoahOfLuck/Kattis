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

using namespace std;

// typedef vector<int> visited;

// vector<visited> Row;
// visited column;

set<pair<int,int>>set1;

int main(){
    int x,y;
    while(cin>>x>>y){
    // Row.assign(x,column);
    // column.assign(y,0);

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            char temp;
            cin>>temp;

            if(temp=='-'){
                set1.insert(pair(i,j));
            }
        }
    }

    auto it = set1.begin();

    while(set1.size()){
        
    }    




    }
return 0;
}