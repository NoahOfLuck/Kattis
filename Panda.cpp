#include <iostream>

using namespace std;

int main(){
    long long N, M;
    cin>>N>>M;

    int sneezed = 0;

    while (M){
        M = M/2;
        if (M%2==1){
            sneezed+=1;
            M-1;
        }
        else{
            continue;
        }
    }

    cout<<sneezed<<endl;

    return 0;

}