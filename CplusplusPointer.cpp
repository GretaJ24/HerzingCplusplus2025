#include <iostream>
using namespace std;
int main() {
    //integer, assign value
    int num = 5;
    //pointer to integer
    int* ptr = &num;

    //before
    cout << "Value of num before: " << num << endl;

    //use pointer to modify the integer
    *ptr = 15;
    //print value before and after
    cout << "Value of num after: " << num << endl;

    return 0;
}