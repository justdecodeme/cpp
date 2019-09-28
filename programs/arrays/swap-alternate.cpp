// Given an array of length N, swap every pair of alternate elements in the array.

// NOT WORKING AS EXPECTED

// input
// 6
// 9 3 6 12 4 32

// output
// 3 9 12 6 32 4

#include<iostream>
using namespace std;

int main() {
    int arr[1000];
    int n;

    cout << "Enter any integer: ";
    cin >> n;

    cout << "Enter array elements (separated by space): ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }    
    
    int i = 0, temp;

    while(i <= n - 1){
        int j = ++i;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
    }    

   for(int i = 0; i < n; i++) {
       cout << arr[i] << " ";
   }
   
   cout << endl;
}