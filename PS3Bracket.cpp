#include <iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    int N;
    cin>>N;

    stack<char>stack;

    for(int i=0;i<N;i++){
        char temp;
        cin>>temp;
        if(stack.empty()){
        stack.push(temp);
        }

        else if((stack.top()=='(' && temp==')')
                || (stack.top() == '['&& temp==']')
                || (stack.top()=='{'&& temp=='}')){
                stack.pop();
                }
        else{
            stack.push(temp);
        }
    }

    if(stack.empty()){
        cout<<"Valid"<<endl;
    }

    else{
        cout<<"Invalid"<<endl;
    }

    return 0;
}