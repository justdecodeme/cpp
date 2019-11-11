// Write a program to find x to the power n (i.e. x^n). 
// Take x and n from the user. You need to print the answer.

// Sample Input :

//  3 4

// Sample Output :

// 81


#include <iostream>
using namespace std;

int main() 
{
    int x, n, i = 1, result = 1;

    cout << "Enter number: ";
    cin >> x;

    cout << "Enter power: ";
    cin >> n;

    while(i <= n) {
        result *= x;
        i++;
    }

    cout << x << "^" << n << ": " << result << endl;
}