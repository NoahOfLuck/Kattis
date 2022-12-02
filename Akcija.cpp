#include <iostream>
#include <vector>
#include<algorithm>
#include <list>

using namespace std;

int main(){
    int total =0;
    vector<int>list1;
    int N;
    cin>>N;
    while(N--){
        int C;
        cin>>C;
        list1.push_back(C);
    }
    
    sort(list1.begin(),list1.end(),greater<int>());
    
    for(int i=0;i<list1.size()-(list1.size()%3);i+=3){
        total += list1[i] + list1[i+1];
    }
    
    if(list1.size()%3==1){
        total+=list1[list1.size()-1];
    }

    if(list1.size()%3==2){
        total+=list1[list1.size()-1] + list1[list1.size()-2];
    }
    

    cout<<total<<endl;
    return 0;
}