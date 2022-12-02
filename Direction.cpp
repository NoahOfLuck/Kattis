#include <string>
#include <iostream>
#include<math.h>

using namespace std;

int main() {
    string input;
    getline(cin,input);//get input

    int counter =0;
    int temp = 0;
    string value1 = "";
    string value2 = "";
    string value3 = "";

    while (counter<input.length()){
        if (input[counter] != ' ' && temp==0){
            value1 += input[counter];
            counter+=1;
            continue;
        }

        else if (input[counter] != ' ' && temp==1){
            value2 += input[counter];
            counter+=1;
            continue;
        }

        else if (input[counter] != ' '&& temp==2){
            value3 += input[counter];
            counter+=1;
            continue;
        }

        else if (input[counter] == ' '){
            temp+=1;
            counter+=1;
            continue;
        }

    }


    int difference1 = stoi(value1) - stoi(value2);
    int difference2 = stoi(value2)-stoi(value3);


    if ((difference1<0 && difference2>0) || (difference1>0 && difference2<0)){
        cout<<"turned";
        return 0;
    }
    else if(abs(difference1) == abs(difference2)){
        cout<<"cruised";
        return 0;
    }

    else if(abs(difference1)<abs(difference2)){
        cout<<"accelerated";
    }

    else if (abs(difference1)>abs(difference2)){
        cout<<"braked";
    }

    return 0;


}