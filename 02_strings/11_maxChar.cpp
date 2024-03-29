// Problem Statement: Given a string, return the character that occurs the maximum number of times in the string. If the maximum occurrence of two or more characters is the same, return any one of them. 

#include <iostream>
#include <algorithm>
using namespace std;

// M1: Using Freq Array
// TC - O(n), SC - O(1)
char maxOccurringChar(string str) {
   char ans;
   int maxfreq = 0, n = str.length();
   int count[256] = {0};
   for (int i = 0; i < n; i++) {
      count[str[i]]++;
      if (count[str[i]] > maxfreq) {
         maxfreq = count[str[i]];
         ans = str[i];
      }
   }
   return ans;
}

// M2: Using Sorting
// // TC - O(nlogn), SC - O(1)
char maxOccurringCharSorting(string str) {
   sort(str.begin(), str.end());
   char ans = str[0];
   int i, curr_freq = 0, max_freq = 0, n = str.length();
   for (i = 0; i < n; i++) {
      if (str[i] == str[i - 1]) {
         curr_freq++;
      } 
      else {
         if (max_freq < curr_freq) {
            max_freq = curr_freq;
            ans = str[i - 1];
         }
         curr_freq = 0;
      }
   }
   if (max_freq < curr_freq) {
      max_freq = curr_freq;
      ans = str[i - 1];
   }
   return ans;
}

int main() {
   string str = "takeuforward";
//    maxOccurringChar(str);
   maxOccurringCharSorting(str);
}