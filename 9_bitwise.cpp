#include <iostream>
#include <bitset>
using namespace std;

int main()
{

    const bitset<32> five(5);
    const bitset<32> seven(7);

    cout << "five :  " << five << endl;
    cout << "seven : " << seven << endl;
    cout << "5 & 7   " << (5 & 7) << endl;
    cout << "5 | 7   " << (5 | 7) << endl;
    cout << "5 ^ 7   " << (5 ^ 7) << endl;

    const bitset<32> zero(0);
    const bitset<32> comp_zero(~0);
    cout << "0   : " << zero << endl;
    cout << "~0  : " << comp_zero << endl;

    // LEFT SHIFT
    cout << "\n\n\nBefor shift 5          : " << five << endl;
    int after_left_shift = 5 << 2;
    bitset<32> after_left_res(after_left_shift);
    cout << "After left shift 5 by 2: " << after_left_res << endl;
    cout << "5 << 2   " << (5 << 2) << endl;
    // 5 << 2  =  5 * (2 ^ 2)
    // 5 << 3  =  5 * (2 ^ 3)
    // 5 << 5  =  5 * (2 ^ 5)

    // RIGHT SHIFT
    cout << "\n\n\nBefor shift 5           : " << five << endl;
    int after_right_shift = 5 >> 2;
    bitset<32> after_right_res(after_right_shift);
    cout << "After right shift 5 by 2: " << after_right_res << endl;
    cout << "5 >> 2   " << (5 >> 2) << endl;
    // 5 << 2  =  5 / (2 ^ 2)
    // 5 << 3  =  5 / (2 ^ 3)
    // 5 << 5  =  5 / (2 ^ 5)
    return 0;
}