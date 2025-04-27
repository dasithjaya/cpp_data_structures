#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    if (n & 1)
    {
        cout << "ODD" << endl;
    }
    else
    {
        cout << "EVEN" << endl;
    }
    return 0;
}