// Program to find Sum of GP Series
// M1 -Iterations

// Time Complexity: O(n) since total number of iterations required are number of terms

// Space Complexity: O(1)

// #include <iostream>
// using namespace std;

// void sumOfGP(float firstTerm, float commonRatio, float numberOfTerms){
//     float sum = 0;
//     for(int i=0; i<numberOfTerms; i++){
//         sum += firstTerm;
//         firstTerm *= commonRatio;
//     }

//     cout<<sum;
// }

// int main() {
//     float firstTerm = 2, commonRatio = 1.5, numberOfTerms = 4;
//     sumOfGP(firstTerm, commonRatio, numberOfTerms);
//     return 0;
// }

// Time Complexity: O(1) since direct formula is applied.

// Space Complexity: O(1)

#include <iostream>
#include <math.h>
using namespace std;
// Function to find sum of G.P. series
float SumofGP(float a, float r, int n)
{
  float sum = a * (pow(r, n) - 1) / (r - 1);
  return sum;
}
int main()
{
  float a = 2; // First Term of G.P.
  float r = 2; // Common Ration of G.P.
  int n = 4;   // Number of terms in a G.P.
  cout << "Sum of GP Series is "<<SumofGP(a, r, n);
  return 0;
}