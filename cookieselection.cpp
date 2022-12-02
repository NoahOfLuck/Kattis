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
    multiset<int>kkb;
    string temp;
    auto it = kkb.begin();
    while(cin>>temp){
        if(temp=="#"){
            cout<<(*it)<<endl;
            if(kkb.size()%2==0){
                auto it1 = it;
                it--;
                kkb.erase(it1);
            }
            else{
                auto it1 = it;
                it++;
                kkb.erase(it1);
            }

        }

        else{
            long long curr = stoi(temp);

            kkb.insert(curr);

            if(kkb.size()==1){
                it = kkb.begin();
            }

            else{

                if(kkb.size()%2==0){
                if(curr>=(*it)){
                    it++;
                }

                }
                else{
                    if(curr<(*it)){
                    it--;
                }
                }
            }

        }

    }




    return 0;
}