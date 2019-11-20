// Given a sorted integer array (in ascending order) and an element x. You need to search this element x in the given input array using binary search. Return the index of element in the input.
// Indexing starts from 0.
// Return -1 if x is not present in the input array.
// Input format :
// Line 1 : Integer N, Array Size
// Line 2 : Array elements (separated by space)
// Line 3 : Element to be searched (i.e. x)
// Output Format :
// Index
// Constraints :
// 1 <= N <= 10^6
// Sample Input 1:
// 7
// 1 3 7 9 11 12 45
// 3
// Sample Output 1:
// 1
// Sample Input 2:
// 7
// 1 2 3 4 5 6 7
// 9
// Sample Output 2:
// -1

#include<iostream>
using namespace std;

int binarySearch(int *arr, int size, int val) {
    int start = 0, end = size - 1, mid;

    while (start <= end) {
        mid = (start + end) / 2;
        
        if (val == arr[mid]) {
            return mid;
        }
        else if (arr[mid] < val) {
            start = mid + 1;
        }
        else if (arr[mid] > val) {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[100], size, val;

    cout << "Array length: ";
    cin >> size;

    cout << "Array elements (separated by space): ";
    
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    } 

    cout << "Value to search: ";
    cin >> val;

    cout << "Index of element: " << binarySearch(arr, size, val) << endl;
}