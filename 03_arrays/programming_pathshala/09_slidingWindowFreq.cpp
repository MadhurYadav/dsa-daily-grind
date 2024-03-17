#include <iostream>
#include <vector>
using namespace std;

int main() {
    int k;
    cin >> k;

    int x;
    cin >> x;

    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Logic
    // Calculating first window sum
    int freq = 0;
    for (int i = 0; i < k; i++) {
        if (arr[i] == x) {
            freq++;
        }
    }

    cout << freq << " ";

    // Calculating next window
    for (int i = k; i < N; i++) {
        if (arr[i - k] == x) {
            freq--;
        }
        if (arr[i] == x) {
            freq++;
        }
        cout << freq << " ";
    }

    return 0;
}
