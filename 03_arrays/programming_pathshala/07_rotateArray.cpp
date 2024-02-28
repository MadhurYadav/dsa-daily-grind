#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int n, int k) {
    k %= n; // Ensure k is within the range of the array size

    // Step 1 - Reverse (n - k) elements
    reverseArray(arr, 0, n - k - 1);

    // Step 2 - Reverse k elements
    reverseArray(arr, n - k, n - 1);

    // Step 3 -Reverse the entire array
    reverseArray(arr, 0, n - 1);
}

int main() {
    int N, K;
    cin >> N >> K;

    int Arr[N];
    for (int i = 0; i < N; i++) {
        cin >> Arr[i];
    }

    rotateArray(Arr, N, K);

    for (int i = 0; i < N; i++) {
        cout << Arr[i] << " ";
    }

    return 0;
}
