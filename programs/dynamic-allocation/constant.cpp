#include <iostream>
using namespace std;

void f(int const * p) {
    // *(p)++; // Error
}

void g(int const & a) {
    // a++; // Error
}

int main(){
    // // const int
    const int i = 10; // or
    // int const i = 10;

    // // Error
    // const int i;
    // i = 10; 

    // REFERENCES

    // // const ref from non const int
    int j = 20;
    const int& k = j;
    j++; // 21
    // k++; // Error: We can't value by using k now, since it is const

    // // const ref from const int
    const int l = 30;
    const int& m = l;
    // l++; // Error
    // m++; // Error

    // // ref from const int: Error
    const int n = 40;
    // int& o = n; // Error

    // POINTERS 

    // const pointer from non const int
    int p = 50;
    int const * q = &p;
    p++; // 51
    // *(q)++; // Error

    // const pointer from const int
    const int r = 50;
    int const * s = &r;
    // r++; // Error
    // *(s)++; // Error

    // pointer from const int: Error
    int const t = 60;
    // int* u = &t; // Error
    

    int a = 80;
    int b = 90;
    
    int const * c = &a; // c is a pointer pointing to const int
    c = &b;  
    c++;
    // (*c)++; // Error: since    ^^^^ above

    int * const d = &a; // d is a const pointer pointing to int
    // d = &b; // Error:  since   ^^^^ above
    // d++; // Error
    (*d)++;

    int const * const e = &a;
    // e = &b; // Error
    // e++; // Error
    // (*e)++; // Error



    int v = 70;
    int * w = &v;
    f(w);
    g(v);    
}