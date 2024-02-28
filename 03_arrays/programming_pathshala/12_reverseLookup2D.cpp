#include <iostream>
#include <vector>

using namespace std;

int sumOfSubMatrices(vector<vector<int>>& input) {
    int ans = 0;
    // Number of rows
    int m = input.size();
    // Number of columns
    int n = input[0].size();
    for (int i = 0; i < m; i++) {
        for (int j = i; j < n; j++) {
            // Contribution formula used:
            // Number of choices for top left: (i + 1) * (j + 1)
            // Number of choices for bottom right: (m - i) * (n - j)
            ans += input[i][j] * (i + 1) * (j + 1) * (m - i) * (n - j);
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> arr = {{1, 1}, {1, 1}};
    cout << sumOfSubMatrices(arr) << endl;
    return 0;
}
