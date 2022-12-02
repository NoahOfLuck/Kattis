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

using namespace std;

int main(){
    set<int>heights;
    vector<int>list1;
    int N;
    cin>>N;
    
    for(int i=0;i<N;i++){
        int curr;
        cin>>curr;
        list1.push_back(curr);
    }

    int start=0;
    int index =1;

    while(index<list1.size()){
        if(list1[index]<list1[start]){
            index+=1;
        }
        else{
            if(index-start<2){
                start+=1;
                index+=1;
            }

            else{
                
            }
        }


    }

    auto it =heights.end();
    it--;
    cout<<*it<<endl;
    
    
    return 0;
}