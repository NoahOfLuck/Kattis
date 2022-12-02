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

int main(){
    int N,C;
    cin>>N>>C;

    int total = 0;
    while(C--){
        int curr;
        cin>>curr;
        total += N-curr;
    }

    total+=N;

    cout<<total<<endl;






    return 0;
}