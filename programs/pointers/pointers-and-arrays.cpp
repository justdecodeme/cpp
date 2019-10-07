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


    // int arr[] = {4, 5, 6, 7};
    // int *p = (arr + 1);
    // cout << *arr + 9; // 13

    // int numbers[5];
    // int * p;
    // p = numbers; 
    // *p = 10;
    // p = &numbers[2]; 
    // *p = 20;
    // p--; 
    // *p = 30;
    // p = numbers + 3;
    // *p = 40;
    // p = numbers;
    // *(p+4) = 50;
    // for (int n=0; n<5; n++) {
    //     cout << numbers[n] << ","; // 10,30,20,40,50,
    // }    

    // float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    // float *ptr1 = &arr[0];
    // float *ptr2 = ptr1 + 3;
    // cout<<*ptr2<<" "; // 90.5
    // cout<< ptr2 - ptr1; // 3
}