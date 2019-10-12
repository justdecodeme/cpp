#include <iostream>
using namespace std;

int arraySum(int a[], int size) {
    if (size == 1) {
        return a[0];
    }

    return a[0] + arraySum(a + 1, size - 1);
}

int main() {
    int a[] = {1, 2, 3, 4, 5};

    cout << arraySum(a, 5) << endl;
}