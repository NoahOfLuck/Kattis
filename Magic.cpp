#include <string>
#include <iostream>
#include<math.h>

using namespace std;

int main() {
    string input;
    //getline(cin,input);//get input
    std::string s = "scott>=tiger>=mushroom";
    std::string delimiter = ">=";

    size_t pos = 0;
    std::string token;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
    std::cout << token << std::endl;
    s.erase(0, pos + delimiter.length());
}
std::cout << s << std::endl;
return 0;
    //remove first line

    //sum the 2 lines

    //output int

    //repeat
    
    }










