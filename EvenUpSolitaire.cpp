#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> list1;
    int index=0;
    int index1=1;
    int count = N;

    for(int i=0;i<N;i++){
        int curr;
        cin>>curr;
        list1.push_back(curr);
    }

    while(index1<N){
        if((list1[index]+list1[index1])%2==0){
            index +=2;
            index1+=2;
            count-=2;
        }

        else{
            index1+=1;
            index+=1;
        }


    }


    cout<<count<<endl;


    return 0;
}