// Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
// Sample Input:
// Welcome to Coding Ninjas
// Sample Output:
// Ninjas Coding to Welcome

// input - given string
// You need to update in the given string itself. No need to print or return anything


#include<cstring>
void reverseStringWordWise(char input[]) {
    int len=strlen(input);
    int i=0,j=len-1;
    while(i<j){
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
    int k=0;
    while(input[k]!=' '){
        k++;
    }
    int l=0,m=0,n;
    while(l<=len+1){
        if(input[l]==' '||input[l]=='\0'){
            n=l-1;
            while(j<k){
                char temp=input[j];
                input[m]=input[n];
                input[n]=temp;
                m++;
                n--;
            }
            m=l+1;
        }
        l++;
    }
    // Write your code here

}

