/*

Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.

Eg: N=5, arr[] = {1,2,4,5}
O/P - 3

*/

#include <iostream>
#include <vector>
using namespace std;

// M1: Brute Force
// TC - O(n^2), SC - O(1)
int missingNumberBrute(vector<int> &v, int N){
    // Outer loop that runs from 1 to N:
    for(int i=1; i<=N; i++){
        // flag variable to check
        //if an element exists
        int flag = 0;

        //Search the element using linear search:
        for(int j=0; j<N-1; j++){
            if(v[j] == i){
                // i is present in the array:
                flag = 1;
                break;
            }
        }

        // check if the element is missing
        //i.e flag == 0:
        if(flag == 0) return i;
    }

    // The following line will never execute.
    // It is just to avoid warnings.
    return -1;
}

// M2: Using Hashing
// TC - O(n) + O(n) ~ O(2*n), SC - O(n) -> extra hash array 
/*
Function findMissingNumber(arr: array of integers, N: integer) -> integer:
    frequencyHash[N+1] = {0}  // Initialize a hash array to store the frequency of each number

    // Step 1: Store the frequency of each element in the hash array for each element in arr:
        frequencyHash[element]++

    // Step 2: Check for missing number for number from 1 to N:
        if frequencyHash[number] == 0:
        return number  // Found the missing number

    // If no missing number is found, return -1 or any appropriate value
    return -1  // Or any other appropriate value

*/
int missingNumberHashing(vector<int> &v, int N){
    int hash[N+1] = {0}; //hash array

    // storing the frequencies:
    for(int i=0; i<N; i++){
        hash[v[i]]++;
    }

    //checking the freqencies for numbers 1 to N:
    for(int i=1; i<=N; i++){
        if(hash[i] == 0) return i;
    }

    return -1;
}

// M3: Using Sum
// TC - O(N), SC - O(1)
// We're using long long so it may use little extra space
/*

Function findMissingNumber(arr: array of integers, N: integer) -> integer:
    // Calculate the summation of the first N natural numbers using the formula
    Sum_first_N_numbers = (N * (N + 1)) / 2

    // Calculate the sum of all array elements
    Sum_array_elements = 0
    for i from 0 to N-2:
        Sum_array_elements = Sum_array_elements + arr[i]

    // Find the missing number by taking the difference
    Missing_number = Sum_first_N_numbers - Sum_array_elements

    // Return the missing number
    return Missing_number

*/
int missingNumberSum(vector<int> &v, int N){
    //Summation of first N numbers:
    long long sum = (N*(N+1))/2;

    //Summation of all array elements:
    int s2 = 0;
    for(int i=0; i<N-1; i++){
        s2 += v[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}


// M4: Using XOR
// a^a = 0, 0^a = a

/*

if we perform the XOR of the numbers 1 to N with the XOR of the array elements, we will be left with the missing number.

Function findMissingNumberXOR(arr: array of integers, N: integer) -> integer:
    xor1 = 0
    xor2 = 0

    // Calculate XOR of array elements (xor2) for i from 0 to N-2:
        xor2 = xor2 ^ arr[i]

    // Calculate XOR of 1 to N-1 (xor1)
    for i from 1 to N-1:
        xor1 = xor1 ^ i

    // XOR xor1 and N to get the total XOR of 1 to N
    totalXOR = xor1 ^ N

    // The missing number is the XOR of xor2 and totalXOR
    Missing_number = xor2 ^ totalXOR

    // Return the missing number
    return Missing_number

*/
int missingNumberXOR(vector<int> &v, int N){
    int xor1 = 0, xor2 = 0;

    for(int i=0; i<N-1; i++){
        xor2 = xor2 ^ v[i]; // XOR of array elements
        xor1 = xor1 ^ (i+1); //XOR up to [1...N-1]
    }
    xor1 = xor1 ^ N; //XOR up to [1...N]
    return (xor1 ^ xor2); // the missing number
}

int main() {
    int N = 5;
    vector<int> vec = {1,2,4,5};


    // cout<<missingNumberBrute(vec, N)<<endl;
    // cout<<missingNumberHashing(vec, N)<<endl;
    // cout<<missingNumberSum(vec, N)<<endl;
    cout<<missingNumberXOR(vec, N)<<endl;
    

    return 0;
}

