// M1 - Sorting
// Time Complexity: O(N*log(N))

// Space Complexity: O(1)

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int sortArr(vector<int>& arr){
//     sort(arr.begin(), arr.end());
//     return arr[0];
// }

// int main() {
//     vector<int> arr1 = {2,5,1,3,0};
//     cout<<sortArr(arr1)<<endl;

//     return 0;
// }


// M2 - Min Variable

// Time Complexity: O(N)

// Space Complexity: O(1)

#include <iostream>
using namespace std;

int minVar(int* arr){
    int min;
    min = arr[0];

    int arrSize = 5;
    for(int i=1; i<arrSize; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    return min;   
}

int main() {
    int arr[] = {2,5,1,3,0};
    cout<<minVar(arr);
    return 0;
}

