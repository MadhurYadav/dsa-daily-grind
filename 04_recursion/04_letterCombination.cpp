#include<bits/stdc++.h>
using namespace std;

// TC - O(3^N), SC - O(8 * M) 
// M is the average number of characters
void printLetterCombination(string tmp, const string& digits, int i, const vector<vector<char>>& digitmap){
    // Termination condition 
    if(i >= digits.size()){
        cout<<tmp<<" ";
        return;
    }

    // Recurrence relation
    for(int j=0; j < digitmap[digits[i] - '2'].size(); j++){ 
        printLetterCombination(tmp+digitmap[digits[i]-'2'][j], digits, i+1, digitmap);
    }
}

// Using char array to save space
void printLetterCombinationArray(char tmp[], const string& digits, int i, const vector<vector<char>>& digitmap){
    
    // Termination condition 
    if(digits[i] == '\0'){
        cout<<tmp<<" "; // Debugging statement
        return;
    }

    // Recurrence relation
    for(int j=0; j < digitmap[digits[i] - '2'].size(); j++){ 
        tmp[i] = digitmap[digits[i]-'2'][j]; // Overwrite
        printLetterCombinationArray(tmp, digits, i+1, digitmap);
    }
}

int main() {
    vector<vector<char>> digit_map(8);
    string digits = "237";
    char tmp[digits.length()+1]; // +1 for null terminator

    digit_map[0].push_back('a');
    digit_map[0].push_back('b');
    digit_map[0].push_back('c');

    digit_map[1].push_back('d');
    digit_map[1].push_back('e');
    digit_map[1].push_back('f');
 
    digit_map[2].push_back('g');
    digit_map[2].push_back('h');
    digit_map[2].push_back('i');
 
    digit_map[3].push_back('j');
    digit_map[3].push_back('k');
    digit_map[3].push_back('l');
 
    digit_map[4].push_back('m');
    digit_map[4].push_back('n');
    digit_map[4].push_back('o');
 
    digit_map[5].push_back('p');
    digit_map[5].push_back('q');
    digit_map[5].push_back('r');
    digit_map[5].push_back('s');
 
    digit_map[6].push_back('t');
    digit_map[6].push_back('u');
    digit_map[6].push_back('v');
 
    digit_map[7].push_back('w');
    digit_map[7].push_back('x');
    digit_map[7].push_back('y');
    digit_map[7].push_back('z');

    if(digits.empty()) 
        cout<<"This is not a valid string, please enter a valid string";
    else 
        // printLetterCombination("", digits, 0, digit_map);
        printLetterCombinationArray(tmp, digits, 0, digit_map);

    return 0;
}
