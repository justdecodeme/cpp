// You are given an integer array A that contains only integers 0 and 1. Write a function to sort this array. Find a solution which scans the array only once. Don't use extra array.
// You need to change in the given array itself. So no need to return or print anything.
// Input format :
// Line 1 : Integer N (Array Size)
// Line 2 : Array elements (separated by space)
// Output format :
// Sorted array elements
// Constraints :
// 1 <= N <= 10^6
// Sample Input :
// 7
// 0 1 1 0 1 0 1
// Sample Output :
// 0 0 0 1 1 1 1

// arr - input array
// n - size of array
#include <bits/stdc++.h>
void SortZeroesAndOne(int arr[], int n){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]==0&&arr[i]<=arr[j]){
            i++;
        }
        else if(arr[j]==1&&arr[i]<=arr[j]){
            j--;
        }
        else if(arr[i]>arr[j]){
            arr[i]=0;
            arr[j]=1;
            i++;
            j--;
        }
    }
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Update in the given array itself. Don't return or print anything.
     * Taking input and printing output is handled automatically.
     */

}

