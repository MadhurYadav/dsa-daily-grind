// Reverse digits of a number

#include <iostream>
using namespace std;

void reverseDigit(int num){
    int reverseNum = 0;
    while(num!=0){
        int lastDigit  = num % 10;
        reverseNum = reverseNum*10+lastDigit;
        num /= 10;
    }
    

    cout<<"Reverse digit is: "<<reverseNum;

}

int main() {
    int num  = 472;
    reverseDigit(num);
    return 0;
}