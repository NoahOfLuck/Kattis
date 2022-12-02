#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int binarysearchl(vector<int>& A,int n,int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if (x==A[mid]){
            high=mid-1;
        }
        else if(x<A[mid]){
            high = mid-1;
        }
        else{
            low=mid+1;
        }
    }
    
    return high;
}

int binarysearchh(vector<int>& A,int n,int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if (x==A[mid]){
            low=mid+1;
        }
        else if(x<A[mid]){
            high = mid-1;
        }
        else{
            low=mid+1;
        }
    }
    
    return low; 
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

        int index1=binarysearchl(sorted,sorted.size(),s);
        int index2=binarysearchh(sorted,sorted.size(),e); 

        printf("%i \n",index2-index1-1);
        
    }

return 0;
}
