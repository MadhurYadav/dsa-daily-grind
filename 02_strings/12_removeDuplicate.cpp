//Problem Statement: Given a String remove all the duplicate characters from the given String.

#include <iostream>
#include <vector>
using namespace std;

// M1: Brute Force
// TC - O(n^2), SC - O(1)
void removeDuplicateLetters(string str){
    string ans = "";
    for(int i=0; i<str.length(); i++){
        // to check if the character is already present on the left side of the string
        int j;
        for(j=0; j<i; j++){
            // same character found
            if(str[i] == str[j]) break;
        }
        // we haven’t found the same character add it to the res string
        if(i == j) ans += str[i];
    }
    cout<<ans<<endl;
}

// M2: Boolean Array

void removeDupliChar(string str){
    string ans = "";
    vector<bool> map(26,false);
    for(int i=0; i<str.length(); i++){
        if(map[str[i] - 'a'] == false){
            ans += str[i];
            map[str[i] - 'a'] = true;
        }
    }
    cout<<ans<<endl;
}

int main() {
    string str = "cbacdcbc";
    removeDuplicateLetters(str);
    removeDupliChar(str);
    return 0;
}