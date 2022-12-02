#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include<string>
#include<map>
#include<sstream>
#include<set>
#include<cstring>
#include<stack>


using namespace std;

int main(){
     int N;
     cin>>N;

    stack<char>stack1;
    vector<char>jx;

    while(N--){
        char curr;
        cin>>curr;
        jx.push_back(curr);
    }

    char temp;

    int count=0;

    while(cin>>temp){
        if(temp >= 'A' && temp <= 'Z'){
            stack1.push(jx[count]);
            count++;
        }

        else{
            if(temp=='+'){
                char a= stack1.top();
                stack1.pop();
                char b = stack1.top();
                stack1.pop();

                if(a=='T'||b=='T'){
                    stack1.push('T');
                }
                else{
                    stack1.push('F');
                }
            }

            if(temp=='*'){
                char a= stack1.top();
                stack1.pop();
                char b = stack1.top();
                stack1.pop();

                if(a=='T'&& b=='T'){
                    stack1.push('T');
                }
                else{
                    stack1.push('F');
                }
            }

            if(temp=='-'){
                char a = stack1.top();
                if (a=='T'){
                    stack1.top()= 'F';
                }
                else{
                    stack1.top()='T';
                }
            }

        }

    }

    cout<<stack1.top()<<endl;

    return 0;
}