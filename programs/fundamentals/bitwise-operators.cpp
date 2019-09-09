#include <iostream>
using namespace std;

int main() 
{
    int result_and = 4 & 2;
    int result_or = 4 | 2;
    int result_not = ~4;
    int result_xor = 4 ^ 2;
    int result_leftShift = 4 << 1;
    int result_rightShift = 4 >> 1;

    cout << result_and << endl;
    cout << result_or << endl;
    cout << result_not << endl;
    cout << result_xor << endl;
    cout << result_leftShift << endl;
    cout << result_rightShift << endl;
}