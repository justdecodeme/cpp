#include <iostream>
using namespace std;

int main() {
    int i = 4;
    float f = 4.5;
    double d = 10.3;
    char c = 'a';
    bool b = true;

    cout << "sizeof: \n";

    cout << "int: " << sizeof(i) << endl;
    cout << "float: " << sizeof(f) << endl;
    cout << "double: " << sizeof(d) << endl;
    cout << "char: " << sizeof(c) << endl;
    cout << "bool: " << sizeof(b) << endl;
}