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
#include<unordered_map>

using namespace std;


int main(){
    long long N;
    cin>>N;

    long long min =10000000000000;
    long long count=0;
    long long index =0;
    vector<long long>weight;
    for(int i=0;i<N;i++){
        long long w;
        cin>>w;
        if(w<min){
            min =w;
            index = i;
        }
        weight.push_back(w);
    }

    for(int i=0;i<N;i++){
        if(i==index){
            continue;
        }
        count += weight[i]+min;
    }


    cout<<count<<endl;


    return 0;
}