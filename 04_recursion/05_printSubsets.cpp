#include <iostream>
using namespace std;

// TC - O(2^N), SC - O(N)
void printAllSubsets(int arr[], int index, int size, int tmp[], int tmpIndex){
    // termination condition
    // when index reaches size of array

    if(index == size){
        // print subset
        for(int i=0; i<tmpIndex; i++){
            cout<<tmp[i];
        }
        cout<<endl;
        return;
    }


    // recursive function


    
    // NO case!
    printAllSubsets(arr, index+1, size, tmp, tmpIndex);

    // YES case!
    tmp[tmpIndex] = arr[index];
    printAllSubsets(arr, index+1, size, tmp, tmpIndex+1);


}


int main() {
    int arr[3] = {1,2,3};
    int size = 3;
    int index = 0;
    int tmp [3];
    int tmpIndex = 0;

    // Call the function to print all subsets of the array
    printAllSubsets(arr, index, size, tmp, tmpIndex);
    return 0;
}