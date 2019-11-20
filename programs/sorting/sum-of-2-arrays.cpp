// Two random integer arrays are given A1 and A2, in which numbers from 0 to 9 are present at every index (i.e. single digit integer is present at every index of both given arrays).
// You need to find sum of both the input arrays (like we add two integers) and put the result in another array i.e. output array (output arrays should also contain only single digits at every index).
// The size A1 & A2 can be different.
// Note : Output array size should be 1 more than the size of bigger array and place 0 at the 0th index if there is no carry. No need to print the elements of output array.
// Input format :
// Line 1 : Integer n1 (A1 Size)
// Line 2 : A1 elements (separated by space)
// Line 3 : Integer n2 (A2 Size)
// Line 4 : A2 elements (separated by space)
// Output Format :
// Output array elements (separated by space)
// Constraints :
// 1 <= n1, n2 <= 10^6
// Sample Input 1:
// 3
// 6 2 4
// 3
// 7 5 6
// Sample Output 1:
// 1 3 8 0
// Sample Input 2:
// 3
// 8 5 2
// 2
// 1 3
// Sample Output 2:
// 0 8 6 5

// input1 - first array
// size1 - size of first array
// input2 - second array
// size2 - size of second array
// output - array in which sum is to be stored

void sumOfTwoArrays(int input1[], int size1, int input2[], int size2, int output[]){
    int size3=0;
    if(size1>=size2){
        size3=size1+1;
    }
    else{
        size3=size2+1;
    }
    int i=size1-1,j=size2-1,k=size3-1,carry=0;
    while((i>=0&&j>=0)){
        int sum=0;
        sum=input1[i]+input2[j]+carry;
        if(sum<=9){
            carry=0;
            output[k]=sum;
            i--;
            j--;
            k--;
        }
        else if(sum>9){
            int b=sum%10;
            output[k]=b;
            carry=1;
            i--;
            j--;
            k--;
        }
    }
    while((i>=0)){
        int sum=0;
        sum=input1[i]+carry;
        if(sum<=9){
            carry=0;
            output[k]=sum;
            i--;
            k--;
        }
        else if(sum>9){
            int b=sum%10;
            output[k]=b;
            carry=1;
            i--;
            k--;
        }
    }
    while((j>=0)){
        int sum=0;
        sum=input2[j]+carry;
        if(sum<=9){
            carry=0;
            output[k]=sum;
            j--;
            k--;
        }
        else if(sum>9){
            int b=sum%10;
            output[k]=b;
            carry=1;
            j--;
            k--;
        }
    }
    if(i<0&&j<0){
        if(carry==1){
            output[k]=carry;
        }
        else{
            output[k]=0;
        }
    }
    
    
    
    
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output. Just fill the output in given output array.
     * Taking input and printing output is handled automatically.
     */

}

