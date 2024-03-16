// Find all Palindrome Numbers in a given range

// Time Complexity: O(N)

// Space Complexity: O(1)

#include <iostream>
using namespace std;

bool isPalindrome(int num){
    int reverseNum = 0;
    int dummyOrg = num; // because after while loop num will be 0 and we need to check orginal num with reverse num

    while(num > 0){
        int digit = num % 10;
        reverseNum = 10 * reverseNum + digit;
        num = num/10;
    }

    if(dummyOrg == reverseNum) return true;
    return false;
}

int main() {
    int min = 100, max = 150;

    for(int i=min; i<=max; i++){
        if(isPalindrome(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}

/*
eg, min = 10, max = 50
o/p = 11, 22, 33, 44

eg, [100,150]
o/p = 101, 111, 121, 131, 141
*/