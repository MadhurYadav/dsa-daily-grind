// Problem:  Given a string, print non-repeating characters of the string.


#include <iostream>
using namespace std;


// M1: Using freq Arr
// TC - O(n^2), SC - O(n)
void nonRepeatingChar(string &str, int length){
    int freqArr[200] = {0};

    for(int i=0; i<length;  i++){
        freqArr[i] = 1;
        for(int j=i+1; j<length; j++){
            if(str[i] == str[j]){
                freqArr[i]++;
                str[j] = '-'; // set str[j] to - to avoid visited character
            } 
        }
    }

    for(int i=0; i<length; i++){
        if(freqArr[i]==1 && str[i]!=' ' && str[i]!='-'){
            cout<<str[i]<<" ";
        }
    }
}


// M2 : Using Linear Search
// TC - O(n), SC - O(n)
void charnonRepeating(string str, int length){

    int freqArr[200] = {0};
    for(int i=0; i<length; i++){
        // ignoring the space in the string
        if(str[i] == ' ') continue;
        // incrementing each character's frequency
        else freqArr[str[i] - 'a']++;
    }


    // print
    for(int i=0; i<length; i++){
        if(freqArr[str[i] - 'a'] == 1 && str[i] != ' '){
            cout<<str[i]<<" ";
        }
    }


}

int main() {
    string str = "hellooeveryone";
    int length = str.length();

    // nonRepeatingChar(str, length);
    charnonRepeating(str, length);
    return 0;
}