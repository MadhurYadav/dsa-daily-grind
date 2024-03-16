// Check whether a number is positive or negative

// M1 - Using conditions

// Time complexity: O(1)

// Space Complexity: O(1)

// #include <iostream>
// using namespace std;

// bool isPos(int num){
//     if(num > 0) return true;
//     return false;
// }

// int main() {
//     int num = -6;
//     if(isPos(num)) cout<<num<<" is Positive";
//     else cout<<num<<" is Negative";
//     return 0;
// }


// M2 - Using Bitwise operators
// Intuition: The signed right shift operator ‘>>’ uses the sign bit to fill the trailing positions. For example, if the number is positive then 0 will be used to fill the trailing positions and if the number is negative then 1 will be used to fill the trailing positions.

// Hence we can say that if a number is positive and we right shift it by 31, then we will get zero, and if the number is negative then we will get -1.


// Time complexity: O(1)

// Space Complexity: O(1)

#include <iostream>
using namespace std;

bool checkPos(int num){
    if(num >> 31 == 0) return true;
    return false;
}

int main() {
    int num = 5;
    if(checkPos(num)) cout<<num<<" is Positive";
    else cout<<num<<" is Negative";
    return 0;
}
/*

#5 (0000 0000 0000 0000 0000 0000 0000 0101)
5>>31
0000 0000 0000 0000 0000 0000 0000 0000 = 0


#-6 (1111 1111 1111 1111 1111 1111 1111 1010)
-6>>31
1111 1111 1111 1111 1111 1111 1111 1111 = -1

*/

