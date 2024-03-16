// Print Fibonacci Series up to Nth term

/*
Input: N = 5
Output: 0 1 1 2 3 5
Explanation: 0 1 1 2 3 5 is the fibonacci series up to 5th term.(0 based indexing)

0, 1, 1, 2, 3, 5
*/

// M1 - Naive approach

// Time Complexity: O(n)+O(n), for calculating and printing the Fibonacci series.

// Space Complexity: O(n), for storing Fibonacci series.

// #include <iostream>
// using namespace std;

// void printFibonacci(int fibArr[], int n){
//     for(int i = 0; i <= n; i++){
//         cout<<fibArr[i]<<" ";
//     }
// }

// int findFibonacci(int n){

//     int fibArr[n+1]; // declare arr of n+1 size


//     if(n==0) cout<<0;
//     else if(n==1) cout<<0<<""<<1<<endl;
//     else{
        
//         fibArr[0] = 0;
//         fibArr[1] = 1;

//         for(int i=2; i<=n; i++){
//             fibArr[i] = fibArr[i-1] + fibArr[i-2];
//         }
        
//     }

//     printFibonacci(fibArr,n);
// }

// int main() {
//     int n = 5;
//     findFibonacci(n);
//     return 0;
// }

// M2 - Space optimized

// Time Complexity: O(N).As we are iterating over just one for a loop.

// Space Complexity: O(1).


#include <iostream>
using namespace std;

void findFibonacci(int n){
    if(n == 0) cout << 0;
    else if(n == 1) cout << 0 << " " << 1;
    else{
        int secondLast = 0; // for (i-2)th term
        int last = 1; // for (i-1)th term
        cout << secondLast << " " << last << " ";

        int current; // for ith term
        for(int i = 2; i <= n; i++){
            current = last + secondLast;
            secondLast = last;
            last = current;
            cout<<current<<" ";
        }
    }
}

int main() {
    int n = 5;
    findFibonacci(n);
    return 0;
}
