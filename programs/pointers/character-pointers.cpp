#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3};
    char b[] = "abc";
    char* c = &b[0];

    cout << a << endl; // 0x61ff00
    cout << b << endl; // abc
    cout << c << endl; // abc


    char ch = 'a';
    char* ptr = &ch;
    ch++;
    
    cout << ch << endl;
    cout << ptr << endl; // start at `b` (initial value was `a`)  till it doesn't find `\0`
    cout << *ptr << endl; // b


    char c1[] = "xyz";
    char* pc1 = &c1[0];
    pc1++;
    cout << pc1 << endl; // yz


    char s[]= "hello";
    // char *p = &s[0]; // same as below
    char *p = s;
    cout << s[0] << " " << p[0]; // h h


    // char str[] = "abc"; // correct way, `abc` stored in temp and `str[]` has another memory 
    // char* pstr = "abc"; // wrong way, here `*pstr` directly pointing to `abc` temp memory
}