#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[20];
    int n; // Size of the array
    cin >> n;

    int k = 5; // Target value

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cntlegalelements = 0;

    // Count the number of elements less than or equal to k
    for (int i = 0; i < n; i++) {
        if (arr[i] <= k) {
            cntlegalelements++;
        }
    }

    cout << "cntlegalelements are: " << cntlegalelements << endl;

    int max_cnt = INT_MIN;

    // Count the number of elements less than or equal to k in the first cntlegalelements
    for (int i = 0; i < cntlegalelements; i++) {
        if (arr[i] <= k) {
            max_cnt++;
        }
    }

    // Sliding window approach to count the number of elements less than or equal to k
    for (int j = cntlegalelements; j < n; j++) {
        if (arr[j - k] <= k) {
            max_cnt--;
        }
        if (arr[j + k] <= k) {
            max_cnt++;
        }
    }

    cout << "cnt is: " << max_cnt << endl;

    // Calculate the minimum number of swaps required
    int swaps = cntlegalelements - max_cnt;

    cout << "Required swaps are: " << swaps;

    return 0;
}
