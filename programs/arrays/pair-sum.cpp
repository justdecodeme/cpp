// Given a random integer array A and a number x. Find and print the pair of elements in the array which sum to x.
// Array A can contain duplicate elements.
// While printing a pair, print the smaller element first.
// That is, if a valid pair is (6, 5) print "5 6". There is no constraint that out of 5 pairs which have to be printed in 1st line. You can print pairs in any order, just be careful about the order of elements in a pair.
// Input format :
// Line 1 : Integer N (Array size)
// Line 2 : Array elements (separated by space)
// Line 3 : Integer x
// Output format :
// Line 1 : Pair 1 elements (separated by space)
// Line 2 : Pair 2 elements (separated by space)
// Line 3 : and so on
// Constraints :
// 1 <= N <= 1000
// 1 <= x <= 100
// Sample Input:
// 9
// 1 3 6 2 5 4 3 2 4
// 7
// Sample Output :
// 1 6
// 3 4
// 3 4
// 2 5
// 2 5
// 3 4
// 3 4

void pairSum(int input[], int size, int x) {
    int i=0;
    for(i;i<size;i++){
        for(int b=i+1;b<size;b++){
            if((input[i]+input[b])==x){
                if(input[i]<input[b]){
                    cout<<input[i]<<" "<<input[b]<<endl;
                }
                else{
                    cout<<input[b]<<" "<<input[i]<<endl;
                }
            }
        }
    }
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print the output and don't return it.
     * Taking input is handled automatically.
     */

}