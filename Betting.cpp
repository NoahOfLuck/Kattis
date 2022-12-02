#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<iostream>
#include<set>
#include<cstring>

using namespace std;

int main(){
    int N;
	cin>>N;
	N++;
	int one;
	int two;
	while(N--){
		for(int i=0;i<2;i++){
			string input;
			string kkb;
			string final = "";
			getline(cin,input);
			stringstream ss(input);
			while(ss>>kkb){
				final += kkb;
			}
			cout<<final<<endl;
			if(i==0){
				one = stoi(final);
			}
			else{
				two = stoi(final);
			}

		}

		cout<<one+two<<endl;	

	}

	return 0;

}