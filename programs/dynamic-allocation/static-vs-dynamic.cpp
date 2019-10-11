#include <iostream>
using namespace std;


int main() {
    // Static: 
    // Less memory space
    // Automatic release of memory, based on scope

    // while(true) {
    //     int i = 10; // memory usage will remain same 4 bytes
    // }

    // Dynamic: 
    // More memory space
    // Manual release of memory required

    // while(true) {
    //     int* i = new int; // memory keeps accumulating
    //     // On deleting a dynamic memory, if the pointer value is not modified, then the pointer points to
    //     // the same deleted memory location
    //     delete i; // will delete heap memory not stack, still i can be used
    //     // i = new int;
    // }


    // In CPP, dynamic memory allocation is done using `new` operator.

    int s = 10; // stored in STACK memory (Static allocation)
    int *p = new int; // stored in HEAP memory (dynamic allocation)
    *p = 10;

    cout << *p;

    int n;
    cin >> n;
    int* pa = new int[n]; // `pa` has memory of first byte of array (Heap memory) in Stack memory 
    // int* pa2 = new int[50]; // 8 bytes on Stack and 200 (50*4) bytes on Heap
    pa[0] = 10; // pa[i] = *(pa + i)

    delete [] pa; // manual deletion of the memory which 'pa' is pointing to

    cout << pa[0];    
}