#include <iostream>
#include <bitset>
using namespace std;

int getIthBit(int num, int i)
{
    int mask = 1 << i;
    return (num & mask) > 0 ? 1 : 0;
}

void clearIthBit(int &num, int i)
{
    int mask = ~(1 << i);
    num = num & mask;
}

void setIthBit(int &num, int i)
{
    int mask = 1 << i;
    num = num | mask;
}

int main()
{
    int num, i;
    cout << "Enter number : ";
    cin >> num;
    bitset<32> bit_num(num);
    cout << "Number in bits : " << bit_num << endl;

    cout << "\nEnter position : ";
    cin >> i;
    // Get ith bit
    // cout << "Result : " << getIthBit(num, i) << endl;

    // Clear ith bit
    clearIthBit(num, i);
    cout << " Result : " << num << endl;
    bitset<32> res_in_bits(num);
    cout << "After set ith bit : " << res_in_bits << endl;

    // Set ith bit

    return 0;
}