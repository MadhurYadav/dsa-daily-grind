/*

Problem Statement: Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array.

Eg: arr[] = {1,1,0,1,1,1,0,1}
O/P - 3 -> (1,1,1)

Pseudocode - 
Function findMaxConsecutiveOnes(nums: array of integers) -> integer:
    count = 0          // Variable to keep track of consecutive 1's
    max_count = 0      // Variable to maintain the maximum number of consecutive 1's

    // Traverse the array
    for i from 0 to length(nums) - 1:
        if nums[i] == 1:
            // If the current element is 1, increment the count
            count = count + 1
            // Update max_count if count becomes greater
            if count > max_count:
                max_count = count
        else:
            // If the current element is 0, reset count to 0
            count = 0

    // Return the maximum number of consecutive 1's
    return max_count

*/

// TC - O(n), SC - O(1)

#include <bits/stdc++.h>

using namespace std;
class Solution {
  public:
    int findMaxConsecutiveOnes(vector < int > & nums) {
      int cnt = 0;
      int maxi = 0;
      for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
          cnt++;
          maxi = max(maxi, cnt);
        } else {
          cnt = 0;
        }

        
      }
      return maxi;
    }
};

int main() {
  vector < int > nums = { 1, 1, 0, 1, 1, 1 };
  Solution obj;
  int ans = obj.findMaxConsecutiveOnes(nums);
  cout << "The maximum  consecutive 1's are " << ans;
  return 0;
}