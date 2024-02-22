/*

Count number of vowels, consonants, spaces in String

Eg: string str=”India won the cricket match”
Vowels: 8
Consonants: 15
White spaces: 4
*/

// TC - O(N), SC - O(1)

#include <iostream>
using namespace std;

void countSolve(string str, int length){
    // converting given string to lowercase
    for(int i=0; i<length; i++){
        str[i] = tolower(str[i]);
    }

    // vowels, consonants, white space
    int vowels = 0, consonants = 0, whitespaces = 0;
    for(int i=0; i<length; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') vowels++;
        else if (str[i] >= 'a' && str[i] <= 'z') consonants++;
        else if (str[i] == ' ') whitespaces++;
    }

    cout << "Vowels: " << vowels << "\n";
    cout << "Consonants: " << consonants << "\n";
    cout << "White Spaces: " << whitespaces << "\n";
}

int main() {
    string str= "India won the cricket match";
    int length= str.length();

    countSolve(str,length);
    return 0;
}