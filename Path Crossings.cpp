#include <string>
#include <iostream>
#include<math.h>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int>player;
    vector<vector<int>>deets;
    
    int count=0;
    int N,P;
    cin>>P>>N;

    while(N--){
        vector<int>arr(4,0);
        for (int i=0;i<4;i++){
            int curr;
            cin>>curr;
            arr[i]=curr;
        }

        deets.push_back(arr);
    }

    sort(deets.begin(),deets.end());

    for (int i=0;i<deets.size();i++){
        cout<<deets[i][3]<<endl;
    }

    return 0;

}