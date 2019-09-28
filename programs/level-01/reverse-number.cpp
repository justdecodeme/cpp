// Write a program to generate the reverse of a given number N. Print the corresponding reverse number.

#include<iostream>
using namespace std;

int main() {
    int n, rem, reverse = 0;

    cout << "Type some number: ";
    cin>> n;

    while(n != 0) {
        rem = n % 10;
        n = n / 10;
        reverse = (reverse * 10) + rem;
    }

    cout << "Reverse number is: " << reverse;
}