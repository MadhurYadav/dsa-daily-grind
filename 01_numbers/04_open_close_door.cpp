#include <iostream>
#include <cmath>

using namespace std;

int countOpenDoors(int N) {
    int i = 1;
        int count = 0;
        
        while (true) {
            if (i * i > N) {
                break;
            } else {
                count++;
                i++;
            }
        }

    return count;
    
}

int main() {
    // Example usage
    int N = 5;
    
    // Calculate the number of open doors
    int result = countOpenDoors(N);

    // Output the result
    cout << "Number of open doors: " << result << endl;

    return 0;
}
