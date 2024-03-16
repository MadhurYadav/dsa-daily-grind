// M1 - Using two loops

// Time Complexity: O(N*N)

// Space Complexity:  O(N)

// #include <iostream>
// #include <vector>
// using namespace std;

// void countFreq(int arr[], int n){

//     //visited arr
//     vector<bool> visited(n,false);

//     for(int i=0; i<n; i++){
//         if(visited[i]==true) continue;

//         int count=1;
//         for(int j=i+1; j<n; j++){
//             if(arr[i] == arr[j]){
//                 visited[j] = true;
//                 count++;
//             }
//         }
//         cout<<arr[i]<<" - "<<count<<endl;
//     }
// }

// int main() {
//     int arr[] = {10,5,10,15,10,5};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     countFreq(arr, n);
//     return 0;
// }


// M2 - Using Map

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void Frequency(int arr[], int n){
    unordered_map<int, int> map;

    for(int i=0; i<n; i++){
        map[arr[i]]++;
    }
    for(auto x : map){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

int main() {
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}