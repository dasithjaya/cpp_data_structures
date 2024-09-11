#include<iostream>
#include<deque>
using namespace std;

int main(){
    // Create deque
    // Empty deque of ints
    deque<int> first;
    // Four ints with value zero
    deque<int> second(4, 0);
    // Iterating through second
    deque<int> third(second.begin(), second.end());
    // A copy of third
    deque<int> fourth(third);

    // The iterator constructor can be used to copy arrays
    int myints[] = {12, 45, 78, 56, 8};
    int n = sizeof(myints) / sizeof(int);
    deque<int> fifth(myints, myints + n);

    // Push element to back 
    deque<int> dq;
    dq.push_back(10);

    // Remove last element from the back
    dq.pop_back();

    // Push element to front
    dq.push_front(11);

    // Remove last element from the back
    dq.pop_front();

    // Get the front and back elements
    dq.front();
    dq.back();

    deque<int> nums(10);

    for (int i = 0; i < nums.size(); i++){
        nums[i] = i * i;
    }

    for(auto x : nums){
        cout << x << " ";
    }
}