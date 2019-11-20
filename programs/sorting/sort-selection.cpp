#include<iostream>
using namespace std;

void selectionSort(int *arr, int size) {
    for(int i = 0; i < size - 1; i++) {
        // find min element in the array
        int min = arr[i], minIndex = i;
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < min) {
                min = arr[j];
                minIndex = j;
            }
        }
        
        // swap
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