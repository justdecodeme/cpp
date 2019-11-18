// Given an array of integers of size n which contains numbers from 0 to n - 2. Each number is present at least once. That is, if n = 5, numbers from 0 to 3 is present in the given array at least once and one number is present twice. You need to find and return that duplicate number present in the array.
// Assume, duplicate number is always present in the array.
// Input format :
// Line 1 : Size of input array
// Line 2 : Array elements (separated by space)
// Output Format :
// Duplicate element
// Constraints :
// 1 <= n <= 10^3
// Sample Input:
// 9
// 0 7 2 5 4 7 1 3 6
// Sample Output:
// 7

#include <iostream>
using namespace std;

int findDumplicate(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        int a = arr[i];
        int count = 0;
        for (int j = 0; j < size; j++) {
            if ((a == arr[j]) && (j != i)) {
                count++;
                break;
            }
        }
        if (count == 1) {
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

    cout << "Duplicate number is: " << findDumplicate(arr, size) << endl;
}