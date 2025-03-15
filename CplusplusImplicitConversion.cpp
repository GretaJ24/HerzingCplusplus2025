#include <iostream>
using namespace std;
// Function to demonstrate implicit conversion
int main(){
    int a = 2; 
    char b = 'a';

    a = a + b;
    float c = a + 2.0;
    b = c + a;

    cout << "Value of a after implicit conversion: " << a << endl;
    cout << "Value of b after implicit conversion: " << b << endl;
    cout << "Value of c after implicit conversion: " << c << endl;

    return 0;
}