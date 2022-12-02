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
    int N; cin>>N;
    int count=0;
    N=ceil(float(N)/100);
    while(N>=5){
        N-=5;
        count+=1;
    }
    while(N>=2){
        N-=2; count+=1;
    }
    while(N>=1){
        N-=1;count+=1;
    }


    cout<<count<<endl;

    return 0;
}