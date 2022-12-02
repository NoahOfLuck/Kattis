#include <string>
#include <iostream>
#include<math.h>
#include<sstream>
#include<vector>

using namespace std;

int main(){
    int input;
    string input1;
    cin>>input;
    
    int number = input*2;
    int foo[10];
    int counter = 0;
    
   while (number--){
    string temp; getline(cin,temp);
    string temp2="";
    for (int i=0;i<temp.length();i++){
        if (temp[i]==' '){
            continue;
        }
        else{
            temp2+=temp[i];
            
        }
    }
    foo[counter] = stoi(temp2);
    counter +=1;
    continue;

   }

   for (int i=0;i<number;i+=2){
        int sum = foo[i] + foo[i+1];
        string output ="";
        for (int j=0;j<to_string(sum).length()-1;j++){
            output += to_string(sum)[j] + ' ';
        }

        output += to_string(sum)[to_string(sum).length()];
        cout<<output<<endl;
        continue;

   }

   return 0;
}
