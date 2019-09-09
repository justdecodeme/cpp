#include <iostream>
using namespace std;  
int main()
{
    double a = 55.5;
    // error: invalid operands of types 'double' and 'int' to binary 'operator%'
    // a = a % 10; // % can’t be used with double or float.
}