// Greatest of two numbers

// M1 - Using max()(C++)

// Time Complexity: O(1).

// Space Complexity: O(1).

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int num1 = 1, num2= 3;
// 	cout <<"The greatest of the two numbers is "<< max(num1, num2);
// }

// M2 - Using if-else statements

// Time Complexity: O(1).

// Space Complexity: O(1).

#include<bits/stdc++.h>
using namespace std;
int main() {
	double num1 = 1.123, num2 = 1.124;
	if (num1 < num2) {
		cout <<"The greatest of the two numbers is "<<num2;
	}
	else {
		cout <<"The greatest of the two numbers is " <<num1;
	}
}