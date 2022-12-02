#include <iostream>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>
#include<vector>

using namespace std;

int main(){
    int L,H,N;

    cin>>L>>H>>N;

    vector<vector<char>>list1;
    vector<char>row;

    for(int i=0;i<L;i++){
        row.push_back('_');
    }

    for(int j=0;j<H;j++){
        list1.push_back(row);
    }

    char index = 'a';

    while(N--){
        int l,h,x,y;
        cin>>l>>h>>x>>y;
        
        for(int i=y;i<y+h;i++){
            if(i>=H){
                break;
            }
            else{
            for (int j=x;j<x+l;j++){
                if(j>=L){
                    break;
                }
                else{
                list1[i][j] = index;
                }
            }
            }
        }
        
        index++;
    }

    for(int i=0;i<list1.size();i++){
        for(int j=0;j <list1[i].size();j++){
            cout<<list1[i][j];
        }
        cout<<endl;
    }



    return 0;
}