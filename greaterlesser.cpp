#include <iostream>
#include <algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>

using namespace std;

int main(){
    int n;
    cin>>n;

    map<int,int>a;
    vector<int>c;
    vector<char>b;
    for(int i=0;i<n;i++){
        int curr;
        cin>>curr;
        a[curr]=1;
    }

    for(auto&x:a){
        c.push_back(x.first);
    }

    for(int i=0;i<n-1;i++){
        char sign;
        cin>>sign;
        b.push_back(sign);
    }

    vector<int>d;
    int start = 0;
    int end = c.size()-1;

    for(int i=0;i<b.size();i++){
        if(b[i]=='<'){
            d.push_back(c[start]);
            start+=1;
        }
        else{
            d.push_back(c[end]);
            end-=1;
        }
    }

    d.push_back(c[start]);

    for(int i=0;i<d.size();i++){
        cout<<d[i]<<endl;
    }


    return 0;
}