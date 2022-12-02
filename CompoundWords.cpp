#include <iostream>
#include <set>
#include <vector>
#include<string>

using namespace std;

int main(){
    vector<string>list1;
    set<string>set1;
    string s;
    while(cin>>s){
        list1.push_back(s);
    }
    
    for(int i=0;i<list1.size();i++){
        for(int j=i+1;j<list1.size();j++){
            set1.insert(list1[i]+list1[j]);
            set1.insert(list1[j]+list1[i]);
        }
    }
    
    for(auto it=set1.begin();it!=set1.end();it++){
        cout<<(*it)<<endl;
    }
    
    
    
    return 0;
}