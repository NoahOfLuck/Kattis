#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
// #include <unordered_map>
#include<string>
#include<map>
#include<set>

using namespace std;
void show(map<string, set<string> >& mapOfSet)
{
    // Using iterator to access
    // key, value pairs present
    // inside the mapOfSet
    for (auto it = mapOfSet.begin();
         it != mapOfSet.end();
         it++) {
  
        // Key is integer
        cout << it->first << " ";
  
        // Value is a set of string
        set<string> st = it->second;
  
        // Strings will be printed
        // in sorted order as set
        // maintains the order
        for (auto it = st.begin();
             it != st.end(); it++) {
            cout << (*it) << ' ';
        }
        cout << '\n';
    }
}


int main(){
map<string,set<string>>map1;

int N=1;

while (N !=0){
    cin>>N;
    for(int i=0;i<N;i++){
        string order;
        getline(cin,order);
        int index = 0;
        while(order[index]!=' '){
            index++;
        }
        string name;
        for(int i=0;i<index;i++){
            name+=order[i];
        }
        index++;
        int start = index;
        int end = index;
        while(index < order.size()){
            if(order[end]==' '){
                string item;
                for(int i=start;i<end;i++){
                    item+=order[i];
                }
                map1[item].insert(name);
            }
            else{
                end++;
            }
        }
        }

}

show(map1);


return 0;
}