// Given two sorted arrays of Size M and N respectively, merge them into a third array such that the third array is also sorted.
// Input Format :
//  Line 1 : Size of first array i.e. M
//  Line 2 : M elements of first array separated by space
//  Line 3 : Size of second array i.e. N
//  Line 2 : N elements of second array separated by space
// Output Format :
// M + N integers i.e. elements of third sorted array separated by spaces.
// Constraints :
// 1 <= M, N <= 10^6
// Sample Input :
// 5
// 1 3 4 7 11
// 4
// 2 4 6 13
// Sample Output :
// 1 2 3 4 4 6 7 11 13 

void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){
    int i=0,j=0,size3=size1+size2;
    for(int k=0;k<size3;k++){
        if(i<size1&&j<size2){
            if(arr1[i]<arr2[j]){
                ans[k]=arr1[i];
                i++;
            }
            else{
                ans[k]=arr2[j];
                j++;
            }
        }
        else if(i<size1){
            ans[k]=arr1[i];
            i++;
        }
        else {
            ans[k]=arr2[j];
            j++;
        }
    }
    
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Save the merged array in ans[] array passed as argument.
     * Don't return or print anything.
     * Taking input and printing output is handled automatically.
     */
}