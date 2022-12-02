#include <iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>
#include<climits>

using namespace std;

int main(){
    map<int,pair<int,int>> map1;

    int N;
    cin>>N;
    
    for(int i=1;i<N+1;i++){
        int a;
        cin>>a;

        map1.insert(make_pair(i,make_pair(a,a)));
    }

    int M;
    cin>>M;

    while(M--){
        int f,s;
        cin>>f>>s;
        map1[f].second+= map1[s].first;
        map1[s].second+= map1[f].first;
    }

    int min = INT_MAX;
    int index=0;
    for(int j=1;j<N+1;j++){
        if(map1[j].second<min){
            min = map1[j].second;
            index = j;
        }
    }

    cout<<index<<endl;



    return 0;
}