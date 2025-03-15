#include <iostream>
#include <string>
using namespace std;

int main(){
    //manipulate string using length, substr, find, and replace
    string str = "Bleh, gross!";

    std::cout << "Original message: " << str << endl;
    std::cout <<"Length: " << str.length() << endl;
    
    //substr extracts part of the message
    string subStr = str.substr(0, 4); //taking bleh
    std::cout << "Substring taken: " << subStr << endl;

    //replace taken word with another
    str.replace(0,4, "Oh woah");
    std::cout << "Replaced message: " << str << endl;

    return 0;
}