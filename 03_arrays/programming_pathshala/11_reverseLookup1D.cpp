#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int n;
    cin >> n; // Read the value of 'n' from the user

    int a[n]; // Declare an array 'a' of size 'n'

    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Read 'n' integers and store them in the array 'a'
    }

    long long m = 1e9 + 7; // Declare a variable 'm' with value 1e9 + 7 (1000000007)
    long long ans = 0; // Initialize the 'ans' variable as 0

    for (int i = 0; i < n; i++) {
        // Calculate the contribution for the current element
        long long contri = (((i + 1) % m * (n - i) % m) % m * a[i] % m) % m;

        ans = (ans % m + contri % m) % m; // Add the contribution to 'ans' (mod m)
    }

    cout << ans; // Print the final value of 'ans'

    return 0;
}

// 1e9 + 7 as the value for m ensures that the calculations remain within a reasonable range 
// and reduces the risk of numerical issues such as overflow or loss of precision.