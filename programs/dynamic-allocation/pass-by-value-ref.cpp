#include <iostream>
using namespace std;

// pass by value
void increment1(int n) {
    n++;
}
// pass by reference
void increment2(int& n) {
    n++;
}

// BAD PRACTICE
int& f1(int n) {
    int a = n;
    return a;
}
// BAD PRACTICE
int* f2() {
    int i = 10;
    return &i;
}

int main(){
    // int* p = f2();
    // int& r = f1(10);

    // int i = 10;
    
    int i;
    i = 10;

    int& j = i; // j is a `reference` variable holding ref of memory of `i`

    // int& j; // ERROR: can't write in two lines
    // j = i; 

    cout << i << endl; // 10

    j = 20;
    cout << i << endl; // 20

    increment1(i);
    cout << i << endl; // 20

    increment2(i);
    cout << i << endl; // 21
}