#include <iostream>
#include<string>
#include<list>
#include<map>
#include<algorithm>
#include<iterator>

using namespace std;

void showlist(list<string> g)
{
    cout<<'\n';
    list<string>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout<< *it<< '\n';
}

int main(){
    std::ios_base::sync_with_stdio(0), std::cin.tie(0);
    int N,C;
    cin>>N>>C;

    list<string>list1;
    map<string,string>map1;
    while(N--){
        string name1,name2;
        cin>>name1>>name2;
        map1[name1]=name2;
        map1[name2]=name1;
        list1.push_back(name1);
        list1.push_back(name2);
    }

    list<string>::iterator index = list1.begin();

    while(C--){
        char command;
        cin>>command;

        if(command=='F'){
            index --;
        }
        if(command=='B'){
            index ++;
        }
        if(command=='R')
        {
            list<string>::iterator kkb = index;
            kkb++;
            if(kkb==list1.end()){
                index = list1.begin();
            }
            else{
            list<string>::iterator temp = index;
            index++;
            list1.push_back(*temp);
            list1.erase(temp);
            }

        }
        if(command=='C')
        {
            list<string>::iterator kkb = index;
            kkb++;
            if(kkb==list1.end()){
                list<string>::iterator temp = index;
                index = list1.begin();
                string partner = map1[*temp];
                list<string>::iterator it = find(list1.begin(),list1.end(),partner);
                it++;
                list1.insert(it,partner);
                list1.erase(temp);
            }

            else{
            list<string>::iterator temp = index;
            index++;

            string partner = map1[*temp];
            list<string>::iterator it = find(list1.begin(),list1.end(),partner);
            it++;
            list1.insert(it,*temp);
            list1.erase(temp);
            }
        }
        if(command=='P')
        {
            cout<<map1[*index]<<endl;
        
        }
        
    }
    showlist(list1);
    return 0;
}