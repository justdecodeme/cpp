// Given a string S, reverse each word of a string individually. For eg. if a string is "abc def", reversed string should be "cba fed".
// Input Format :
// String S
// Output Format :
// Updated string
// Constraints :
// 1 <= Length of S <= 1000
// Sample Input :
// Welcome to Coding Ninjas
// Sample Output:
// emocleW ot gnidoC sajniN

// input - given string
// Update in the given input itself. No need to return or print anything
#include<cstring>
void reverseEachWord(char input[]) {
    int i=0,j=0,k,l,len=strlen(input);
    while(i<=len+1){
        if(input[i]==' '||input[i]=='\0'){
            k=i-1;
            while(j<k){
                char temp=input[j];
                input[j]=input[k];
                input[k]=temp;
                j++;
                k--;
            }
            j=i+1;
        }
        i++;
    }
    // Write your code here

}

