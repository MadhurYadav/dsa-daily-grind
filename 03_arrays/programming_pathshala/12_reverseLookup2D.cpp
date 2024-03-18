#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, columns;
    cin >> rows >> columns;
    
    vector<vector<int>> vec(rows, vector<int>(columns));
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cin >> vec[i][j];
        }
    }
    
    // Calculate sum of submatrices
    long long ans = 0;
    long long m = 1000000007;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {  // Adjusted loop bounds
            // Contribution formula used:
            // Number of choices for top left: (i + 1) * (j + 1)
            // Number of choices for bottom right: (rows - i) * (columns - j)
            ans += (vec[i][j] % m * (i + 1) % m * (j + 1) % m * (rows - i) % m * (columns - j) % m) % m;
        }
    }
    
    cout << ans;
    return 0;
}

/*

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

*/

