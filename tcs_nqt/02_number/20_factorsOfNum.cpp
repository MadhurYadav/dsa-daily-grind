// Factors of a Given Number

/*

#6
1,2,3,6

*/

// M1 - Brute force

// Time Complexity: O(N)

// Space Complexity: O(1)

// #include <iostream>
// using namespace std;
 
// void Divisor(int n)
// {
//     for (int i = 1; i <= n; i++)
//         if (n % i == 0)
//             cout <<" " << i;
// }
 
// int main()
// {   int n = 6;
//     Divisor(n);
//     return 0;
// }

// M2 - Optimised approach

// Intuition: When we thoroughly see the factors of a natural number, they always lie in pairs. For if ‘n’ is divisible by any number ‘i’ then it will also be divisible by its quotient of n/i.

/*

#14

1,2,3,4,5,6,7

14/1 = 14; (1,4)
14/2 = 7; (2,7)

(1,14), (2,7)
*/

#include <bits/stdc++.h>
using namespace std;
 
void Divisor(int n)
{
     for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                cout <<" "<< i;
 
            else // Otherwise print both
                cout << " "<< i << " " << n/i;
        }
    }
}
int main()
{   int n = 14;
    cout <<"Factors of "<<n<<" are: ";
    Divisor(n);
    return 0;
}