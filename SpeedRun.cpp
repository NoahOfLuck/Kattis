#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>
#include<list>

using namespace std;

class worker{
    public:
        int start;
        int end;
        worker(): start(0),end(0){}
        worker(int start, int end):start(start),end(end){}
};

bool cmp(worker worker1,worker worker2){
    return worker1.end < worker2.end;
}

int main(){
    int G,N;
    cin>>G>>N;

    list<worker>list1;

    for(int i=0;i<N;i++){
        int s,e;
        cin>>s>>e;
        list1.push_back(worker(s,e));
    }

    list1.sort(cmp);
    int count = 1;
    auto it = list1.begin();
    while(it!=list1.end() || count>=G){
        auto it1 = it;
        it1++;
        
        while(it1!=list1.end()){
            if((*it1).start>=(*it).end){
                count+=1;
                it=it1;
                break;
            }
            else{
                it1++;
            }
        }

        if(it1==list1.end()){
        break;
        }
    }
    if(count>=G){
    cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}