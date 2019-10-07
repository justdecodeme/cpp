#include <iostream>
using namespace std;

void increment1(int** p) {
    p = p + 1;
}
void increment2(int** p) {
    *p = *p + 1;
}
void increment3(int** p) {
    **p = **p + 1;
}

int main() {
    int i = 10;
    int* p = &i;
    int** p2 = &p;

    cout << &p << endl; // 0x61ff04
    cout << p2 << endl; // 0x61ff04

    cout << &i << endl; // 0x61ff08
    cout << p << endl; // 0x61ff08
    cout << *p2 << endl; // 0x61ff08

    cout << i << endl; // 10
    cout << *p << endl; // 10
    cout << **p2 << endl; // 10

    cout << "-------------" << endl;

    // // uccomment one by one
    // increment1(p2); // no change
    // increment2(p2); // change 
    increment3(p2); // change

    cout << &p << endl; // 0x61ff04
    cout << p2 << endl; // 0x61ff04

    cout << &i << endl; // 0x61ff08
    cout << p << endl; // 0x61ff0c
    cout << *p2 << endl; // 0x61ff0c

    cout << i << endl; // 11
    cout << *p << endl; // 11
    cout << **p2 << endl; // 11   



    // int a = 10;
    // int *p = &a;
    // int **q = &p;
    // int b = 20;
    // *q = &b;
    // (*p)++;
    // cout << a << " " << b << endl; // 10 21

    // int a = 100;
    // int *p = &a;
    // int **q = &p;
    // int b = (**q)++;
    // int *r = *q;
    // (*r)++;
    // cout << a << " " << b << endl; // 102 100

    // int a = 100;
    // int *p = &a;
    // int **q = &p;
    // int b = (**q)++ + 4;
    // cout << a << " " << b << endl; // 101 104    
}