#include <iostream>
using namespace std;

// Think of the two lines above as an important piece of code
// so your program can work

void cube() {
    int s;

    // Gives prompt to the user for entering the length of side of a cube.
    std::cerr << "Masukkan panjang sisi kubus: ";
    // Lets user type the value through stdin.
    std::cin >> s;

    // Now the program announces the result
    std::cerr << endl << "Volume kubus adalah: " << endl;
    // The actual result is in standard output
    std::cout << (s * s * s) << endl;
}

// The entry point of the program
int main() {
    // Calls the cube() function defined above.
    cube();

    // Returns 0, which means "successful".
    return 0;
}