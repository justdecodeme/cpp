// Given a random integer array A and an element x. You need to search this element x in the given array using linear search. Return the index of element in the input.
// Linear search means, we need to compare elements from the array A one by one with the element x, till we found the match or we reach the end of array. If match found, return its index, and if not return -1.
// Indexing in the array starts from 0.

#include<iostream>
using namespace std;

int main() {
    int n, arr[1000], val, index = -1;

    cout << "Array length: ";
    cin >> n;

    cout << "Value to search: ";
    cin >> val;

    cout << "Array elements (separated by space): ";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        
        if(val == arr[i]) {
            index = i;
        }
    }    

    cout << "Index of element: " << index << endl;
}