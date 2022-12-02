#include <iostream>
#include<vector>
#include<map>
#include<string>

using namespace std;

int search(vector<string> line, string v) {
   for (int i = 0; i < line.size(); i++){
      if (line[i] == v)
        return i;
    }

    return -1;
}

void cut1(vector <string> line, string a, string b){
    int index = search(line,b);

    for (int j = line.size()-1; j >= index; j--){
    line[j+1] = line[j];
    }
    line[index] = a;
    
}

void leave1(vector<string>line, string a){
    int index = search(line,a);

    for(int i=index;index<line.size();i++){
        line[i]=line[i+1];
    }
}

int main(){
    int N;
    cin>>N;
    vector <string> arr;

    for(int i=0;i<N;i++){
        string curr;
        scanf("%s",curr);
        arr.push_back(curr);

    }

int L;
cin>>L;

while(L--){
    string command;
    scanf("%s",command);
    
    if (command == "cut"){
        string a,b;
        scanf("%s",a);
        scanf("%s",b);

        cut1(arr,a,b);
        continue;
    }

    if(command == "leave"){
        string a;
        scanf("%s",a);

        leave1(arr,a);
        continue;
    }
}

for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<endl;
}

return 0;

}