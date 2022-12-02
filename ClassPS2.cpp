#include <string>
#include <iostream>
#include<math.h>
#include<sstream>
#include<vector>
#include<algorithm>
#include<map>
#include <set>

using namespace std;

class Player {
public:
    int p, x, y, t;
    void setp(int i){
        p = i;
    }
    void setx(int i){
        x = i;
    }
    void sety(int i){
        y = i;
    }
    void sett(int i){
        t = i;
    }
};

int findsmaller (Player a, Player b){
    if(a.p<=b.p){
        return a.p;
    }
    else{
        return b.p;
    }
}

int findbigger(Player a, Player b){
    if(a.p>=b.p){
        return a.p;
    }
    else{
        return b.p;
    }
}

struct{
    bool operator()(Player &a, Player &b){
        return a.t<b.t;
    }
} comp;
int main(){
    std::ios_base::sync_with_stdio(0), std::cin.tie(0);
    int P,N;
    cin>>P>>N;

    Player player[N];
    for(int i=0;i<N;i++){
        int p,x,y,t;
        cin>>p>>x>>y>>t;
        player[i].setp(p);
        player[i].setx(x);
        player[i].sety(y);
        player[i].sett(t);

    }

    vector<Player> list;
    for(int i=0;i<N;i++){
        list.push_back(player[i]);
    }

    sort(list.begin(),list.end(), comp);

    int counter=0;
    map<int,set<int>>map2;
    int j=0;
    int k=1;
    while(j !=list.size()-2){
         if ((list[k].t-list[j].t)<=10){
            double xd = list[k].x-list[j].x;
            double yc = list[k].y-list[j].y;
            double dist = pow(xd,2) + pow(yc,2); 
            double distance = sqrt(dist);
            if (distance<=1000){
                int bigger = findbigger(list[k],list[j]);
                int smaller = findsmaller(list[k],list[j]);

                
                if(smaller==bigger){
                    k+=1;
                    continue;
                }
        
                else{
                map2[smaller].insert(bigger);
                }
            
                
            }
         }

         k+=1;

         if(list[k].t-list[j].t>10 || k>list.size()-1|| k-j>5){
            j+=1;
            k=j+1;
         }
    }

    for(int i=1;i!=P; i++){
            counter+=map2[i].size();
        }


    cout<<counter<<endl;

    for(int i=1;i!=P; i++){
            set<int>temp = map2[i];
            for(auto it=temp.begin(); it!=temp.end();++it){
                cout<<i<<' '<<*it<<endl;
            }
        }
    
    
    

    return 0;
}