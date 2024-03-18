#include <iostream>
using namespace std;

// int getSum(int i, int j, int arr[]){
//     int sum = 0;
//     for(int pt = i; pt<=j; pt++){
//         sum += arr[pt];
//     }
//     return sum;
// }

int main() {
    int size = 3;
    int arr[size] = {1,2,3};
    // int ans = 0;
    
    //M1 --- TC - O(N^3), SC - O(1)
    // for(int i=0; i<size; i++){
    //     for(int j=i; j<size; j++){
    //         ans += getSum(i,j,arr);
    //     }
    // }
    
    
    //M2 --- TC - O(N^2), SC - O(1)
    // for(int i=0; i<size; i++){
    //     int sum = 0;
    //     for(int j=i; j<size; j++){
    //         sum += arr[j];
    //         ans += sum;
    //     }
    // }
    
    
    //M3 --- TC - O(N), SC - O(1)
    long long m = 1000000007; // to avoid overflow
    long long ans  = 0;
    for(int i=0; i<size; i++){
        // contribution of current element
        long long currContribution = ((i + 1) % m * (size - i) % m * arr[i] % m) % m;
        
        ans = ((ans % m) + (currContribution % m)) % m;
    }
    
    cout<<ans;
    return 0;
}