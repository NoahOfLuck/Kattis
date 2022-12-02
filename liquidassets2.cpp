#include <string>
#include <iostream>
#include<math.h>
#include<sstream>

using namespace std;

int main(){
    int N;
    cin>>N;

    string final = "";
    while(N--){
        string curr;
        cin>>curr;

        if(curr[0]!=curr[1]||curr[0]== 'a'||curr[0]== 'e'||curr[0]== 'i'||curr[0]== 'o'||curr[0]== 'u'){
        final += curr[0];
        }

        for(int i=1; i<curr.size()-1;i++){
            if(curr[i]==curr[i+1]){
            continue;
            }

            if(curr[i]== 'a'||curr[i]== 'e'||curr[i]== 'i'||curr[i]== 'o'||curr[i]== 'u'){
            continue;
            }

            else{
                final+= curr[i];
            }

        }

        if(curr.size()!=1){
        final += curr[curr.size()-1];
        }

        if(N>0){
        final +=" ";
        }
    }


    cout<<final<<endl;
    return 0;


}