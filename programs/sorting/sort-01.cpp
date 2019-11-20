// You are given an integer array A that contains only integers 0 and 1. Write a function to sort this array. Find a solution which scans the array only once. Don't use extra array.
// You need to change in the given array itself. So no need to return or print anything.
// Input format :
// Line 1 : Integer N (Array Size)
// Line 2 : Array elements (separated by space)
// Output format :
// Sorted array elements
// Constraints :
// 1 <= N <= 10^6
// Sample Input :
// 7
// 0 1 1 0 1 0 1
// Sample Output :
// 0 0 0 1 1 1 1

// arr - input array
// n - size of array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void SortZeroesAndOne(int arr[], int size) {
    int i = 0, j = size - 1;

    while (i < j) {
        if (arr[i] == 0) {
            i++;
        } else if (arr[j] == 1) {
            j--;
        } else if (arr[i] > arr[j]) {
            arr[i] = 0;
            arr[j] = 1;
            i++;
            j--;
        }
    }
}

int main() {
    int arr[100];
    int size;

    cout << "Enter array size: ";
    cin >> size;

    cout << "Enter array elements (separated by space): ";

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Sorted array: " << endl;
    SortZeroesAndOne(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}