#include <iostream>
#include<vector>
#include<map>

using namespace std;

int binarySearch(vector<int> arr,int x){
    int lo=0, hi=arr.size()-1;
    int mid;

    while(hi-lo>1){
        int mid = (hi +lo)/2;

        if(arr[mid]<x){
            lo=mid+1;
        }

        else{
            hi=mid;
        }
    }

    if(arr[lo]==x){
        return lo;
    }

    else if(arr[hi]==x){
        return hi;
    }
    else{
        return -1;
    }
}

int first_occurence(const vector<int>&a,int x){
    int out = binarySearch(a,x);
    if(out !=-1){
        for(int i=out;i>0&&a[i]==x;--i){
            out=i;
        }
    }
    return out;
}

int last_occurence(const vector<int>&a,int x){
    int out = binarySearch(a,x);
    if (out !=-1){
        for(int i=out;i<a.size()&&a[i]==x;i++){
            out=i;
        }
    }
    return out;
}

int main(){
    std::ios_base::sync_with_stdio(0), std::cin.tie(0);
    int N;
    cin>>N;
 
    map<int,int>map2;
    for(int i=0;i<N;i++){
        int curr;
        cin>>curr;
        if(map2.find(curr)==map2.end()){
            map2[curr]=1;

        }
        else{
            map2[curr]+=1;
        }
    }

    vector<int>sorted;
    for (map<int,int>::iterator iter = map2.begin(); iter != map2.end(); ++iter){
        for(int i=0;i<map2[iter->first];i++){
            sorted.push_back(iter->first);
        }

    }
    int L;
    cin>>L;

    while(L--){
        int s,e;
        cin>>s>>e;

        int index1=first_occurence(sorted,s);
        int index2=last_occurence(sorted,e); 

        if(index2==-1 && (s>sorted[sorted.size()-1]||e<sorted[0])){
            cout<<0<<endl;
        }

        else{

        while(index1==-1){
            s+=1;
            index1= first_occurence(sorted,s);
        }

        while(index2==-1){
            e-=1;
            index2=last_occurence(sorted,e);
        }


        cout<<(index2-index1+1)<<endl;
        }
    }

return 0;
}


