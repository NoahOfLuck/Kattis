#include <iostream>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<vector>
#include<cstring>


using namespace std;

int main(){
    int N,P;

    cin>>N>>P;

    int left = 0;

    vector<int>list1;
    while(P--){
        int temp;
        cin>>temp;
        list1.push_back(temp);
    }

    int x = 0;
    int y=1;

    for(int i=0;i<list1.size()-1;i++){
        int temp1 = (list1[y]-list1[x])/2-1;
            left+=temp1;
            x+=1;
            y+=1;
    }

    int temp2 = (N-list1[list1.size()-1]+list1[0])/2-1;
        left+=temp2;
    


    cout<<left<<endl;



    return 0;
}