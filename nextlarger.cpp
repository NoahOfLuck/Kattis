#include <iostream>
#include <algorithm>
#include<vector>
#include<stack>
#include<queue>

using namespace std;

class worker{
    public:
        int val;
        int index;

    worker(): val(0),index(0){}
    worker(int val,int index):val(val),index(index){}
};

int main(){
    int N;
    cin>>N;

    int count =0;
    vector<worker> a;
    for(int i=0;i<N;i++){
        int curr;
        cin>>curr;
        a.push_back(worker(curr,count));
        count+=1;
    }

    vector<int>kkb;
    stack<worker>b;
    for(int i=0;i<N-1;i++){
        if(a[i].val<a[i+1].val){
            kkb.push_back(a[i+1].index);
        }
        else{
            kkb.push_back(-1);
            b.push(a[i]);
        }
    }
    kkb.push_back(-1);
    b.push(a[a.size()-1]);

    
    worker max=b.top();
    
    while(!b.empty()){
        b.pop();
        if(b.empty()){
            break;
        }
        worker compare = b.top();
        if (compare.val<max.val){
            kkb[compare.index]=max.index;
        }
        else{
            max=compare;
        }
    }


    for(int i=0;i<kkb.size();i++){
        cout<<kkb[i]<<endl;
    }


    return 0;

}