// Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.
// For e.g. if a String has 'x' repeated 5 times, replace this "xxxxx" with "x5".
// Note : Consecutive count of every character in input string is less than equal to 9.
// Input Format :
// Input string S
// Output Format :
// Compressed string 
// Sample Input:
// aaabbccdsa
// Sample Output:
// a3b2c2dsa

// input - given string
// You need to update in the given string itself i.e. in input. No need to return or print.

void stringCompression(char input[]) {
    int i=0,j=0,k,l,count=0;
    while(input[i]!='\0'){
        if(input[i]==input[i+1]){
            if(count==0){
                j=i+1;
            }
            count++;
            i++;
        }
        else if((input[i]!=input[i+1])&&(count!=0)){
            input[j]=count+1+48;
            while((count-1)!=0){
                for(k=j+1;input[k]!='\0';k++){
                    input[k]=input[k+1];
                }
                count--;
            }
            i=j+1;
            count=0;
        }
        else{
            i++;
        }
    }
    // Write your code here

}

