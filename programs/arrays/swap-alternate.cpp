// Given an array of length N, swap every pair of alternate elements in the array.

// NOT WORKING AS EXPECTED

// Sample Input:
// 6
// 9 3 6 12 4 32

// Sample Output:
// 3 9 12 6 32 4

// Sample Input:
// 9
// 9 3 6 12 4 32 5 11 19

// Sample Output:
// 3 9 12 6 32 4 11 5 19


#include<iostream>
using namespace std;

int main() {
    int arr[100];
    int size;

    cout << "Enter any integer: ";
    cin >> size;

    cout << "Enter array elements (separated by space): ";

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }    
    
    int i = 0, temp;

    while(i <= size - 2){
        int j = i + 1;
        temp = arr[i];

        arr[i] = arr[j];
        arr[j] = temp;
        
        i += 2;
    }    

   for(int i = 0; i < size; i++) {
       cout << arr[i] << " ";
   }
   
   cout << endl;
}