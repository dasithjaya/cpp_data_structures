#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int arr[] = {9, 90, 31, 47, 66};
    int n = sizeof(arr) / sizeof(int);

    priority_queue<int> heap;
    for (int x : arr)
    {
        heap.push(x);
    }

    // This will print the numbers in descending order
    while (!heap.empty())
    {
        cout << heap.top() << endl;
        heap.pop();
    }

    // If we want to sort the priority_queue in ascending order we want to pass another two parameters to create
    // vector<int>      greater<int>
    priority_queue<int, vector<int>, greater<int>> heap2;
    for (int x : arr)
    {
        heap2.push(x);
    }
    cout << "\n Ascending Order " << endl;
    while (!heap2.empty())
    {
        cout << heap2.top() << endl;
        heap2.pop();
    }

    return 0;
}
