#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // 2D array 
    const int rows = 5;
    const int cols = 4;
    int arr[rows][cols];

    // random number generator
    std::srand(std::time(0));

    // Fill the 2D array with random numbers
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = std::rand() % 100 + 1; // Random number between 1 and 100
        }
    }

    // print several elements from the array
    std::cout << "Random elements from the 2D array:" << std::endl;

    // Print the entire 2D array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Access and print specific elements (e.g., (2, 3), (0, 1), (4, 0))
    std::cout << "\nSpecific elements from the array:" << std::endl;
    std::cout << "Element at (2, 3): " << arr[2][3] << std::endl;
    std::cout << "Element at (0, 1): " << arr[0][1] << std::endl;
    std::cout << "Element at (4, 0): " << arr[4][0] << std::endl;

    return 0;
}
