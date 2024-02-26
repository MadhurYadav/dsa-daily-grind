/*

Problem Statement: Given a string, write a program to Capitalize the first and last character of each word of that string.

*/

#include <iostream>
using namespace std;

void capitalize(string str, int size){
    // Converting first and last index character to uppercase
    for(int i=0; i<size; i++){
        if(i == 0 || i == (size-1)){
            str[i] = toupper(str[i]);
        }
        // // Converting characters present before and after space to uppercase
        else if(str[i] == ' '){
            str[i-1] = toupper(str[i-1]);
            str[i+1] = toupper(str[i+1]);
        }
    }
    cout<<str<<endl;
}


int main() {
    string str = "my name is Alex carY L";
    int size = str.length();

    capitalize(str, size);
    return 0;
}
