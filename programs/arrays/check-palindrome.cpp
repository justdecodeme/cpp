// Given a String s, check it its palindrome. Return true if string is palindrome, else return false.
// Palindrome strings are those, where string s and its reverse is exactly same.
// Input Format :
//  String S
// Output Format :
// "true" if S is palindrome, else "false"
// Sample Input 1 :
// abcdcba
// Sample Output 1 :
// true 


bool checkPalindrome(char str[]){
    int length=0;
    bool a=true;
    for(int i=0;str[i]!='\0';i++){
        length++;
    }
    for(int i=0,j=length-1;j>1;i++,j--){
        if(str[i]!=str[j]){
            a=false;
            return a;
        }
    }
    return a;

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */


}

