#include <iostream>
#include<math.h>

using namespace std;

int main(){
    int T , P, N;
    cin>>T>>P>>N;

    int watch = 0;
    int baseline = T;

    while(N--){
        int curr;
        cin>>curr;

        if(curr>=baseline){
            watch +=1;
            double deduct = double(curr-baseline)* double(P/ 100.0);
            baseline = ceil(double(T) - deduct);
            
        }

        else{
            double plus = double(baseline-curr)* double(P/100.0);
            baseline = ceil(double(T) + plus );
        }

    }


    cout<<watch<<endl;




    return 0;
}