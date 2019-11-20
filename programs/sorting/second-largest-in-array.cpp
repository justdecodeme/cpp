// Given a random integer array of size n, find and return the second largest element present in the array.
// If n <= 1 or all elements are same in the array, return -2147483648 i.e. -2^31.
// Input format :
// Line 1 : Integer n (Array Size)
// Line 2 : Array elements (separated by space)
// Output Format :
// Second largest element
// Constraints :
// 1 <= N <= 10^6
// Sample Input 1:
// 7
// 2 13 4 1 3 6 28
// Sample Output 1:
// 13
// Sample Input 2:
// 5
// 9 3 6 2 9
// Sample Output 2:
// 6
// Sample Input 3:
// 2
// 6 6
// Sample Output 3:
// -2147483648

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