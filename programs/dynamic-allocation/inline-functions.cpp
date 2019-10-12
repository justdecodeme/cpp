#include <iostream>
using namespace std;

// Inline functions are useful when function is small and we want to avoid function call overhead. 

// the return line will be coppied to wherever it is called
// if code is greater or equal to 2 lines, compiler will decide whether the function will be inline or not
inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int main(){
    int a = 5, b = 7;

    cout << "Max: " << max(a, b) << endl;
}