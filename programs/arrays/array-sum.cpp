// Given an array of length N, you need to find and print the sum of all elements of the array.

#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    int array[1000000];

    cout << "Length of array: ";
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> array[i];
        sum = sum + array[i];
    }

    cout<< "Sum of array: " << sum << endl;
}

