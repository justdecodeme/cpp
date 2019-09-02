#include <iostream>
using namespace std;

int main() {
    int i = 4; // 4 bytes generally, some computers allocate 2 bytes
    float f = 4.5; // 
    double d = 10.3;
    char c = 'a';
    bool b = true;

    cout << "sizeof (in bytes): \n";

    cout << "int: " << sizeof(i) << endl; // 4
    cout << "float: " << sizeof(f) << endl; // 4
    cout << "double: " << sizeof(d) << endl; // 8
    cout << "char: " << sizeof(c) << endl; // 1
    cout << "bool: " << sizeof(b) << endl; // 1
}