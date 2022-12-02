#include <iostream> 
#include<vector> 
#include<queue> 
#include <algorithm> 
 
using namespace std; 
 
class worker{ 
    public: 
        long long  initial; 
        long long  annoyance; 
        long long next; 
        worker(): initial(0), annoyance(0),next(0){} 
        worker(long long  initial,long long  annoyance,long long next):initial(initial), annoyance(annoyance),next(next){} 
     
}; 
 
bool operator< (const worker& p1, const worker& p2) 
{ 
    if (p1.next==p2.next){ 
        return p1.annoyance > p2.annoyance; 
    }
    else{ 
    return p1.next > p2.next; 
    }
} 
 
 
int main(){ 
    long long  h,c; 
    cin>>h>>c; 
 
    priority_queue<worker,vector<worker>,less<vector<worker>::value_type>>queue1; 
 
    for (int i=0;i<c;i++){ 
        long long N,A; 
        cin>>N>>A; 
        queue1.push(worker(N,A,N+A)); 
    } 
 
    while(h--){ 
        worker top = queue1.top(); 
        top.initial=top.next; 
        top.next+=top.annoyance; 
        queue1.pop(); 
        queue1.push(top); 
    } 
 
    int max=0;
    while(!queue1.empty()){
        if(queue1.top().initial>max){
            max = queue1.top().initial;
        }
        queue1.pop();
    }

    cout<<max<<endl; 
 
    return 0;    
}