#include <iostream>
using namespace std;

void print(int* p) {
    cout << *p << endl;
}

void increamentPointer(int* p) {
    p++; 
}

void increamentValue(int* p) {
    (*p)++;
}

int main() {
 int i = 10;
 int* p = &i;

 print(p); // 10

 cout << p << endl; // 0x61ff08
 increamentPointer(p);   
 cout << p << endl; // 0x61ff08

 cout << *p << endl; // 10
 increamentValue(p);   
 cout << *p << endl; // 11
}