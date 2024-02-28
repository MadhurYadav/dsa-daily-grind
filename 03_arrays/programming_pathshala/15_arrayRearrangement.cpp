#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            // Cycle starts and all elements are >= 0 Should be CHANGED
            int idx = arr[i];
            int val = i;            
            while (idx != i) {
                int temp = arr[idx];
                arr[idx] = -(val+1);
                val = idx;
                idx = temp;
            }
            arr[idx] = -(val+1);
        }
    }
    
    // Decryption
    for (int i = 0; i < n; i++) {
        arr[i] = -1 * arr[i] - 1;
    }
    
    // Printing
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
