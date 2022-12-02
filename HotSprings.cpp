#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>
#include<stack>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> list1;
    stack <int> stack1;


    while(N--){
        int t;
        cin>>t;
        list1.push_back(t);
    }

    sort(list1.begin(),list1.end());

    int index1;
    int index2;
    if(list1.size()%2==1){
        cout<<list1[list1.size()/2]<<' ';
        index1 = list1.size()/2-1;
        index2 = list1.size()/2+1;
    }

    else{
        index1 = list1.size()/2-1;
        index2 = list1.size()/2;
    }

    while(index1>=0){
        cout<<list1[index1]<<' '<<list1[index2]<<' ';
        index1--;
        index2++;
    }

    return 0;
}


