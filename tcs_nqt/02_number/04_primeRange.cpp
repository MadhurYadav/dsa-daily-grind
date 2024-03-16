
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    // for (int i = 2; i < num; i++) // TC : O(N)
    for(int i=2; i<=sqrt(num); i++){
        if(num % i == 0) return false;
    }
    return true;
}

void printPrimeRange(int num1, int num2){
    for(int i=num1; i<=num2; i++){
        if(isPrime(i)) cout<<i<<" ";
    }
} 

int main() {
    int a = 2, b = 10;
    printPrimeRange(a,b);
    return 0;
}