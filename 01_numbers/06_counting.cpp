#include <iostream>
using namespace std;
//Brute Force (Counting Pair)
// int countPair(int arr[], int size, int k){
//     int count = 0;
//     for(int i=0; i<size; i++){
//         for(int j=i+1; j<size; j++){
//             if((arr[i]+arr[j])%k == 0) count++;
//         }
//     }

//     return count;    
// }

// Optimized - Using the property of Modulus (Counting Pair)
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


// Brute Force (Triplet Count)
// int countTriplet(int arr[], int size, int k){
//     int cnt = 0;

//     for(int i=0; i<size; i++){
//         for(int j=i+1; j<size; j++){
//             for(int m=j+1; m<size; m++){
//                 if((arr[i] + arr[j] + arr[m])%k == 0) cnt++;
//             }
//         }
//     }
// }


// Optimized -- Using the property of modulus (Triplet Count)
int countTriplet(int arr[], int size, int k){
    
    int count[k];
    for (int i = 0; i < k; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        count[arr[i] % k]++;
    }

    int ans = 0;

    // Iterate over all possible pairs of remainders (i, j)
    for (int i = 0; i < k; i++) {
        for (int j = i; j < k; j++) {
            int thirdRem = (k - (i + j) % k) % k;

            if (thirdRem < j) {
                continue;
            }

            if (i == j && j == thirdRem) {
                // Count triplets with all three remainders being the same
                ans += (count[i] * (count[i] - 1) * (count[i] - 2)) / 6;
            } else if (i == j) {
                // Count triplets with two remainders being the same
                ans += (count[i] * (count[i] - 1) / 2) * count[thirdRem];
            } else if (i == thirdRem) {
                // Count triplets with two remainders being the same
                ans += (count[i] * (count[i] - 1) / 2) * count[j];
            } else if (j == thirdRem) {
                // Count triplets with two remainders being the same
                ans += (count[j] * (count[j] - 1) / 2) * count[i];
            } else {
                // Count triplets with all three remainders being different
                ans += count[i] * count[j] * count[thirdRem];
            }
        }
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
    
    cout<<countPair(arr, size, k)<<endl;
    cout<<countTriplet(arr, size, k)<<endl;

    return 0;
}