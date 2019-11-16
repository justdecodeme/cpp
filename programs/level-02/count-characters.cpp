// Write a program to count and print the total number of characters (lowercase 
// english alphabets only), digits (0 to 9) and white spaces (single space, 
// tab i.e. '\t' and newline i.e. '\n') entered till '$'.
// That is, input will be a stream of characters and you need to consider 
// all the characters which are entered till '$'.

// Print count of characters, count of digits and count of white spaces 
// respectively (separated by space).

// Input Format :

// A stream of characters terminated by '$'

// Output Format :

// 3 integers i.e. count_of_characters count_of_digits count_of_whitespaces (separated by space)

// Sample Input :

// abc def4 5$

// Sample Output :

// 6 2 2
#include <iostream>
using namespace std;

int main() {
    char c;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    c = cin.get();

    while(c != '.') {
        if(c >= 97 && c <= 122) {
            count1++;
        } else if(c >= 48 && c <= 57) {
            count2++;
        } else {
            count3++;
        }

        c = cin.get();
    }
    cout << "Small characters: " << count1 << endl;
    cout << "Digits: " << count2 << endl;
    cout << "Space, Tab, Enter: " << count3 << endl;
}