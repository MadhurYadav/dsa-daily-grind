// Time Complexity: O(n) As we traverse the array once.

// Space Complexity: O(1).

#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    int size = 5;

    int sum=0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    } 

    // instead of for loop we can use STL (c++)
    
    // cout<<accumulate(arr,arr+size, sum);
    cout<<sum;
    return 0;
}