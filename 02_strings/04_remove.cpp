/*
Remove
    - All vowels from the String
    - Spaces from a String
    - Characters from a string except alphabets

*/

#include <iostream>
using namespace std;

string remove(string str, int n){
    // remove vowels
    for(int i=0; i<n; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            str = str.substr(0,i) + str.substr(i+1);
            i--;
        }
    }

    // remove space
    int count = 0; // spaces seen so far

    for (int i = 0; str[i]; i++){
        if (str[i] != ' ') { // if whitespace is present
            str[count] = str[i]; // remove whitespace
            count++; // increment the count
        }
    }
    
    str[count] = '\0';


    // remove characters
    string ans;
    for (int i = 0; i < n; i++) {
        int ascii = (int) str[i]; // ascii value

        if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122)) // if alphabets
        ans.push_back(str[i]);
    }

    return ans;
}

int main() {
    string str = "hello everyone!";
    int n = str.length();
    cout<<remove(str, n)<<endl;
    return 0;
}