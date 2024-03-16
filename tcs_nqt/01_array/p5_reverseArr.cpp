// M1 - Using Auxiliary Array

// Time Complexity: O(n), single-pass for reversing array.

// Space Complexity: O(n), for the extra array used.

// #include <iostream>
// using namespace std;

// void printArr(int ans[], int size){
//     for(int i=0; i<size; i++){
//         cout<<ans[i]<<" ";
//     }
// }

// void reverseArray(int arr[], int size){
//     int ans[size];
//     for(int i=size-1; i>=0; i--){
//         ans[size - i - 1] = arr[i];
//     }
//     printArr(ans, size);

// }

// int main() {
//     int n = 5;
//     int arr[] = {5,4,3,2,1};
//     reverseArray(arr, n);
//     return 0;
// }


// M2 - Using Two Pointer 

// Time Complexity: O(n), single-pass involved.

// Space Complexity: O(1) 

#include <iostream>
using namespace std;

void printArr(int ans[], int size){
    for(int i=0; i<size; i++){
        cout<<ans[i]<<" ";
    }
}

void reverseArray(int arr[], int size){
    int p1 = 0, p2 = size-1;
    while(p1<p2){
        swap(arr[p1], arr[p2]);
        p1++, p2--;
    }

    printArr(arr,size);
}

int main() {
    int n = 5;
    int arr[] = { 5, 4, 3, 2, 1};
    reverseArray(arr, n);
    return 0;
}

