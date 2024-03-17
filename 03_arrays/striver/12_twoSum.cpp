/*
P - Check if a pair with given sum exists in Array

1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

Note: You are not allowed to use the same element twice.

 N = 5, arr[] = {2,6,5,8,11}, target = 14
 O/P - YES , [1, 3]

*/


#include <bits/stdc++.h>
using namespace std;

/*
M1: Brute Force
TC - O(N^2), SC - O(1)

string twoSum(int size, vector<int> &arr, int target){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] + arr[j] == target) return "YES";
        }
    }
    return "NO";
}
*/

string twoSum(int size, vector<int> &arr, int target){
    unordered_map<int, int> mpp;
    for(int i=0; i<size; i++){
        int num = arr[i];
        int moreNeeded = target - num;
        if(mpp.find(moreNeeded) != mpp.end()){
            return "YES";
        }
        mpp[num] == i;
    }
    return "NO";
}

int main() {
    int size = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(size, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}
