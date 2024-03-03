/*

Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

Eg: arr[] = {4,1,2,1,2}
O/P: 4


*/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

// M1: Brute Force
// TC - O(N^2), SC - O(1)
int Brute(vector<int> v, int size){
    //Run a loop for selecting elements:
    for(int i=0; i<size; i++){
        int num = v[i]; // selected element
        int cnt = 0;

        //find the occurrence using linear search:
        for(int j=0; j<size; j++){
            if(v[j] == num) cnt++;
        }

        // if the occurrence is 1 return ans:
        if(cnt == 1) return num;

    }
    //This line will never execute
    //if the array contains a single element.
    return -1;
}


// M2: Using Array:Hashing
// TC - O(N), SC - O(maxElement+1)
int arrayHashing(vector<int> v, int size){
    // find the size of hash array
    // max element:
    int maxi = v[0];
    for(int i=0; i<size; i++){
        maxi = max(maxi, v[i]);
    }

    // declare hash array size -> maxi+1
    // store frequency
    vector<int> hash(maxi+1, 0);
    for(int i=0; i<size; i++){
        hash[v[i]]++;
    }

    // find single element
    for(int i=0; i<size; i++){
        if(hash[v[i]] == 1) return v[i];
    }
    //This line will never execute
    //if the array contains a single element.
    return -1;
}


// M3: Using Map:Hashing
// TC - O(N*logM) + O(M), M = size of the map
// M = (N/2)+!, N = size of the array
int mapHashing(vector<int> v, int size){
    map<int, int> map;
    for(int i=0; i<size; i++){
        map[v[i]]++;
    }

    for(auto it : map){
        if(it.second == 1) return it.first;
    }

    //This line will never execute
    //if the array contains a single element.
    return -1;
}


// M4: Using XOR (a^a = 0) -- 4^1^2^1^2 -- 4
// TC - O(n), SC - O(1)
int xorFunc(vector<int> v, int size){
    int xorr = 0;
    for(int i=0; i<size; i++){
        xorr = xorr ^ v[i];
    }
    return xorr;
}

int main() {
    vector<int> vec = {4,1,2,1,2};
    int size = vec.size();

    // cout<<Brute(vec, size)<<endl;
    // cout<<arrayHashing(vec, size)<<endl;
    // cout<<mapHashing(vec, size)<<endl;
    cout<<xorFunc(vec, size)<<endl; 


    return 0;
}