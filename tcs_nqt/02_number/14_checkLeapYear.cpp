// Check if given year is a leap year or not

/*

Intuition: A year is a leap year only if it satisfies the following condition.

The year is divisible by 400
The year is divisible by 4 but not by 100

*/

// Time Complexity: O(1).
// Space Complexity: O(1).

#include<bits/stdc++.h>
using namespace std;
int main() {
	int year = 2000;
	if (((year % 4 == 0) && (year % 100 != 0)) ||(year % 400 == 0)) {
		cout << "Yes" << "\n";
	}
	else {
		cout << "No" << "\n";
	}
}