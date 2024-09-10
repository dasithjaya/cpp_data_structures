#include <bits/stdc++.h>
using namespace std;

// How pass arrays to the functions
// Array is passed by reference, not the actual array

void updateArray_1(int arr[], int i, int val){
    arr[i] = val;
}

// We can pass the array like this way also
// ************** int arr[] = *arr **************
void updateArray_2(int *arr, int i, int val) {

}

// If work with all elemets of the array, we should want to pass the size of the array.
// Because it don't know about the size of the array.
// Because we only pass the base address of the array as   ->   int arr[]
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    // Defining arrays
    int arr[100];
    int a[5] = {1, 2, 3, 4, 5};
    int b[] = {1, 5, 4};
    int num_elements = sizeof(b) / sizeof(int);

    // Actual array is updating
    updateArray_1(b, 1, 50);

    printArray(b, num_elements);
    cout << endl;

    // Sort
    sort(b, b + num_elements);
    printArray(b, num_elements);
    cout << endl;

    // Print base address of the array
    cout << arr << endl;
    cout << *arr << endl;

    return 0;
}