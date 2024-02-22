/*
Reverse a String
*/

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

//M1: Using Stack
// put elements in stack then empty
// TC - O(N), SC - O(N)
void reverseStack(string str){
    stack<char> st;
    int size = str.length();

    // add elements to stack
    for(int i=0; i<size; i++){
        st.push(str[i]);
    }

    // empty elements from stack
    int j=0;
    while(!st.empty()){
        char elem = st.top();
        st.pop();
        str[j] = elem;
        j++;
    }
    cout<<str<<endl; 
}

// M2: Using Two Pointers
// TC- O(N), SC - O(1)
void reverseStr(string str){
    int p1 = 0, p2 = str.length()-1;

    while(p1<p2){
        swap(str[p1], str[p2]);
        p1++;
        p2--;
    }
    cout<<str<<endl;
}

// M3: Using library function
// TC- O(N), SC - O(1)
void reverseLib(string &str){
    reverse(str.begin(), str.end());

    cout<<str<<endl;
}

int main() {
    string str = "HELLO";
    reverseStack(str);
    reverseStr(str);
    reverseLib(str);
    return 0;
}