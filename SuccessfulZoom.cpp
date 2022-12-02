#include <string>
#include <iostream>
#include<math.h>
#include<sstream>
#include<vector>
#include <algorithm>

using namespace std;

bool is_strict_sorted(vector <int> a) {
    return is_sorted(a.begin(), a.end()) && unique(a.begin(), a.end()) == a.end();
}

int main(){
    int N;
    cin>>N;
    int smallest = 1;

     vector<int>arr;

    for(int i=0;i<N;i++){
        int curr;
        cin>>curr;
        arr.push_back(curr);
    }

    while(smallest<=N/2){
    vector<int>temp;
    for (int i=smallest-1;i<N;i+=smallest){
        temp.push_back(arr[i]);
    }
    if (is_strict_sorted(temp)){
        cout<<smallest;
        return 0;
    }
    else{
        smallest+=1;
        continue;
    }
    }

    cout<<"ABORT!";
    return 0;
    


}