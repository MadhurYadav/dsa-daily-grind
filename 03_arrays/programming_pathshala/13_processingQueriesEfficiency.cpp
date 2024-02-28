#include <iostream>
using namespace std;

int main() {
    // Given a 2D matrix, we need to find the sum of the submatrix for the given queries

    // Input matrix dimensions
    int M, N;
    cin >> M >> N;
    int Arr[M][N];

    // Scanning the elements of the 2D array
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> Arr[i][j];
        }
    }

    // Precomputation: finding the max for rows (PreMaxRows)
    int PreMaxRows[M][N];
    for (int i = 0; i < M; i++) {
        int sum = 0;
        for (int j = 0; j < N; j++) {
            sum += Arr[i][j];
            PreMaxRows[i][j] = sum;
        }
    }

    // Precomputation: finding the max for columns (PreMaxColumns)
    int PreMaxColumns[M][N];
    for (int i = 0; i < M; i++) {
        int sum = 0;
        for (int j = 0; j < N; j++) {
            sum += PreMaxRows[j][i];
            PreMaxColumns[j][i] = sum;
        }
    }

    // Scanning the queries
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = 0;

    // Calculating the sum of the submatrix using precomputed values
    sum = PreMaxColumns[c][d];
    if ((a - 1) >= 0 && (b - 1) >= 0)
        sum += PreMaxColumns[a - 1][b - 1];
    if (a - 1 >= 0)
        sum -= PreMaxColumns[a - 1][d];
    if (b - 1 >= 0)
        sum -= PreMaxColumns[c][b - 1];

    // Outputting the sum
    cout << sum << endl;

    return 0;
}
