// Check if a number is Palindrome or Not

// An integer is considered a palindrome when it reads the same backward as forward.

// Time Complexity: O(logN) for reversing N digits of input integer.

// Space Complexity: O(1)


#include <iostream>
using namespace std;

int checkPalindrome(int num){
    int reverseNum = 0;

    while(num > 0){
        int digit = num % 10;
        reverseNum = 10 * reverseNum + digit;
        num = num/10;
    }
    return reverseNum;
    
} 

int main() {
    int num = 121;
    int reverseNum = checkPalindrome(num);

    if(num == reverseNum) cout<<num<<" is a Palindrome number!"<<endl;
    else cout<<num<<" is not a Palindrome number!"<<endl;

    return 0;
}


/*
123

Y=0
123 % 10 = 3 (extract last digit)
Y = 10*0+3 = 3 (append)
123 / 10 = 12 (discard last digit)

12

Y=3
12 % 10 = 2
Y = 10*3+2 = 32
12 / 10 = 1

1

Y = 32
1 % 10 = 1
Y = 10*32+1 = 321
1 / 10 = 0
X=0 (return means no digit to reverse)

Finally Reverse num is 32

*/