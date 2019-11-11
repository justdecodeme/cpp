// Write a program to determine whether the entered character is in uppercase or lowercase, or is an invalid character.
//  `Uppercase` for uppercase
//  `Lowercase` for lowercase 
// `NAC - Not a Character` for any other character (special characters or others)

#include<iostream>
using namespace std;

int main() {
    char ch;

    cout << "Type any character: ";
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z') { // or (ch >= 65 && ch <= 90)
        cout << "Uppercase";
    } else if(ch >= 'a' && ch <= 'z') { // or (ch >= 97 && c <= 122)
        cout << "Lowercase";
    } else {
        cout << "NAC - Not a Character";
    }
}