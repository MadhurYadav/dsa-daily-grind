#include <iostream>
using namespace std;

// Brute Force
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(int a, int b) {
    // Using long long to avoid overflow
    return (static_cast<long long>(a) * b) / gcd(a, b);
}

// lcm of 'N' numbers
long long lcmMultipleNumbers(int a, int b, int n) {
    long long lcmValue = (static_cast<long long>(a) * b) / gcd(a, b);
    int count = (n / a) + (n / b) - (n / lcmValue);
    return count;
}

int main() {
    // Example usage
    int a = 12, b = 18, n = 36;
    
    // Calculate GCD and LCM
    int gcdValue = gcd(a, b);
    long long lcmValue = lcm(a, b);

    // Output GCD and LCM
    cout << "GCD of " << a << " and " << b << ": " << gcdValue << endl;
    cout << "LCM of " << a << " and " << b << ": " << lcmValue << endl;

    // Calculate count of multiples within 'n' for given 'a' and 'b'
    long long countMultiples = lcmMultipleNumbers(a, b, n);

    // Output count of multiples
    cout << "Count of multiples of " << a << " and " << b << " within " << n << ": " << countMultiples << endl;

    return 0;
}
