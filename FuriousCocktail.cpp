#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>
#include<list>

using namespace std;
 
 int main(){
    vector<int>list1;
    int N,D;
    cin>>N>>D;

    for(int i=0;i<N;i++){
        int t;
        cin>>t;
        list1.push_back(t);
    }

    sort(list1.begin(),list1.end(),greater<int>());

    for(int j=0;j<list1.size();j++){
        if(list1[j]-((list1.size()-j-1)*D)<=0){
            cout<<"NO"<<endl;
            return 0;
        }
        else{
            continue;
        }
    }


    cout<<"YES"<<endl;
    return 0;
 }