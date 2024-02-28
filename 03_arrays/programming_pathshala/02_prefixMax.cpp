#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 3, 2, 4, 54, 34, 12, 65, 22, 12};

    int pmax[10], ind;

    pmax[0] = arr[0];

    // Calculate the previous maximum values based on the current array element and the previous maximum
    for (int i = 1; i < 10; i++) {
        if (arr[i] > arr[i - 1]) {
            pmax[i] = arr[i]; // If the current element is greater than the previous element, update the previous maximum
        } else {
            pmax[i] = pmax[i - 1]; // If the current element is not greater, keep the previous maximum
        }
    }

    // Instead of if else loop we can direct use 'max' function
    // pmax[i] = max(pmax[i - 1], arr[i]);

    // Print the array of previous maximum values
    for (int i = 0; i < 10; i++) {
        cout << pmax[i] << " ";
    }
    
    cout << "\nEnter the index to get the max: ";
    cin >> ind;

    // Print the maximum value at the given index
    cout << pmax[ind];

    return 0;
}
