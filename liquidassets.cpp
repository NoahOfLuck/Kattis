#include <string>
#include <iostream>
#include<math.h>
#include<sstream>

using namespace std;

int main(){
    string input;
    string input1;
    getline(cin,input);
    getline(cin,input1);
    string final = "";

    for (int i=0; i<input1.length()-1;i++){
        if(i==0){
            final +=input1[i];
            continue;
        }

        if(i==1){
            if(input1[i]==input1[0]){
                continue;
            }
        }

        if(input1[i-1]==' '){
            final+=input1[i];
            continue;
        }

        if(input1[i+1]==' '){
            final+=input1[i];
            continue;
        }
        
        if (input1[i-2]==' '&& input1[i-1]==input1[i]){
            continue;
        }

        if(input1[i]== 'a'||input1[i]== 'e'||input1[i]== 'i'||input1[i]== 'o'||input1[i]== 'u'){
            continue;
        }

        if(input1[i]==input1[i+1]){
            continue;
        }

        else {
            final += input1[i];
        }

    }

    final += input1[input1.length()-1];

    cout<<final;
    return 0;


}