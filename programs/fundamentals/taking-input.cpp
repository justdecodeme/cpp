#include <iostream>
using namespace std;

int main() {
    // ////////////////////////////////////
    // Compiler assigns a garbage value to an uninitialised local variable in C++ Programming
    // ////////////////////////////////////

    int a, b, c, d;
    
    cout << "Type two numbers to add: \n";
    cin >> a >> b;
    cout << "Sum of a and b: " << a + b << endl;

    cout << "Sum of c and d: " << c + d << endl; // not necessarily 0
}