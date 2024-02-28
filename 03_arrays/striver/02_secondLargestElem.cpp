#include <iostream>
#include <vector>
#include <algorithm> // for the sort function
using namespace std;

// Function to get the second largest and second smallest elements
vector<int> getSecondOrderElements(int n, vector<int> a) {
    vector<int> result; 

    sort(a.begin(), a.end()); // Sort the input vector in ascending order

    int secondLargest = a[n - 2]; // The second largest element is at index n - 2
    int secondSmallest = a[1];    // The second smallest element is at index 1

    result.push_back(secondLargest); // Add the second largest element to the result vector
    result.push_back(secondSmallest); // Add the second smallest element to the result vector

    return result; // Return the vector containing the second largest and second smallest elements
}

int main() {
    // Example usage
    vector<int> input = {5, -1, 0, 4, 2, 7};
    int size = input.size();

    // Call the function to get the second largest and second smallest elements
    vector<int> result = getSecondOrderElements(size, input);

    // Output the result
    cout << "Second Largest Element: " << result[0] << endl;
    cout << "Second Smallest Element: " << result[1] << endl;

    return 0;
}
