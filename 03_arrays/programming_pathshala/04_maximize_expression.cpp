#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int p, q, r;
    cin>>p>>q>>r;

    int pmax[n]; // stores the maximum value of p * Arr[i] for each i
    pmax[0] = p * arr[0]; // initialize the first element

    // Calculate the maximum value of p * Arr[i] for each i
    for (int i = 1; i < n; i++){
        pmax[i] = max(pmax[i-1], p * arr[i]);
    }

    int smax[n]; // stores the maximum value of r * Arr[k] for each k
    smax[n-1] = r * arr[n-1]; // initialize the last element

    // Calculate the maximum value of r * Arr[k] for each k
    for (int i = n-2; i >= 0; i--){
        smax[i] = max(smax[i+1], r * arr[i]);
    }

    int ans = INT_MIN; // initialize the answer with the minimum possible value

    // Calculate the maximum value of p*Arr[i] + q*Arr[j] + r*Arr[k]
    // where i < j < k
    for (int i = 1; i < n-1; i++){
        ans = max(ans, pmax[i-1] + q * arr[i] + smax[i+1]);
    }

    cout<<ans; // print the maximum value

    return 0;
}

// If i<= j <= k 
//  for (int i = 0; i < n-1; i++){
//         ans = max(ans, pmax[i] + q * arr[i] + smax[i]);
//     }