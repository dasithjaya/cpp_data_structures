#include <iostream>
#include <queue>
using namespace std;

class Compare
{
public:
    bool operator()(int a, int b)
    {
        return a < b;
    }
};

int main()
{
    int arr[] = {9, 90, 31, 47, 66};
    int n = sizeof(arr) / sizeof(int);

    priority_queue<int, vector<int>, Compare> heap;
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

    return 0;
}
