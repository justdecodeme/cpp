#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int* p = &i;
    int* q = p; 
    
    // p and q are same
    cout << p << endl; // 0x...
    cout << q << endl; // 0x...

    // i, *p, *q all are same
    cout << i << endl; // 10
    cout << *p << endl; // 10
    cout << *q << endl; // 10

    i++;
    cout << i << endl; // 11
    cout << *p << endl; // 11
    cout << *q << endl; // 11

    (*p)++;
    cout << i << endl; // 12
    cout << *p << endl; // 12
    cout << *q << endl; // 12
    
    (*q)++;
    cout << i << endl; // 13
    cout << *p << endl; // 13
    cout << *q << endl; // 13

    // Segmentation fault: 11
    // int* r;
    // cout << r << endl; 
    // cout << *r << endl; 

    // better way of doing above is
    // int* s = 0; // s is called null pointer
    // cout << s << endl; 
    // cout << *s << endl; 

    // int a = 100, b = 200;
    // int* p1 = &a, *q1 = &b;
    // p1 = q1; // p1 points to b now
    // cout << *p1 << endl; // 200

    // int* p2 = 0;
    // int c = 10;
    // *p2 = c;
    // cout << *p2 << endl; // Error - Segmentation fault: 11

    // float f = 10.5;
    // float p = 2.5;
    // float* ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << “ “ << f << “ “ << p; // 2.5 2.5 2.5
}