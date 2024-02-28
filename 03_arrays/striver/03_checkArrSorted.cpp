// Problem Statement: Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int minIndex = 0;

        // Find the index of the smallest element (number of rotations)
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                minIndex = i;
                break;
            }
        }

        // Check if remaining elements are in ascending order
        for (int i = 1; i < n; i++) {
            int index = (minIndex + i) % n; // Calculate rotated index
            if (nums[index] < nums[(index - 1 + n) % n]) {
                return false; // Array is not sorted and rotated
            }
        }

        return true; // Array is sorted and rotated
    }
};

int main() {
    Solution solution;

    // Example usage
    vector<int> nums1 = {4, 5, 6, 7, 0, 1, 2}; // Rotated sorted array
    vector<int> nums2 = {1, 2, 3, 4};           // Sorted array

    cout << "Is nums1 sorted and rotated? " << boolalpha << solution.check(nums1) << endl;
    cout << "Is nums2 sorted and rotated? " << boolalpha << solution.check(nums2) << endl;

    return 0;
}
