#include <iostream>
#include <cmath>

using namespace std;

// Function to find factors of a given number N
void factor(int N) {
    // Iterate from 1 to the square root of N
    for (int i = 1; i <= sqrt(N); i++) {
        // Check if i is a factor of N
        if (N % i == 0) {
            // If i is the only factor (square root of N is i), print it once
            if (i * i == N) {
                cout << i << " ";
            } else {
                // Print both factors i and N/i
                cout << i << " ";
                cout << N / i << " ";
            }
        }
    }
}

int main() {
    // Example usage of the factor function
    int number = 36;

    cout << "Factors of " << number << ": ";
    factor(number);

    return 0;
}
