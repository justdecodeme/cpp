// !Time complexity: 
// !Worst case: O(n)
// !Best case: O(1)


// !Linear search is rarely used practically because other search algorithms such as the 
// !binary search algorithm and hash tables allow significantly faster searching comparison 
// !to Linear search.

// Given a random integer array A and an element x. You need to search this element x 
// in the given array using linear search. Return the index of element in the input.
// Linear search means, we need to compare elements from the array A one by one with 
// the element x, till we found the match or we reach the end of array. If match found, return its index, and if not return -1.
// Indexing in the array starts from 0.

#include<iostream>
using namespace std;

int linearSearch(int *arr, int size, int val) { // or int linearSearch(int arr[], int size, int val) {
    for(int i = 0; i < size; i++){
        if(arr[i] == val) {
            return i;
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

    cout << "Index of element: " << linearSearch(arr, size, val) << endl;
}