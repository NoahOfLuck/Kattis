#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<map>

using namespace std;

class worker{
    public:
        int  A;
        int  count;
        worker(): A(0), count(0){}
        worker(int  A,int  count):A(A), count(count){}
    
};

bool operator< (const worker& worker1, const worker &worker2)
    {
        return worker1.count < worker2.count;
    }

int main(){
    std::ios_base::sync_with_stdio(0), std::cin.tie(0);
    int N,K;
    cin>>N>>K;

    map<int,int>map1;
    for(int i=0;i<N;i++){
        int curr;
        cin>>curr;
        if(map1.find(curr)==map1.end()){
            map1[curr]=1;

        }
        else{
            map1[curr]+=1;
        }
    }

    priority_queue<worker,vector<worker>,less<vector<worker>::value_type>>queue1;

    for (map<int,int>::iterator iter = map1.begin(); iter != map1.end(); ++iter){
        queue1.push(worker(iter->first,map1[iter->first]));
    }

    while(K--){
        worker max = queue1.top();
        queue1.pop();
        // cout<<queue1.top().A<<endl;
        max.count -= 1;
        // cout<<max.A<<" "<<max.count<<endl;
        queue1.push(max);
        // cout<<queue1.top().A<<endl;
    }

    // while(queue1.empty()==false){
    //     cout<<queue1.top().count<<endl;
    //     queue1.pop();
    // }

    cout<<queue1.top().count<<endl;

    return 0;
}