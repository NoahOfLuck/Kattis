#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include <unordered_map>

using namespace std;

class worker{
    public:
        int  A;
        int  time;
        int count;
        worker(): A(0), time(0),count(0){}
        worker(int  A,int  time,int count):A(A), time(time),count(count){}
    
};

bool operator< (const worker& worker1, const worker &worker2)
    {
    if (worker1.time==worker2.time){
        return worker1.A>worker2.A;
    }
        return worker1.time > worker2.time;
    }

int main(){
    std::ios_base::sync_with_stdio(0), std::cin.tie(0);
    int l,k,s;
    cin>>l>>k>>s;

    unordered_map<int,worker> unmap;
    for(int i=0;i<l;i++){
        int curr;
        float time;
        cin>>curr>>time;
        int minutes = int(time);
        float mili = (time-minutes)*100;
        int time1 = minutes*60 + int(mili);
        if(unmap.find(curr)==unmap.end()){
            unmap[curr]=worker(curr,time1,1);

        }
        else{
            unmap[curr].count+=1;
            unmap[curr].time +=time1;
        }

    }

    priority_queue<worker,vector<worker>,less<vector<worker>::value_type>>queue1;

    for (unordered_map<int,worker>::iterator iter = unmap.begin(); iter != unmap.end(); ++iter){
        if(unmap[iter->first].count<k){
            continue;
        }

        int time = unmap[iter->first].time;
        queue1.push(unmap[iter->first]);
    }

    while(queue1.empty()==false){
        worker current = queue1.top();
        cout<<current.A<<endl;
        queue1.pop();
        
    }


    return 0;
}