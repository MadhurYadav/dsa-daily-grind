// Find Sum of AP Series

/*

1.5, 4.5, 7,5, 10.5, 13.5

a = 1.5, d = 3, n = 5

sum = 0
sum = sum + a 
a = a + d


sum = 0+1.5 = 1.5
a = 1.5+3 = 4.5

sum = 1.5+3 = 4.5
a = 4.5+3 = 


*/

// Time Complexity: O(n) where n is the number of terms in the A.P. Series

// Space Complexity: O(1) since no extra space is required

// #include <iostream>
// using namespace std;

// void findSumAP(float firstTerm, float difference, int numberOfTerms){
//     float sum = firstTerm;
//     float currentTerm = firstTerm;

//     for(int i = 1; i < numberOfTerms; i++){
//         currentTerm += difference;
//         sum += currentTerm;
//     }

//     cout << "Sum of Given AP Series: " << sum;
// }

// int main() {
//     float firstTerm = 2, difference = 2;
//     int numberOfTerms = 4;
//     findSumAP(firstTerm, difference, numberOfTerms);

//     return 0;
// }


// M2 - Using Formula


// Time Complexity: O(1) since we are using direct formula

// Space Complexity: O(1) since no extra space is required

#include <iostream>
using namespace std;

void findSumAP(float a, float d, int n){
    float sum = (n / 2.0) * (2.0 * a + (n - 1) * d);
    cout << "Sum of Given AP Series: " << sum;
}
int main() {
    float firstTerm = 2, difference = 2;
    int numberOfTerms = 4;
    findSumAP(firstTerm, difference, numberOfTerms);
    return 0;
}

/*

Sn = n/2 (2*a + (n-1)*d)

*/