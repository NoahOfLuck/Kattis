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
#include<unordered_map>

using namespace std;

int main(){
    map<char,pair<int,int>> map1;
    map1 = {{'A',{11,11}},{'K',{4,4}},{'Q',{3,3}},{'J',{20,2}},{'T',{10,10}},{'9',{14,0}},{'8',{0,0}},{'7',{0,0}}};
    int count =0;
    int N; char S;
    cin>>N>>S;

    for(int i=0;i<N*4;i++){
        char a,b;
        cin>>a>>b;
        if(b == S){
            count+=map1[a].first;
        }
        else{
            count+=map1[a].second;
        }
    }

    cout<<count<<endl;
    return 0;
}