// Given a random integer array. Sort this array using bubble sort.
// Change in the input array itself. You don't need to return or print elements.
// Input format :
// Line 1 : Integer N, Array Size
// Line 2 : Array elements (separated by space)
// Constraints :
// 1 <= N <= 10^3
// Sample Input 1:
// 7
// 2 13 4 1 3 6 28
// Sample Output 1:
// 1 2 3 4 6 13 28
// Sample Input 2:
// 5
// 9 3 6 2 0
// Sample Output 2:
// 0 2 3 6 9

// arr - input array
// n - size of array
void BubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }// Write your code here
}