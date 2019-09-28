// Given a number n, put all elements from 1 to n in an array in order - 1,3,.......4,2.

#include<iostream>
using namespace std;

int main() {
    int i = 1;
    int start = 0;
    int arr[1000];
    int n;

    cout << "Enter any integer: ";
    cin >> n;

    int end = n - 1;

    while(start <= end){
        if(start == end){
            arr[start] = i;
            start++;
            end--;
        } else if (start < end){
            arr[start] = i;
            i++;
            arr[end] = i;
            i++;
            start++;
            end--;
        }
   }    

   for(int i = 0; i < n; i++) {
       cout << arr[i] << " ";
   }
   
   cout << endl;
}