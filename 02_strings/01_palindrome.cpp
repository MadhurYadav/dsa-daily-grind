// Check if the given String is Palindrome or not

/*

- "ABCDCBA" 0/P - Palindrome

- "HELLO" O/P - Not Palindrome

*/

#include <iostream>
using namespace std;

// Two Pointer Approach
// TC - O(N), SC - O(1)
bool isPalindrome(string s){
    // p1 - pointer 1 and p2 - pointer 2
    int p1 = 0, p2 = s.length()-1;
    while(p1<p2){
        if(s[p1] == s[p2]){
            p1++;
            p2--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main() {
    string str = "ABCDCBA";
    bool ans = isPalindrome(str);

    if(ans == true) cout<<"Palindrome";
    else cout<<"Not Palindrome";

    return 0;
}