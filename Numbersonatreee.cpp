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

using namespace std;

int main(){
    int H;
    cin>>H;

    vector<int>list1;

    int nodes = pow(2,H+1)-1;

    string command;
    cin>>command;

    int index = 1;

    for(int j=0;j<command.size();j++){
        if(command[j]=='L'){
            index= index *2;
        }
        else{
            index = index*2+1;
        }
    }

    cout<<nodes-index+1<<endl;

    return 0;
}