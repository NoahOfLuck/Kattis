#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>

using namespace std;

int main(){
    int a,b,c;

    cin>>a>>b>>c;

    int total = a+b;

    int count=0;
    while(total>=c){
        count+= (total/c);
        total = (total%c) + (total/c);
    }

    cout<<count<<endl;
    return 0;
}