// Write a program to determine whether the entered character is in uppercase or lowercase, or is an invalid character.
//  1 for uppercase
//  0 for lowercase 
// -1 for any other character (special characters or others)

#include<iostream>
using namespace std;

int main() {
    char ch;

    cout << "Type any character: ";
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z') {
        cout << "1";
    } else if(ch >= 'a' && ch <= 'z') {
        cout << "0";
    } else {
        cout << "-1";
    }
}