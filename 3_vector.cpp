#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Ability to resize itself automatically when an element is inserted
// Al the available indexes are include in end of the vector
// So can't do and push or pop in the front of the vector
// So it has only methods such as   push_back    pop_back
// No  push_front or pop_front 🤣
// clear() - clear all the elements in the vector, but capacity may not change
// reserve() - use to reserve memory for a vector before define it.

// ********* If every time when vector is full and push data to it, it's capacity will double *********
// This can be not good
// So we can use reserve() method

// 1) ->
// vector<int> v;
// v,reserve(100);

void printArray(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    // Empty container constructor
    vector<int> first;
    
    // Fill constructor (4 integers with value 20)
    vector<int> second(4, 20);

    // Range constructor
    int numbers[] = {10, 20, 30, 40};
    vector<int> third(numbers, numbers+3);

    // Copy constructor
    vector<int> fourth(third);

    // Create vector using initializing list
    vector<int> fifth = {1, 2, 3, 5, 7};

    // Access elements
    fifth.at(0);
    fifth[0];

    // Get the current size
    fifth.size();

    // Get the underlying capacity
    fifth.capacity();

    // Get the max size (available due to system or library implementation)
    fifth.max_size();

    // Push values
    fifth.push_back(10);

    // Pop value
    fifth.pop_back();

    // Clear all elements in the current vector, reduce size to 0
    fourth.clear();

    // Erase the 4th element
    fifth.erase(fifth.begin() + 3);

    // Erase the range of elements
    third.erase(third.begin(), third.begin() + 2);

    // Sort vector
    sort(fifth.begin(), fifth.end());

    // ****************************************************************************

    vector<int> v;

    // To reduce the double capacity
    v.reserve(100);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        v.push_back(num);
        cout << "Capacity " << v.capacity() << "   Size" << v.size() << endl;
    }

    for(int x : v){
        cout << x << " ";
    }
}


