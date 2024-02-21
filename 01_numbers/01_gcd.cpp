#include <iostream>
using namespace std;

// Brute Force
int gcd(int a, int b) {
    int gcd;
    for (int i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

// gcd using euclid method
int gcdEuclid(int a, int b){
    int maximum = max(a, b);
    int minimum = min(a, b);

    // (0,A) or(A,0)
    if (minimum == 0) {
        return maximum;
    }

    if (minimum == 1) {
        return minimum;
    }

    while (maximum % minimum != 0) {
        int temp = maximum;
        maximum = minimum;
        minimum = temp % minimum;
    }
    return minimum;
}

// gcd of multiple values
int gcdMultiple(int arr[], int N) {
    int result = gcd(arr[0], arr[1]);

    for (int i = 2; i < N; i++) {
        result = gcd(result, arr[i]);
    }

    return result;
}

int main() {
    // Example usage of gcd function
    int a = 48, b = 18;
    cout << "GCD of " << a << " and " << b << " using Brute Force: " << gcd(a, b) << endl;

    // Example usage of gcdEuclid function
    int x = 48, y = 18;
    cout << "GCD of " << x << " and " << y << " using Euclid's Method: " << gcdEuclid(x, y) << endl;

    // Example usage of gcdMultiple function
    int array[] = {48, 18, 24, 12};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "GCD of multiple values: " << gcdMultiple(array, size) << endl;

    return 0;
}
