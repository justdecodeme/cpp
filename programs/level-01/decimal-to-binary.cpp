// Given a decimal number (integer N), convert it into binary and print.
// The binary number should be in the form of an integer.
// Note : The given input number could be large, so the corresponding binary number can exceed the integer range. So take the answer as long.

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n, count = 0, rem;
    unsigned long int binary = 0, pv;

    cout << "Type integer: ";
    cin >> n;
    
    while(n > 0){
        rem = n % 2;
        pv = pow(10, count);
        binary = binary + (rem * pv);
        count++;
        n = n / 2;
    }

    cout << "Binary is: " << binary;
}
