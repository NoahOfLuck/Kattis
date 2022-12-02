#include <iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int binarySearch1(vector<int> arr,int x){
    int lo=0, hi=arr.size()-1;
    int mid;

    while(hi-lo>1){
        int mid = (hi +lo)/2;
        if(arr[mid]>=x){
            hi=mid;
        }

        else{
            lo=mid+1;
        }
        
    }
        return lo;
}

int binarySearch2(vector<int> arr,int x){
    int lo=0, hi=arr.size()-1;
    int mid;

    while(hi-lo>1){
        int mid = (hi +lo)/2;

        if(arr[mid]<=x){
            lo=mid;
        }

        else{
            hi=mid-1;
        }
    }
        return hi;
}

int main(){
    std::ios_base::sync_with_stdio(0), std::cin.tie(0);
    int N;
    cin>>N;
 
    vector<int>sorted;
    for(int i=0;i<N;i++){
        int curr;
        cin>>curr;
        sorted.push_back(curr);
    }

    sort(sorted.begin(),sorted.end());

    int L;
    cin>>L;

    while(L--){
        int s,e;
        cin>>s>>e;

        int index1=binarySearch1(sorted,s);
        int index2=binarySearch2(sorted,e); 

        cout<<(index2-index1+1)<<endl;
        
    }

return 0;
}


