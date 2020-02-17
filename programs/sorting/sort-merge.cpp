#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
    int temp[end-start];
    int i = start;
    int j = mid+1;
    int k = 0;

    while(i <= mid && j <= end) {
        if(arr[i] < arr[i++]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }
    if(i <= mid) {
        while(i <= mid) {
            temp[k++] = arr[i++];
        }
    } else if(j <= end) {
        while(j <= end) {
            temp[k++] = arr[j++];
        }
    }
    
    k = 0;

    for(int l = start; l <= end; l++) {
        arr[l] = temp[k++];
    }
}

void mergesort(int arr[], int start, int end) {
    if(start >= end) {
        return;
    }
    int mid = (end+start)/2;
    mergesort(arr, start, mid);
    mergesort(arr, mid+1, end);
    merge(arr, start, mid, end);
}

int main() {
    int arr[100], size;

    cout << "Array length: ";
    cin >> size;

    cout << "Array elements (separated by space): ";
    
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    } 

    mergesort(arr, 0, size-1);

    cout << "Sorted array is: " << endl;

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }     
}