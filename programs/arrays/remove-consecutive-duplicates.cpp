// Given a string, remove all the consecutive duplicates that are present in the given string. That means, if 'aaa' is present in the string then it should become 'a' in the output string.
// Sample Input:
// aabccbaa
// Sample Output:
// abcba

// input - given string
// You need to update in the input string itself. No need to return or print anything

void removeConsecutiveDuplicates(char input[]) {
    int j=1,i=0;
    while(input[i]!='\0'){
        if(input[i]==input[i+1]){
            i++;
        }
        else{
            input[j]=input[i+1];
            i++;
            j++;
        }
    }
    // Write your code here

}

