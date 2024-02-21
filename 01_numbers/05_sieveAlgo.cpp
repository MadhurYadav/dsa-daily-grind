#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Use vector instead of array for dynamic size
    vector<bool> Primes(N + 1, true);

    Primes[0] = false; // Non-primes are represented by false

    // i * i <= N is same as i <= sqrt(N)
    for (int i = 2; i * i <= N; i++) {
        if (Primes[i] == true) { // If a number is prime, mark its multiples as non-prime
            for (int j = i * i; j <= N; j += i) {
                Primes[j] = false;
            }
        }
    }

    // Printing prime numbers
    cout << "Prime numbers between 1 and " << N << ": ";
    for (int i = 2; i <= N; i++) {
        if (Primes[i] == true) {
            cout << i << " ";
        }
    }

    return 0;
}
