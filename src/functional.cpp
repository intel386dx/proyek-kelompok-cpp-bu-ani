#include <iostream>
using namespace std;
// Think of these two lines as an important piece of code
// so your program can work as usual

// We define a function to calculate the volume of a cube here
int volume_of_cube(int s) {
    return s * s * s;
}

// The entry point of our program
int main() {
    int s; // First we define the s variable

    // This will prompt the user to input the length of the cube
    // as an integer
    std::cerr << "Masukkan panjang sisi: ";
    std::cin >> s; // Input from stdin will be fed to the s variable

    // Then, the program will announce the result
    std::cerr << endl << "Volume kubus adalah: " << endl;
    std::cout << volume_of_cube(s) << endl; // The actual result will be
    // printed to stdout

    return 0; // This means, "successful"
}