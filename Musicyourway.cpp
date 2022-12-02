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
#include<list>

using namespace std;

int index1;

bool cmp(vector<string> vector1, vector<string> vector2 ){
    return vector1[index1]<vector2[index1];
}



int main(){
    vector<string> list1;

    string curr;
    getline(cin,curr);

    string lol="";
    for(int i=0;i<=curr.size();i++){
        if(curr[i] ==' '|| i == curr.size()){
            list1.push_back(lol);
            lol ="";
        }
        else{
            lol += curr[i];
        }
    }

    int N;
    cin>>N;

    vector<vector<string>> biglist;

    for(int i=0;i<N;i++){
        vector<string>list2;
        for(int j=0;j<list1.size();j++){
            string temp;
            cin>>temp;
            list2.push_back(temp);
        }
        biglist.push_back(list2);
    }



    int C;
    cin>>C;
    for(int k=0;k<C;k++){
        string com;
        cin>>com;
        auto it = find(list1.begin(),list1.end(),com);

        index1 = it-list1.begin();

        stable_sort(biglist.begin(),biglist.end(),cmp);

    
        cout<<curr<<endl;
        for(int i=0;i<biglist.size();i++){
            for(int j=0;j<biglist[i].size();j++){
                cout<<biglist[i][j]<<' ';
            }
            cout<<endl;
        }
        cout<<endl;
    
    }

    return 0;
}