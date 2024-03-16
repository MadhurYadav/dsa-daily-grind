// Check if a number is Armstrong Number or not

// Armstrong Numbers are the numbers having the sum of digits raised to power no. of digits is equal to a given number.

// Time Complexity: O(n) where n is the number of digits since we need to traverse every digit and add digits raised to power no. of digits to sum.

// Space Complexity: O(1) since no extra space is required

#include <iostream>
#include <cmath>
using namespace std;

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

bool isArmstrongNumber(int num) {
    int originalNum = num;

    // count the number of digits
    int numberOfDigits = 0, temp = num;
    while (temp != 0) {
        numberOfDigits++;
        temp = temp / 10;
    }

    // Armstrong logic
    int sumOfPower = 0;
    while (num != 0) {
        int digit = num % 10;
        sumOfPower += power(digit, numberOfDigits);
        num = num / 10;
    }

    return sumOfPower == originalNum;
}

int main() {
    int num = 153;
    if (isArmstrongNumber(num))
        cout << num << " is an Armstrong number";
    else
        cout << num << " is not an Armstrong number";

    return 0;
}

// use power custom function instead of pow for avoiding precision value error



/*

#153
1^3 + 5^3 + 3^3 = 153

#170
1^3 + 7^3 + 0^3 != 170

#1634
1^4 + 4^4 + 3^4 + 4^4 = 1634

-----

#153

sum=0

- extract 3 and cube and add to sum, 3^3=27 => sum = 0+27=27

- extract 5 and cube and follow same
*/