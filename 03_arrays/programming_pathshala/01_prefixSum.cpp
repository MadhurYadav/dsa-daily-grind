#include <iostream>
#include <vector>
using namespace std;

// Function to compute the prefix sum of an array
vector<int> preComputePrefixSum(vector<int>& arr) {
    int n = arr.size();
    vector<int> PS(n, 0);  // Create a vector to store the prefix sum
    PS[0] = arr[0];  // The first element remains the same
    for (int i = 1; i < n; i++) {
        PS[i] = PS[i-1] + arr[i];  // Compute prefix sum by adding the previous element
    }
    return PS;  // Return the prefix sum array
}

// Function to print the sum of a range using the prefix sum array
int printSum(int l, int r, vector<int>& PS) {
    if (l == 0) {
        return PS[r];  // If left index is 0, return the sum directly from the prefix sum array
    }
    else {
        return PS[r] - PS[l-1];  // Otherwise, subtract the prefix sum at the left index to get the range sum
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> PS = preComputePrefixSum(arr);  // Compute the prefix sum of the given array
    int Q = 3;  // Number of range sum queries
    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;  // Read the left and right indices of the range from user input
        cout << printSum(l, r, PS) << endl;  // Print the sum of the range using the prefix sum array
    }
    return 0;
}


// Dry Run 

// PS[i] = PS[i-1] + arr[i];
// PS[1] = 1+2 = 3
// PS[2] = 3+3 = 6
// PS[3] = 6+4 = 10
// PS[4] = 10+5 = 15

// PS[r] - PS[l-1]
// PS[4] - PS[0]
// 15 - 1 = 14