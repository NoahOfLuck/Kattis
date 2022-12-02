#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>

using namespace std;

class worker{
    public:
        int  initial;
        int  annoyance;
        int next;
        worker(): initial(0), annoyance(0),next(0){}
        worker(int  initial,int  annoyance,int next):initial(initial), annoyance(annoyance),next(next){}
    
};

bool operator< (const worker& p1, const worker& p2)
{
    if (p1.next==p2.next){
        return p1.annoyance > p2.annoyance;
    }
    return p1.next > p2.next;
}


int main(){
    int  h,c;
    cin>>h>>c;

    priority_queue<worker,vector<worker>,less<vector<worker>::value_type>>queue1;

    for (int i=0;i<c;i++){
        int N,A;
        cin>>N>>A;
        queue1.push(worker(N,A,N+A));
    }

    h--;
    while(h--){
        worker top = queue1.top();
        top.initial=top.next;
        top.next+=top.annoyance;
        queue1.pop();
        queue1.push(top);
    }

    cout<<queue1.top().next<<endl;

    return 0;   
}
