#include <iostream>
void my_function() {
 int* ptr = new int[10]; // Allocate memory for an array of 10 integers
 delete[]ptr; // Deallocate memory
 //I found the memeory leak by reading the text and finding what was missing
 //Memory leak occurs here because we forgot to delete the allocated memory
}
int main() {
 my_function();
 std::cout << "Find the Memory Leak Game!" << std::endl;
 return 0;
}
