#include <iostream>
using namespace std;

int main() {
    int i = 65;
    char c = i;
    int *p = &i;
    // char *pc = p; // error: implicit typecasting
    char *pc = (char*)p; // explicit typecasting
    void *pv = p; // void pointer can point to any type of objects (int, char, float)

    cout << i << endl; // 65
    cout << c << endl; // A
    cout << p << endl; // 0x61ff00
    cout << pv << endl; // 0x61ff00
    cout << pc << endl; // A
    cout << *p << endl; // 65
    cout << *pc << endl; // A : because of Little Endian system (other is Big Endian)
    cout << *(pc + 1) << endl; // 
    cout << *(pc + 2) << endl; // 
    cout << *(pc + 3) << endl; // 


    // char ch = 'A';
    // int* p = (int*)&ch;
    // *p = 610 % 255; // 100
    // cout << ch; // d
}