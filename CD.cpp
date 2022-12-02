#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<string>
#include<unordered_set>
#include<sstream>
#include<set>
#include<cstring>

using namespace std;

int main(){
    long long a,b;

    while(cin>>a>>b && a!=0 && b!=0){

    long long count=0;
    unordered_set<long long> set1;

    for(long long i=0;i<a;i++){
        long long curr;
        cin>>curr;
        set1.insert(curr);
    }

    for(long long j=0;j<b;j++){
        long long temp;
        cin>>temp;
        if(set1.find(temp)==set1.end()){
            continue;
        }

        else{
            count+=1;
        }
    }
    cout<<count<<endl;
    }
    
    return 0;
}