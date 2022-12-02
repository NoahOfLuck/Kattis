#include <string>
#include <iostream>
#include<math.h>
#include<sstream>
#include<vector>
#include "vectorfunctions.h"
#include<numeric>

using namespace std;

int main(){


}


void backwards(vector<int>& vec){
    reverse(vec.begin(),vec.end());
}

vector<int>everyOther(const vector<int>&vec){
    vector<int>ans;
    for (int i =0;i< (int)vec.size(); i+=2){
        ans.push_back(vec[i]);
    
    }
    return ans;
}

int smallest(const vector<int>&vec){
    return *min_element(vec.begin(),vec.end());
}

int sum(const vector<int?&vec){
    return accumulate(vec.begin(),vec.end());
}

int veryOdd(const vector<int>&vec){
    ans += (vec[i]%2==1);
    return ans;
}

