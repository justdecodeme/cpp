// You are given an integer array containing only 0s, 1s and 2s. Write a solution to sort this array using one scan only.
// You need to change in the given array itself. So no need to return or print anything.
// Input format :
// Line 1 : Integer n (Array Size)
// Line 2 : Array elements (separated by space)
// Output Format :
// Updated array elements (separated by space)
// Constraints :
// 1 <= n <= 10^6
// Sample Input:
// 7
// 0 1 2 0 2 0 1
// Sample Output:
// 0 0 0 1 1 2 2 

// arr - input array
// n - size of array

void sort012(int arr[], int n)  { 
    int i=0,j=0,k=n-1;
    for(i;i<n&&i<k;i++){
        if(arr[i]==0){
            if(arr[j]==2){
                arr[j]=0;
                arr[k]=2;
                j++;
                k--;
            }
            else{
                arr[j]=0;
                j++;
            }
            
        }
        else if(arr[i]==2){
            if(arr[k]==0){
                arr[k]=2;
                arr[j]=0;
                j++;
                k--;
            }
            else{
                arr[k]=2;
                k--;
            }
        }
    }
    while(j<=k){
        arr[j]=1;
        j++;
    }
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output.
     * Taking input and printing output is handled automatically.
     */

}

