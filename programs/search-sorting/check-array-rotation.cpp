// Given an integer array, which is sorted (in increasing order) and has been rotated by some number k in clockwise direction. Find and return the k.
// Input format :
// Line 1 : Integer n (Array Size)
// Line 2 : Array elements (separated by space)
// Output Format :
// Integer k
// Constraints :
// 1 <= n <= 1000
// Sample Input 1:
// 6
// 5 6 1 2 3 4
// Sample Output 1:
// 2
// Sample Input 2:
// 5
// 3 6 8 9 10
// Sample Output 2:
// 0

#include<cmath>
// arr - input array
// n - size of array

int FindSecondLargest(int arr[], int n){
    if(n<=1){
        return pow(2,-31);
    }
    int i=0,max1=arr[i],max2=arr[i];
    for(i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            return pow(2,-31);
        }
        else {
            break;
        }
    }
    for(i=1;i<n;i++){
        if(arr[i]>max1){
            max1=arr[i];
        }
    }
    for(int j=0;j<n;j++){
        if(arr[j]>=max2&&(arr[j]<max1)){
            max2=arr[j];
        }
        
        
    }
    return max2;
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
}