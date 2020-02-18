// !Time complexity: 
// !Worst case: O(n^2)
// !Best case: O(n^2)

// !Space complexity: 
// !O(1)

// !The good thing about selection sort is it never makes more than O(n) swaps and can be useful when 
// !memory write is a costly operation.

/* 
The selection sort algorithm sorts an array by repeatedly finding the minimum element 
(considering ascending order) from unsorted part and putting it at the beginning. The 
algorithm maintains two subarrays in a given array.

1) The subarray which is already sorted.
2) Remaining subarray which is unsorted.

In every iteration of selection sort, the minimum element (considering ascending order) from 
the unsorted subarray is picked and moved to the sorted subarray.

Example

arr[] = 64 25 12 22 11

Find the minimum element in arr[0...4]
and place it at beginning
11 25 12 22 64

Find the minimum element in arr[1...4]
and place it at beginning of arr[1...4]
11 12 25 22 64

Find the minimum element in arr[2...4]
and place it at beginning of arr[2...4]
11 12 22 25 64

Find the minimum element in arr[3...4]
and place it at beginning of arr[3...4]
11 12 22 25 64 
 */

#include<iostream>
using namespace std;

void selectionSort(int *arr, int size) {
    /* One by one move boundary of unsorted subarray */
    for(int i = 0; i < size - 1; i++) {
        /* Find the minimum element in unsorted array */
        int minIndex = i;
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        /* Swap the found minimum element with the first element in unsorted array */
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[100], size;

    cout << "Array length: ";
    cin >> size;

    cout << "Array elements (separated by space): ";
    
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    } 

    selectionSort(arr, size);

    cout << "Sorted array is: " << endl;

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }     
}