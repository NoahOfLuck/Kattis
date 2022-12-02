#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>

using namespace std;

int main(){
    map<int,int> a;
    queue<int>b;
    priority_queue<int,vector<int>,greater<int>>c;

    int N;
    cin>>N;

    for(int i=0;i<N;i++){
        int curr;
        cin>>curr;

        if (i == N - 1 && curr != N + 1) {
            printf("Error");
            return 0;
        }

        b.push(curr);
        if(a.find(curr)==a.end()){
            a[curr]=1;
        }
        else{
            a[curr]+=1;
        }

    }

    auto it = a.end();
    it--;
    int f = (*it).first;

    while(f!=0){
        if(a.find(f)==a.end()){
            c.push(f);
            f--;
        }
        else{
            f--;
        }
    }

    if(c.empty()){
        cout<<"Error"<<endl;
        return 0;
    }

    while(!b.empty()){
        int temp = b.front();
        b.pop();

        int compare = c.top();
        c.pop();

    cout<<compare<<endl;

    a[temp]-=1;
    if(a[temp]<=0){
        c.push(temp);
    }

    }


    return 0;
}