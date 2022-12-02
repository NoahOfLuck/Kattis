#include <iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;

bool cmp(string a, string b) { 
    if(a[0]==b[0]){
        return a[1]<b[1];
    }
    else{
        return a[0]<b[0];
    }
}

int main (){

int N;

while(cin>>N){
    if(N==0){
        break;
    }

    vector<string>set1;;
    for(int i=0;i<N;i++){
        string curr;
        cin>>curr;
        set1.push_back(curr);
    }

    stable_sort(set1.begin(), set1.end(), cmp);

    for(int i=0;i<set1.size();i++){
        cout<<set1[i]<<endl;

    }
    cout<<endl;

}

return 0;
}