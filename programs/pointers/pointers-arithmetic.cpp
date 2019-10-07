#include <iostream>
using namespace std;

int main() {
    // int a[] = {1, 2, 3, 4};
    // cout << a  << " " << &a << " " << a+1 << endl; // 0x61ff00 0x61ff00 0x61ff04
    // cout << *(a) << " " << *(a+1) << endl; // 1 2

    int a[] = {1, 2, 3, 4};
    // int* p = a++; // wrong
    int* p = a+1; // right
    cout << *p << endl; // 2
}