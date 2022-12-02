#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>
#include<cmath>
#include<unordered_map>

using namespace std;

bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
    return a.second > b.second;
}
  
// Function to sort the map according
// to value in a (key-value) pairs
void sort(map<string, int>& M)
{
  
    // Declare vector of pairs
    vector<pair<string, int> > A;
  
    // Copy key-value pair from Map
    // to vector of pairs
    for (auto& it : M) {
        A.push_back(it);
    }
  
    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);
  
    // Print the sorted value
    for (auto& it : A) {
  
        cout << it.first << ' '
             << it.second << endl;
    }
}


int main(){
    std::ios_base::sync_with_stdio(0), std::cin.tie(0);
    int N;
    cin>>N;
    int id=0;
    unordered_map<string,int>map2;
    map<string,int> map1;
    while(N--){
        int command;
        cin>>command;

        if(command ==0){
            string name;
            int number;
            cin>>name>>number;
            map1[name]=number;
            map2[name]=id;
            id++;
        }

        else if(command==3){
            if(map1.empty()){
            cout<<"The clinic is empty"<<endl;
        }
        else{
            vector<string>temp;
            sort(map1);
            int IL = (*map1.begin()).second;
            auto it1 = map1.begin();
            it1++;
            while((*it1).second== IL){
                temp.push_back((*it1).first);
            }
            int max = map2[temp[0]];
            string high = temp[0];
            for(int i=1;i<temp.size();i++){
                if(map2[temp[i]]>max){
                    max=map2[temp[i]];
                    high = temp[i];
                }
            }
            cout<<high<<endl;
        }
        }
        else if(command == 1){
            string name;
            int number;
            cin>>name>>number;
            map1[name]+=number;
        }

        else if(command==2){
            string name;
            cin>>name;
            map1.erase(name);
        }
    }

    return 0;
}