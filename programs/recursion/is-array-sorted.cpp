#include <iostream>
using namespace std;

bool isSorted(int a[], int size) {
    if (size == 0 || size == 1) {
        return true;
    } else if(a[0] > a[1]) {
        return false;
    }

    return isSorted(a + 1, size - 1);
}

int main() {
    int a[] = {1, 2, 1, 4, 5};

    cout << isSorted(a, 5) << endl; // 0 - false, 1 - true;
}