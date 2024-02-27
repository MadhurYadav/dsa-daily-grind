// Problem Statement: Given two strings, check if two strings are anagrams of each other or not.

// Anagrams of the string are all the possible permutations of the string

#include <iostream>
#include <algorithm>
using namespace std;

// M1: Using sorting
// TC - O(nlogn), SC - O(1)
bool checkAnagramSort(string str1, string str2){
    // Case 1: when both of the strings have different lengths
    if(str1.length() != str2.length()) return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Case 2: check if every character of str1 and str2 matches with each other
    for(int i=0; i<str1.length(); i++){
        if(str1[i] != str2[i]) return false;
    }
    return true;
}

bool CheckAnagrams(string str1, string str2)
{
  // when both of the strings have different lengths
  if (str1.length() != str2.length())
    return false;
 
  int freq[26] = {0};
  for(int i=0; i<str1.length(); i++){
    freq[str1[i] - 'A']++;
  }
  for(int i=0; i<str2.length(); i++){
    freq[str2[i] - 'A']--;
  }

  for(int i=0; i<26; i++){
    if (freq[i] != 0)
      return false;
  }
  return true;
}
int main() {
    string str1 = "INTEGER";
    string str2 = "TEGERNI";

    int result = checkAnagramSort(str1, str2);
    
    if(result) cout<<"TRUE"<<endl;
    else cout<<"FALSE"<<endl;

    // 

    int ans  = CheckAnagrams(str1, str2);
    if(ans) cout<<"TRUE"<<endl;
    else cout<<"FALSE"<<endl;

    return 0;
}