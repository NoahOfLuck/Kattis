#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>
#include<list>
#include<math.h>

using namespace std;

int main(){
    double N;
    cin>>N;

    N = log2(N);
    N = ceil(N);
    
    cout<<N+1<<endl;
    
    return 0;
}