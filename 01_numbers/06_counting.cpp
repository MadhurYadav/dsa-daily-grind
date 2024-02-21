#include <iostream>
using namespace std;
//Brute Force
// int countPair(int arr[], int size, int k){
//     int count = 0;
//     for(int i=0; i<size; i++){
//         for(int j=i+1; j<size; j++){
//             if((arr[i]+arr[j])%k == 0) count++;
//         }
//     }

//     return count;    
// }

// Optimized - Using the property of Modulus
int countPair(int arr[], int size, int k) {
    // Step 1: Initialize array elements to zero
    int count[k];
    for (int i = 0; i < k; i++) {
        count[i] = 0;
    }

    // Step 2: Maintaining Remainder Bucket
    for (int i = 0; i < size; i++) {
        count[arr[i] % k]++;
    }

    int ans = 0;

    // Step 3: Edge Case - for remainder equals to 0
    ans += (count[0] * (count[0] - 1)) / 2;

    // Step 4: for remainder non zero
    for (int i = 1; i <= k / 2; i++) {
        // check whether the current remainder value i is different from its complement in the range [0, k), which is k - i. This condition is necessary to avoid double-counting pairs.
        if (i != k - i) {
            ans += count[i] * count[k - i];
        }
    }

    // For even k -- Middle Bucket
    if (k % 2 == 0) {
        ans += (count[k / 2] * (count[k / 2] - 1)) / 2;
    }

    return ans;
}

int main() {
    int size, k;
    cin>>size>>k;

    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<countPair(arr, size, k);

    return 0;
}