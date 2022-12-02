#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>
#include<unordered_map>
#include<stack>

using namespace std;


// unordered_map<int,int>map1;
// unordered_map<int,int>visited;
// int max;

// int max;
// void DepthFirstSearch(int files){
//     visited[files]=1;
//     for(auto &v: map1){
//         if(visited.find(v)==visited.end()){
//             DepthFirstSearch(v);
//         }
//     }
// }

int main(){
    int N;
    cin>>N;

    int max=0;
    vector<int>list1;
    unordered_map<int,set<int>> map1;

    for(int i=0;i<N;i++){
        int curr;
        cin>>curr;
        if(curr>max){
            max=curr;
        }
        map1[curr].insert(i);
        list1.push_back(curr);
    }


    for(int i=0;i<N;i++){
        int index = i;
        int maxloc = 100;
        for(auto it= map1[max].begin();it!=map1[max].end();it++){
            if(abs(*it-index)<maxloc){
                maxloc=*it;
            }
        }

        if(maxloc==0){
            cout<<0<<" ";
        }

        int count=0;
        if(maxloc<index){
            int index2 = index--;
            while(index != maxloc){
                if(list1[index2]>list1[index]){
                    count++;
                    index--;
                    index2--;
                }
            }
        }

        if(maxloc>index){
            int index2 = index++;
            while(index != maxloc){
                if(list1[index2]>list1[index]){
                    count++;
                    index++;
                    index2++;
                }
            }
        }

        cout<<count<<" ";

    }














    return 0;
}