#include <string>
#include <iostream>
#include<math.h>
#include<sstream>
#include<vector>
#include <stdio.h>


using namespace std;

int search(vector<string> line, string v){
for (int i = 0; i < line.size(); i++){
      if (line[i] == v)
        return i;
    }

    return -1;
}

void cut(vector<string> line, string a, int b){

    for (int j = line.size()-1; j >= b; j--){
        line[j+1] = line[j];
        }
        line[b] = a;
}


void leave(vector<string> line, int a){
    for(int i=a;i<line.size();i++){
        line[i]=line[i+1];
    }
}



int main(){
    int N;
    cin>>N;

    vector<string>arr;
    while(N--){
        string curr;
        cin>>curr;
        arr.push_back(curr);
    }

    int A;
    cin>>A;
    while(A--){
        string command;
        cin>>command;

        if (command == "cut"){
            string a,b;
            cin>>a>>b;
            cut(arr,a,search(arr,b));
        }

        else if(command == "leave"){
            string c;
            cin>>c;
            leave(arr,search(arr,c));
        }

    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}