// !Time complexity: 
// !Worst case: O(n^2) -> array is reverse sorted
// !Best case: O(n) -> array is sorted

// !Space complexity: 
// !O(1)

/* 
Insertion sort is a simple sorting algorithm that works the way we sort playing cards in our hands.
 */

#include<iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int current = arr[i];
        int j = i - 1;
        for(; j >= 0; j--) {
            if(current < arr[j]) {
                arr[j + 1] = arr[j];
            } else {
                break;
            }
        }
        arr[j + 1] = current;
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

    insertionSort(arr, size);

    cout << "Sorted array is: " << endl;

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}