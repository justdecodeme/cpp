// Given an integer array of size 2N + 1. In this given array, N numbers are present twice and one number is present only once in the array.
// You need to find and return that number which is unique in the array.

// Note : Given array will always contain odd number of elements.
// Input format :
// Line 1 : Array size i.e. 2N+1
// Line 2 : Array elements (separated by space)

// Output Format :
// Unique element present in the array
// Constraints :
// 1 <= N <= 10^3

// Sample Input :
// 7
// 2 3 1 6 3 6 2
// Sample Output :
// 1

#include <iostream>
using namespace std;

// method 1
// int findUnique(int *arr, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int a = arr[i];
//         int count = 0;
//         for (int j = 0; j < size; j++)
//         {
//             if ((a != arr[j]) && (j != i))
//             {
//                 count++;
//             }
//             if (count == (size - 1))
//             {
//                 return arr[i];
//             }
//         }
//     }
//     return -1;
// }

// method 2
int findUnique(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        int a = arr[i];
        int count = 0;
        for (int j = 0; j < size; j++) {
            if ((a == arr[j]) && (j != i)) {
                count++;
                break;
            }
        }
        if (count == 0) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int arr[100];
    int size;

    cout << "Enter array size: ";
    cin >> size;

    cout << "Enter array elements (separated by space): ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Unique number is: " << findUnique(arr, size) << endl;
}
