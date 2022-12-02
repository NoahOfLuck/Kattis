#include <string>
#include <iostream>
#include<math.h>
#include<sstream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    int N = 5;

    vector <int> arr;

    for(int i=0; i<N; i++){
        int curr;
        cin>>curr;
        arr.push_back(curr);
    }


    for(int k=0;k<N;k++){

    for(int i=0;i<N-1;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            for(int j=0;j<N;j++){
                cout<<arr[j]<<' ';
            }
            cout<<endl;
        }
        else{
            continue;
        }
    }
    }
    return 0;





}