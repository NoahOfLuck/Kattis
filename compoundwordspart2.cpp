#include <bits/stdc++.h>
using namespace std;

//take note of reading input until a certain value;
//use while cin>>s to keep looping and taking in strings.
int main() 
{
    //storing 
    unordered_set<string> all_strings;
    set<string> to_print;
    string s;
    while(getline(cin,s))
    {
        stringstream ss(s);
        string str;
        while(ss>>str)
        {
        all_strings.insert(str);

        }
        
    }
    /*while(cin>>s)
    {
        all_strings.insert(s);
    }*/
    /*for(auto &i : all_strings)
    {
        cout<<i;
    }*/
    for(auto &i : all_strings)
    {
        for(auto &x: all_strings)
        {
            if (i != x)
            {
                to_print.insert(i + x);
                to_print.insert(x + i);
            }
        }
    }
    for(auto &y : to_print)
    {
        cout<<y<<'\n';
    }
    

    return 0;
}