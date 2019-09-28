// Given a string, find and return the highest occurring character present in the given string.
// If there are 2 characters in the input string with same frequency, return the character which comes first.
// Note : Assume all the characters in the given string are lowercase.
// Sample Input 1:
// abdefgbabfba
// Sample Output 1:
// b
// Sample Input 2:
// xy
// Sample Output 2:
// x

// input - given string
#include<cstring>
#include<climits>
char highestOccurringChar(char input[]) {
    int arr[256]={0},max=INT_MIN;
    int i=0;
    while(input[i]!='\0'){
        arr[input[i]]=arr[input[i]]+1;
        i++;
    }
    char ans=input[0];
    int count=arr[input[0]];
    for(int j=1;input[j]!='\0';j++){
        if(count<arr[input[j]]){
            ans=input[j];
            count=arr[input[j]];
        }
        else{
            continue;
        }
    }
    return ans;
    
    // Write your code here

}

