#include <iostream>
using namespace std;

int sum(int* a /* or `int a[]` */, int size) {
    cout << sizeof(a) << endl; // 4
    cout << a[0] << endl; // 3

    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans += a[i];
    }

    return ans;
}


int main() {
    int a[] = {1, 2, 3, 4};

    cout << sizeof(a) << endl; // 16
    // cout << sum(a, 4) << endl; // 10: sum of 4 values (1 to 4)
    cout << sum(a + 2, 2) << endl; // 7: sum of 2 values (3 and 4)
}