// Given two random integer arrays of size m and n, print their intersection. That is, print all the elements that are present in both the given arrays.
// Input arrays can contain duplicate elements.
// Note : Order of elements are not important
// Input format :
// Line 1 : Array 1 Size
// Line 2 : Array 1 elements (separated by space)
// Line 3 : Array 2 Size
// Line 4 : Array 2 elements (separated by space)
// Output format :
// Print intersection elements in different lines
// Constraints :
// 1 <= m, n <= 10^3
// Sample Input 1 :
// 6
// 2 6 8 5 4 3
// 4
// 2 3 4 7 
// Sample Output 1 :
// 2 
// 4 
// 3
// Sample Input 2 :
// 4
// 2 6 1 2
// 5
// 1 2 3 4 2
// Sample Output 2 :
// 2 
// 2
// 1

#include<climits>
// input1 - first array
// input2 - second array
// size1 - size of first array
// size2 - size of second array

void intersection(int input1[], int input2[], int size1, int size2) {
    int i=0,j;
    for(i;i<size1;i++){
        for(j=0;j<size2;j++){
            if(input1[i]==input2[j]){
                input2[j]=INT_MIN;
                cout<<input1[i]<<endl;
                break;
            }
        }
    }
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print the output and don't return it.
     * Taking input is handled automatically.
     */

}