//Problem Statement: Given a string, calculate the frequency of characters in a string.

#include <iostream>
#include <algorithm>
using namespace std;

// M1: Using Sorting
// TC - O(nlogn), SC - O(1)
void charFreqSort(string str){
    sort(str.begin(), str.end());

    char ch = str[0];
    int count = 1;

    for(int i=1; i<str.length(); i++){
        if(str[i] == ch) count++;
        else{
            cout<<ch<<" - "<<count<<endl;
            count = 1;
            ch = str[i];
        }
    }
    cout<<ch<<" - "<<count<<endl;
}

// M2 - Usinf frequency array
// TC - O(n), SC - O(1)
void charFreqArr(string str){
    int freq[26] = {0};
    for(int i=0; i<str.length(); i++){
        freq[str[i] - 'a']++;
    }

    for(int i=0; i<26; i++){
        if(freq[i]!=0) cout<<(char)(i+'a')<<" - "<<freq[i]<<endl;
    }
}

int main() {
    string str = "hellomyfriend";

    // charFreqSort(str);
    charFreqArr(str);
    return 0;
}






