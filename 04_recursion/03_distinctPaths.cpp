#include <iostream>
using namespace std;

// TC - O(2^(n + m)), SC - O(n + m)
int distinctPaths(int i, int j, int n, int m) {
    // Termination condition
    if (i == n - 1 || j == m - 1) return 1;
    
    // Recursive function
    int recFunc = distinctPaths(i, j + 1, n, m) + distinctPaths(i + 1, j, n, m);
    
    return recFunc;
}

int main() {
    int rows = 4, columns = 4;
    int startingRowIndex = 0, startingColumnIndex = 0;
    
    cout << "Number of distinct paths: " << distinctPaths(startingRowIndex, startingColumnIndex, rows, columns);
    
    return 0;
}
