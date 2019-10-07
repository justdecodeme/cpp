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


    // char c1[] = "xyz";
    // char* pc1 = &c1[0];
    // pc1++;
    // cout << pc1 << endl; // yz


    // char s[]= "hello";
    // // char *p = &s[0]; // same as below
    // char *p = s;
    // cout << s[0] << " " << p[0]; // h h


    // char str[] = "abc"; // correct way, `abc` stored in temp and `str[]` has another memory 
    // char* pstr = "abc"; // wrong way, here `*pstr` directly pointing to `abc` temp memory


    // char Str[] = "abcdefg";
    // char *ptr; 
    // ptr = Str;
    // ptr += 5;
    // cout << ptr; // fg

    // char arr[20];
    // int i;
    // for(i = 0; i < 10; i++) {
    //     *(arr + i) = 65 + i;
    // }
    // *(arr + i) = '\0';
    // cout << arr // ABCDEFGHIJ

    char st[] = "ABCD";
    for(int i = 0; st[i] != '\0'; i++) {
        // cout << *(st) << endl;
        cout << st[i] << " " << i[st] << " " << *(st+i) << " " << *(st)+i  << "   "; 
        // A A A 65   B B B 66   C C C 67   D D D 68
    }    
}