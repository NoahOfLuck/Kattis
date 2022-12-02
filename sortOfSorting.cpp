#include <iostream>
#include <vector>

using namespace std;

int main (){

    int N;
    while (N !=0){
        cin>>N;
        if (N==0){
            return 0;
        }

        vector<string>names;

        for (int i=0;i<N;i++){
            string curr;
            cin>>curr;
            names.push_back(curr);
        }

        for(int i=0;i<names.size();i++){
            for(int j=0;j<names.size()-1;j++){
                if(int(names[j][0])>int(names[j+1][0])){
                    string temp = names[j];
                    names[j]=names[j+1];
                    names[j+1]=temp;
                }

                if(int(names[j][0])==int(names[j+1][0])){
                    if(int(names[j][1])>int(names[j+1][1])){
                        string temp = names[j];
                        names[j]=names[j+1];
                        names[j+1]=temp;
                    }
                }
            }

        }
        
        for (int i=0;i<N;i++){
            cout<<names[i]<<'\n';
        }
        cout <<'\n';
    }

    return 0;
}