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

int  main(){
    
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    int best = 100000000;
    set<long long>set1;
    while(c--){
        long long cost;
        cin>>cost;


        for(int i=0;i<d;i++){
            long long curr;
            cin>>curr;
            if(curr>=a){
                if(best>(cost*a)){
                    best = cost*a;
                }
            }
        }

    }

    if(best<=b){
        cout<<best<<endl;
    }
    
    else{
    cout<<"stay home"<<endl;
    }
    return 0;
}