#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>

using namespace std;

int main(){
    int count=1;
    string name;
    map <string,int> map1;
    while(getline(cin,name)){
        if(name=="***"){
            break;
        }

        else{
            if(map1.find(name)==map1.end()){
                map1[name]=1;
            }

            else{
                map1[name]+=1;
                if(map1[name]>count){
                    count=map1[name];
                }
            }
        }
        
    }
    int number=0;
    auto it1 = map1.begin();
    for(auto it=map1.begin();it!=map1.end();it++){
        if((*it).second==count){
            it1 = it;
            number+=1;
        }
    }
    if(number>1){
        cout<<"Runoff!"<<endl;
        return 0;
    }

    cout<<(*it1).first<<endl;

    return 0;
}