#include <iostream>
#include<string>
#include<sstream>
#include<iostream>

using namespace std;

int main(){
    int N;
    cin>>N;

    cin.ignore();
    while(N--){
 
    string number1;
    string number2;
    string number3 = "";
    string number4 = "";
    
    getline(cin,number1);
    getline(cin,number2);
    
    for(int i=0;i<number1.size();i++){
        if(number1[i]== ' '){
            continue;
        }
        else{
            number3 += number1[i];
        }
    }

    for(int j=0;j<number2.size();j++){
        if(number2[j]== ' '){
            continue;
        }
        else{
            number4 += number2[j];
        }
    }

    int answer = stoi(number3) + stoi(number4);
    
    string answer1 = to_string(answer);

    for(int i=0;i<answer1.size();i++){
        cout<<answer1[i]<<' ';
    }

    cout<<endl;

    }


    return 0;
}