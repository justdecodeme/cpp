// Given a number n, put all elements from 1 to n in an array in order - 
// 1,3,.......4,2.

// Sample Input 1 :

// 6

// Sample Output 1 :

//  1 3 5 6 4 2

// Sample Input 2 :

// 9

// Sample Output 2 :

//  1 3 5 7 9 8 6 4 2

#include<iostream>
using namespace std;

int main() {
    int i = 0;
    int start = 0;
    int arr[100];
    int size;

    cout << "Enter any integer: ";
    cin >> size;

    int end = size - 1;

    while(start <= end){
        if(start == end){
            arr[start] = ++i;
        } else {
            arr[start] = ++i;
            arr[end] = ++i;
        }
        start++;
        end--;
   }    

   for(int i = 0; i < size; i++) {
       cout << arr[i] << " ";
   }
   
   cout << endl;
}