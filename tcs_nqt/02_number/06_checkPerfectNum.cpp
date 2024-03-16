// Check whether a number is Perfect Number or not

// A perfect number is defined as a number that is the sum of its proper divisors ( all its positive divisors excluding itself). 


// Time Complexity: O(N)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

bool isPerfect(int num){
    int sum = 0;
    for(int i=1; i<num; i++){
        if(num%i == 0) sum += i;
    }

    if(sum == num) return true;
    return false;
}

int main() {
    int num = 15;
    if(isPerfect(num)) cout<<num<<" is Perfect number";
    else cout<<num<<" is not Perfect number";

    return 0;
}
/*

#6
(1+2+3) = 6

#28
(1+4+7+14) = 28

#15
(1+2+5) = 8


*/