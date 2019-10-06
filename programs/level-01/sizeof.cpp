#include <iostream>
using namespace std;

int main() {
    int i = 4; // 4 bytes generally, some computers allocate 2 bytes
    int *p = &i; 
    float f = 4.5; // 
    double d = 10.3;
    char c = 'a';
    bool b = true;
    int a[10];

    cout << "sizeof (in bytes): \n";

    cout << "int: " << sizeof(i) << endl; // 4
    cout << "pointer: " << sizeof(p) << endl; // 8 (can be different)
    cout << "float: " << sizeof(f) << endl; // 4
    cout << "double: " << sizeof(d) << endl; // 8
    cout << "char: " << sizeof(c) << endl; // 1
    cout << "bool: " << sizeof(b) << endl; // 1
    cout << "array: " << sizeof(a) << endl; // 40 (10 * 4)
}