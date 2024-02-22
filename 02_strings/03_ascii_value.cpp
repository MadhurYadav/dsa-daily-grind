/*

Find the ASCII value of a character




*/

// TC - O(1), SC - O(1)
#include <iostream>
using namespace std;

int main() {
    char character = 'A';

    // Finding ASCII value using int typecast
    int asciiValue = int(character);

    cout << "The ASCII value of " << character << " is: " << asciiValue << endl;

    return 0;
}
