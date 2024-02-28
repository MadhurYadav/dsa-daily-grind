#include <bits/stdc++.h>
using namespace std;

// Function to find the largest element in the array
int largestElement(vector<int> &arr, int n) {
    int maxElement = INT_MIN; // Initialize maxElement to the smallest possible integer value

    // Loop through the array to find the largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    return maxElement; // Return the largest element found
}

int main() {
    // Example usage
    vector<int> arr = {5, -1, 0, 4, 2, 7};
    int size = arr.size();

    // Call the function to find the largest element
    int result = largestElement(arr, size);

    // Output the result
    cout << "The largest element in the array is: " << result << endl;

    return 0;
}
