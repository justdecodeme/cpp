#include <iostream>
using namespace std;

int main() 
{
    // In C++, all variables contain garbage values before their initialisation.
    // Compiler assigns a garbage value to an uninitialised local variable in C++ Programming
    
    int i;
    float f;
    char c;
    bool b;
    
    cout << i << endl;    
    cout << f << endl;    
    cout << c << endl;    
    cout << b << endl;    
}