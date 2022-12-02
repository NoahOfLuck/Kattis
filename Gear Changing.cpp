#include <iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main(){
    int N,M,P;
    cin>>N>>M>>P;

    vector <int> cranky;
    for(int i=0;i<N;i++){
        int curr;
        cin>>curr;
        cranky.push_back(curr);
    }

    vector <int> back;
    for(int j=0;j<M;j++){
        int curr1;
        cin>>curr1;
        back.push_back(curr1);
    }

    vector <double> ratio;

    for(int i=0;i<cranky.size();i++){
        for(int j=0;j<back.size();j++){
            double temp = (double) cranky[i]/back[j];
            ratio.push_back(temp);

        }
    }

    sort(ratio.begin(),ratio.end(), greater<double>());
    bool ride = true;

    for(int i=0;i<ratio.size()-1;i++){
        if (((ratio[i]-ratio[i+1])/ratio[i+1]*100)>P){
            ride = false;
        }
    }

    if(ride==true){
        cout<<"Ride on!"<<endl;
    }

    else{
        cout<<"Time to change gears!"<<endl;
    }
    
    return 0;
}