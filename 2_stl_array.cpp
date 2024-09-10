#include<iostream>
#include<array>
#include<algorithm>

using namespace std;

// How to pass this object array to a function 
// *************** All STL Containers are passed by value ***************
// This will not work
void updateArray_1(array<int, 6> arr, int i, int val){
    arr[i] = val;
}

// So the correct way is
// we want to pass by reference
// ************** array<int, 6> &arr ************** 
void updateArray_2(array<int, 6> &arr, int i, int val){
    arr[i] = val;
}

void printArray_1(array<int,5> &arr){
    int array_length = arr.size();
    for (int i = 0; i < array_length; i++){
        cout << arr[i] << " ";
    }
}

// This print function is only read data. not update data.
// So, we can use     const      variable when passing array.
// This is the correct way
void printArray_2(const array<int, 6> &arr){
    int array_length = arr.size();
    for (int i = 0; i < array_length; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    array<int, 6> arr = {10, 27, 73, 54, 35, 66};
    arr[2] = 10;
    updateArray_2(arr, 3, 100);

    // In this STL arrays, arr is a object.
    // So, we can calculate the length of the array using   arr.size()

    printArray_2(arr);
    cout << endl;

    // Sort array
    sort(arr.begin(), arr.end());
    printArray_2(arr);
    cout << endl;

    // Fill array with same element
    array<int, 5> fillArray;
    fillArray.fill(5);
    printArray_1(fillArray);
    cout << endl;

    // We can use for each loop to print this
    for(int x : fillArray){
        cout << x << " ";
    }

    // Get the ith element
    arr.at(3);

    // Get the element at front and back
    arr.front();
    arr.back();

    // ************ All these operations are O(1) operations ************
}