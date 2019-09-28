// Given two strings, check if they are permutations of each other. Return true or false.
// Permutation means - length of both the strings should same and should contain same set of characters. Order of characters doesn't matter.
// Note : Input strings contain only lowercase english alphabets.
// Input format :
// Line 1 : String 1
// Line 2 : String 2
// Sample Input 1 :
// abcde
// baedc
// Sample Output 1 :
// true
// Sample Input 2 :
// abc
// cbd
// Sample Output 2 :
// false

// input1 - first input string
// input2 - second input string
#include<cstring>
bool isPermutation(char input1[], char input2[]) {
    int len=strlen(input1),len1=strlen(input2);
    bool a=false;
    int count=0;
    if(len==len1){
        for(int i=0;i<len;i++){
            for(int j=0;j<len1;j++){
                if(input1[i]!=input2[j]){
                    continue;
                }
                else{
                    input2[j]=' ';
                    count++;
                    break;
                }
            }
        }
        if(count==len){
            return !a;
        }
        else{
            return a;
        }
    }
    else{
        return a;
    }
    // Write your code here

}

