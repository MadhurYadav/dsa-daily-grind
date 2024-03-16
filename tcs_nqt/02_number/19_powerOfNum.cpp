// Calculate the Power of a Number : Binary Exponentiation

// M1 - Naive approach (Simply multiply n for k times)

// Time Complexity: O(k).

// Space Complexity: O(1)

// #include <iostream>
// using namespace std;
// int main() {
//     int num = 5, power = 3;
//     int ans = 1;

//     for(int i=0; i<power; i++){
//         ans = ans * num;
//     }
//     cout<<ans;
//     return 0;
// }

// M2 - Binary exponentiation

/*

While calculating (n^k), binary exponentiation relies on whether n is even or odd.

If k is even (nk) can be written as  (n2)k/2. As we can see that computation steps were reduced from k to k/2 in just one step.

If k is odd (nk) can be written as n.(n)k-1, so now  (k-1) is even.

*/


// Time Complexity: O(logn).

// Space Complexity: O(1)

// #include <iostream>
// using namespace std;

// int calculatePower(int num, int power){
//     int ans = 1;
//     while(power != 0){
//         if(power % 2 == 0){
//             num = num * num;
//             power = power / 2;
//         }
//         else{
//             ans = ans * num;
//             power--;
//         }
//     }

//     return ans;
// }

// int main() {
//     int num = 2, power = 3;
//     cout<<calculatePower(num, power);
//     return 0;
// }

// M3 - Using library function

// Time Complexity: O(log n)

// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 2, k = 3;
	int ans=pow(n,k);

	cout <<n<<" raised to the power "<<k<<" is "<< ans;
}