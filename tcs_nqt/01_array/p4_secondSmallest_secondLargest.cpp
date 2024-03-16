// M1 - Using Sorting (Assuming no Duplicate)

// Time Complexity: O(NlogN), For sorting the array

// Space Complexity: O(1)

// #include<bits/stdc++.h>
// using namespace std;

// void getElements(int arr[], int size){
//     if(size==0 || size==1) cout<< -1 << " " << -1<<endl;

//     sort(arr,arr+size);
//     int secondSmallest = arr[1];
//     int secondLargest = arr[size-2];
//     cout<<secondSmallest<<" "<<secondLargest<<endl;


// }
// int main() {
//     int arr[] = {1,2,4,6,7,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     getElements(arr,n);
//     return 0;
// }


// M2 - Using linear Search

// Time Complexity: O(N), We do two linear traversals in our array

// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

void getElements(int arr[],int size){
    if(size==0 || size==1) cout<< -1 << " " << -1<<endl;

    int smallest = INT_MAX, secondSmallest = INT_MAX;
    int largest = INT_MIN, secondLargest = INT_MIN;

    for(int i=0; i<size; i++){
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]); 
    }

    for(int i=0; i<size; i++){
        if(arr[i]<secondSmallest && arr[i]!= smallest) secondSmallest = arr[i];
        if(arr[i]>secondLargest && arr[i]!= largest) secondLargest = arr[i];
    }

    cout<<secondSmallest<<" "<<secondLargest<<endl;
}

int main() {
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    getElements(arr,n);

    return 0;
}
