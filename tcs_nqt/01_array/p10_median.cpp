#include <bits/stdc++.h>
using namespace std;

void medianFunc(int* arr, int n) {
    sort(arr, arr + n);

    if (n % 2 != 0) {
        // If the array has an odd size, directly pick the middle element
        double median = arr[n / 2];
        cout << median;
    } else {
        // If the array has an even size, calculate the average of the two middle elements
        int p1 = (n / 2) - 1;
        int p2 = n / 2;

        double median = (arr[p1] + arr[p2]) / 2.0;
        cout << median;
    }
}

int main() {
    int arr[] = {2, 4, 1, 3};
    int size = 4;

    medianFunc(arr, size);
    return 0;
}
