// Given a binary number as an integer N, convert it into decimal and print.

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int binary, count = -1, decimal = 0, rem;

    cout << "Type binary number: ";
    cin >> binary;

    while(binary > 0){
        count++;
        rem = binary % 10;

        if(rem == 1){
            decimal = decimal + pow(2, count);
        }

        binary = binary / 10;
    }

    cout << decimal;
}
