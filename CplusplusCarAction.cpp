#include <iostream>
using namespace std;

//start car
void startCar() {
    cout << "Starting Car..." 
         << "\nCar started!"
    << endl;
}
//accelerating cr
void accelerateCar() {
    cout << "Accelerating Car..." 
        << "\nCar is accelerating!"   
    << endl;
}
//stop car
void stopCar() {
    cout << "Stopping Car..." 
        << "\nCar stopped!"
    << endl;
}

int main(){
    startCar();
    accelerateCar();
    stopCar();
    return 0;
}
