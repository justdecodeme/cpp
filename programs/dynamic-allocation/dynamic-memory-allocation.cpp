#include <iostream>
using namespace std;


int main() {
    int s = 10; // stored in STACK memory (Static allocation)
    int *p = new int; // stored in HEAP memory (dynamic allocation)
    *p = 10;

    cout << *p;

    int n;
    cin >> n;
    int* pa = new int[n]; // `pa` has memory of first byte of array (Heap memory) in Stack memory 
    // int* pa2 = new int[50]; // 8 bytes on Stack and 200 (50*4) bytes on Heap
    pa[0] = 10; // pa[i] = *(pa + i)

    cout << pa[0];
}