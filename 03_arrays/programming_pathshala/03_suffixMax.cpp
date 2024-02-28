#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 3, 2, 4, 54, 34, 12, 65, 22, 12};

    int Smax[10], ind;

    Smax[9] = arr[9];

    // Calculate the suffix maximum for each element in the array
    for (int i = 8; i >= 0; i--) {
        Smax[i] = max(Smax[i + 1], arr[i]);
    }

    // Print the array of suffix maximum values
    for (int i = 0; i < 10; i++) {
        cout << Smax[i] << " ";
    }
    
    cout << "\nEnter the index to get the max: ";
    cin >> ind;

    // Validate the input index and print the suffix maximum at the given index
    if (ind >= 0 && ind < 10) {
        cout << Smax[ind];
    } else {
        cout << "Invalid index";
    }

    return 0;
}
