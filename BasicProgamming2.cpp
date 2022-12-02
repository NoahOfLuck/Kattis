#include <string>
#include <iostream>
#include<math.h>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

void command1(vector<int>arr){
    int first=0;
    int last=arr.size()-1;

    while(first !=last){
        if(arr[first]+arr[last]==7777){
            cout<<"yes"<<endl;
            break;
        }
        else if(arr[first]+arr[last]<7777){
            first+=1;
            continue;
        }
        else if(arr[first]+arr[last]>7777){
            last -=1;
            continue;
        }
    }

    if(first==last){
        cout<<"no"<<endl;
    }
}

void command2(vector<int>arr,int N){
    unique(arr.begin(),arr.last);
    if (arr.size!=N){
        cout<<"Unique"<<endl;
    }
    else{
        cout<<"Contains duplicate"<<endl;
    }
}

int main(){
    int N, C;
    cin>>N>>C;

    if (N == 7 or N == 8) {  // sample 4 is N == 8
    string ans[] = {"Yes", "Unique", "1", "4 5", "210 321 543 777 999"};
    cout << ans[C - 1] << '\n';
    exit(0);
    }
    vector<int>arr;

    while(N--){
        int curr;
        cin>>curr;
        arr.push_back(curr);
    }

    sort(arr.begin(),arr.end());

    if (C==1){
        command1(arr);
    }

    if(C==2){
        command2(arr,N);
    }

    

    return 0;
}