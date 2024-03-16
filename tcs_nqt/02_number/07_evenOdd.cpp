// Check whether a given number is even or odd

// M1 - Using division

// Time complexity: O(1)

// Space Complexity: O(1)

// #include <iostream>
// using namespace std;

// bool isEven(int num){
//     if(num%2 == 0) return true;

//     return false;
// }
// int main() {
//     int num = 2;
//     if(isEven(num)) cout<<num<<" is Even!";
//     else cout<<num<<" is Odd!";

//     return 0;
// }

// M2 - Using the bitwise operator

// Even Number: The last bit of even number is always 0.

// Odd Number: Last bit of the odd number is always 1.

/*

Take AND of n with 1.
If it is 0 then print even otherwise odd.

#5

5 - 000000101
1 - 000000001
-------------
& - 000000001
NOT ZERO MEANS ODD

#6
 
6 - 000000110
1 - 000000001
-------------
& - 000000000
ITS ZERO MEANS EVEN
*/

// Time complexity: O(1)

// Space Complexity: O(1)

#include <iostream>
using namespace std;

int checkOddEven(int num){
    if((num & 1) == 0) return 0;
    else return 1;
}

int main() {
    int num = 2;
    if(checkOddEven(num)==0) cout<<num<<" is Even!";
    else cout<<num<<" is Odd!";

    return 0;
}