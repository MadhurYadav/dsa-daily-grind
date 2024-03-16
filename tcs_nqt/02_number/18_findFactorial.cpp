// Factorial of a Number : Iterative and Recursive

// M1 - Iterative

// Time Complexity: O(n)

// Space Complexity: O(1)

// #include <iostream>
// using namespace std;

// int findFactorial(int num){
//     int ans = 1;

//     for(int i=1; i<=num; i++){
//         ans  = ans * i;
//     }

//     return ans;
// }

// int main() {
//     int num = 5;
//     cout<<findFactorial(num);
//     return 0;
// }


// M2 - Recursive

// factorial(N) = N * factorial(N-1);


// Time Complexity: O(N) { Since the function is being called n times, and for each function, we have only one printable line that takes O(1) time, so the cumulative time complexity would be O(N) }

// Space Complexity: O(N) { In the worst case, the recursion stack space would be full with all the function calls waiting to get completed and that would make it an O(N) recursion stack space }.

#include <iostream>
using namespace std;

int recursiveFactorial(int num){

    // Base Condition
    if(num == 0) return 1;

    return num * recursiveFactorial(num-1);
}

int main() {
    int num = 5;
    cout<<recursiveFactorial(num);
    return 0;
}