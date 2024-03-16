// Sum of first N Natural Numbers

// M1 - Using Loop

// Time Complexity: O(N)

// Space Complexity: O(1)

// #include <iostream>
// using namespace std;

// void findSumNaturalNum(int num){
//     int sum = 0;
//     for(int i=1; i<=num; i++){
//         sum+=i;
//     }

//     cout<<"Sum of first "<<num<<" Natural Number is "<<sum;
// }

// int main() {
//     int num = 6;
//     findSumNaturalNum(num);
//     return 0;
// }


// M2 - Using the formula

// N(N+1)/2.


// Time Complexity: O(1)

// Space Complexity: O(1)

#include <iostream>
using namespace std;

void findSumNaturalNum(int num){
    int sum = num * (num + 1) / 2;
    cout<<"Sum of first "<<num<<" Natural Number is "<<sum;
}

int main() {
    int num = 6;
    findSumNaturalNum(num);
    return 0;
}