#include <iostream>
using namespace std;

void middlePos(int* arr, int n, int val, int pos){
    for(int i=n; i>=pos; i--){
        arr[i] = arr[i-1];
    }

    arr[pos-1]=val;

    // print
    cout<<"Inserting at middle!"<<endl;
    for(int i=0; i<=n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}


void insertEnd(int* arr, int n, int val){
    arr[n] = val;
    // print
    cout<<"Inserting at ending!"<<endl;
    for(int i=0; i<=n; i++) cout<<arr[i]<<" ";
    cout<<endl;

    int middleValue = 101;
    int position = 5;
    middlePos(arr, n, middleValue, position);
    
}

void insertBegin(int* arr, int n, int val){
    for(int i=n-1; i>=0; i--){
        arr[i+1]=arr[i];
    }

    arr[0] = val;

    // print
    cout<<"Inserting at begining!"<<endl;
    for(int i=0; i<=n; i++) cout<<arr[i]<<" ";
    cout<<endl;

    // calling end func
    int endValue = 50;
    insertEnd(arr, n, endValue);
}

int main() {
    int arr[] = {10,9,14,8,20,48,16,9};
    int size = 8;
    int startValue = 40;

    insertBegin(arr, size, startValue);
    
    return 0;
}