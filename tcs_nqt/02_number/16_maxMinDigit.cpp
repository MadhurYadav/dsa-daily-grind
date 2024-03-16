// Maximum and Minimum Digit in a Number

/*

#2746
max - 7, min -- 2

extract last digit 
6
min - 6, max - 6
num 274

4
min - 4, max - 6
num 27

7
min - 4, max - 7
num 2

2
min - 2, max - 7
num 0


*/

// Time Complexity: O(log N)

// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

void minMaxDigit(int num){
    int lastDigit, minimum = INT_MAX, maximum = INT_MIN;

    while(num!=0){
        lastDigit = num % 10;

        minimum = min(lastDigit, minimum);
        maximum = max(lastDigit, maximum);

        num /= 10; 
    }

    cout<<"The minimum number is: "<<minimum<<"\n"<<"The maximum number is: "<<maximum;
}

int main() {
    int num = 2746;
    minMaxDigit(num);
    return 0;
}