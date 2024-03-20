#include <iostream>
using namespace std;

// M1
void printFunc(int x, int num){
    // termination condition
    if(x > num) return;
    cout<<x<<" ";
    printFunc(x+1, num);
    
}


// M2 (print n to 1)
void printFunc2(int num){
    // termination conditin
    if(num < 1) return;
    
    cout<<num<<" ";
    printFunc2(num-1);
}

// M3 (print 1 to n)
void printFunc3(int num){
    // termination conditin
    if(num < 1) return;
    printFunc3(num-1);
    cout<<num<<" ";
}

int main() {
    // print 1 to 10
    int num = 10;
    
    // printFunc(1, num);
    
    // printFunc2(num);
    
    printFunc3(num);
    
    return 0;
}