#include <iostream>
using namespace std;

int func(int num){
    // termination condition
    if(num == 0) return 1;
    
    // recurrence relation
    int factNum = num * func(num-1);
    
    return factNum;
}

int main() {
    int num = 5;
    
    cout<<func(num);

    return 0;
}