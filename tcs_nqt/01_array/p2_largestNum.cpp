// M1- Sorting

// Time Complexity: O(N*log(N))

// Space Complexity: O(n)

// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// int larArr(vector<int>& arr){
//     sort(arr.begin(), arr.end());
//     int size = arr.size();
//     return arr[size-1];
// }

// int main() {
//     vector<int> arr = {2,5,1,3,0};
//     // int size = 5;

//     cout<<larArr(arr);
//     return 0;
// }

// M2 - Using  Max Variable

// Time Complexity: O(N)

// Space Complexity: O(1)

#include <iostream>
using namespace std;

int largeArr(int* arr, int size){
    int max = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[] = {2,5,1,3,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<largeArr(arr,size);
    return 0;
}