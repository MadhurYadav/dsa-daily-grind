#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k; // Read the value of K from the user

    int N;
    cin >> N; // Read the size of the array

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i]; // Read array elements from the user
    }

    // Logic
    // Calculating the sum of the first window of size K
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    // Print the sum of the first window
    cout << sum << " ";

    // Calculating the sum of subsequent windows
    for (int i = k; i < N; i++) {
        sum += arr[i]; // Add the current element to the sum
        sum -= arr[i - k]; // Subtract the element at the beginning of the previous window from the sum
        cout << sum << " "; // Print the sum of the current window
    }

    return 0;
}
