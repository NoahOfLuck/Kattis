    //LT16_H4V3LUCKG00DFUN
    #include <iostream>
    #include<vector>
    #include<queue>
    #include <algorithm>
    #include<string>
    #include<map>
    #include<sstream>
    #include<set>
    #include<cstring>
    #include<cmath>
    #include<list>
    #include<unordered_set>

    using namespace std;

    int main(){
        int N,Q;
        cin>>N>>Q;

        unordered_set<int>set1;
        for(int i=0;i<Q;i++){
            int curr;
            cin>>curr;

            if(curr==1){
                int a,b;
                cin>>a>>b;
                while(a<=b){
                    set1.insert(a);
                    a++;
                }
            }


            if(curr==2){
                cout<<set1.size()<<endl;
            }
        }


        return 0;
    }