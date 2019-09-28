// Given a string and a character x. Write a function to remove all occurrences of x character from the given string.
// Leave the string as it is, if the given character is not present in the string.
// Input format :
// Line 1 : Input string
// Line 2 : Character x
// Sample Input :
// welcome to coding ninjas
// o
// Sample Output :
// welcme t cding ninjas

// input - given string
// You need to remove all occurrences of character c that are present in string input.
// Change in the input itself. So no need to return or print anything.
#include<cstring>
void removeAllOccurrencesOfChar(char input[], char c) {
    int arr[256]={0};
    int len=strlen(input);
    for(int i=0;i<len;i++){
        if(input[i]==c){
            arr['c']++;
        }
    }
    while(arr['c']!=0){
        int i=0;
        while(input[i]!='\0'){
            if(input[i]==c){
                for(i;input[i]!='\0';i++){
                    input[i]=input[i+1];
                }
                
                break;
            }
            i++;
        }
        arr['c']--;
    }
    
    // Write your code here

}

