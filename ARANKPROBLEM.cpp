#include <iostream>
#include<list>
#include <algorithm>
#include<string>
#include<vector>
#include<set>
#include<iterator>

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;

    list<string>list1;

    for(int i=1;i<N+1;i++){
        list1.push_back("T"+ to_string(i));
    }

    while(M--){
        string Ti,Tj;
        cin>>Ti>>Tj;

        auto it = find(list1.begin(),list1.end(),Ti);
        auto it1 = find(list1.begin(),list1.end(),Tj);

        if(distance(it,list1.end())>distance(it1,list1.end())){
            continue;
        }

        it++;
        list1.insert(it,*it1);
        list1.erase(it1);

    }
    
    


    for(auto it=list1.begin();it!=list1.end();it++){
        cout<<*it<<' ';
    }



    return 0;
}