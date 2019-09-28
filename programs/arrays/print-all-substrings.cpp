// Given a String S of length n, print all its substrings.
// Substring of a String S is a part of S (of any length from 1 to n), which contains all consecutive characters from S.
// Input Format :
// String S
// Output Format :
//  All Substrings of S, one in each line.
// Note : The order in which you print substrings doesn't matter.
// Sample Input 1 :
// xyz
// Sample Output 1 :
// x
// xy
// xyz
// y
// yz
// z


#include<cstring>
void printSubstrings(char str[]){
    int a=strlen(str);
    for(int i=0;i<=(a-1);i++){
        int k=i;
        while(k<=(a-1)){
            int j=i;
            while(j<=k){
                cout<<str[j];
                j++;
            }
            cout<<endl;
            k++;
        }
            
    }
  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   * Print output as specified in the question.
   */


}

