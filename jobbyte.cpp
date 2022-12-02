#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(0), std::cin.tie(0);
    vector<int> list1;
    int count =0;
    int N;

    cin>>N;
    

    while(N--){
        int curr;
        cin>>curr;
        curr--;
        list1.push_back(curr);
    }

    for(int i=0;i<list1.size();i++){
        while(list1[i]!=i){
            count++;
            swap(list1[i],list1[list1[i]]);
        }
    }

    cout<<count<<endl;
    
    return 0;
}