#include <string>
#include <iostream>
#include<math.h>
#include<sstream>
#include<vector>
#include<numeric>
#include<algorithm>

using namespace std;
template <typename T>
void swap(std::vector<T>& vec, int i, int j) {
    T temp = vec[i];
    vec[i] = vec[j];
    vec[j] = temp;
}

int main(){
    int N;
    cin>>N;
    

    vector<int>arr;

    for(int i=0;i<N;i++){
        int curr;
        cin>>curr;
        arr.push_back(curr);
    }

    vector<int>queue;
    for(int i=0;i<N;i++){
        if (arr[i]==0){
            continue;
        }
        else{
            queue.push_back(arr[i]);
        }
    
    }
    
    queue.push_back(0);

    vector<int>answer;
    
    int l = N-1;

    int summ=0;
    for(int i=0;i<N;i++){
        summ+= (i+1)*queue[i];
    }

    answer.push_back(summ);

    while(l>0){
   
    swap(queue,l,l-1);
    
    int sum=0;
    for(int i=0;i<N;i++){
        sum+= (i+1)*queue[i];
    }
    
    answer.push_back(sum);
    l-=1;
    continue;
    
    }

    cout<<*max_element(answer.begin(),answer.end());
    return 0;

}

