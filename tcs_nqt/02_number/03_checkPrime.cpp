// Check if a number is prime or not

// A prime number is a natural number that is only divisible by 1 and by itself. Examples 1 2 3 5 7 11 13 17 19 …

// If the loop runs till square root and none of the numbers divided it completely. So it is the Prime number.


// Time Complexity: O(√n)

// Space Complexity: O(1)


#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    // for (int i = 2; i < num; i++) // TC : O(N)
    for(int i=2; i<=sqrt(num); i++){
        if(num % i == 0) return false;
    }
    return true;
}

int main() {
    int num = 4;

    bool ans = isPrime(num);
    if(ans) cout<<"Prime Number";
    else cout<<"Non Prime Number";

    return 0;
}
