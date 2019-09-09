// Write a program to input an integer N and print the sum of all its 
// even digits and sum of all its odd digits separately.

// Digits means numbers not the places. That is, if the given integer 
// is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.

#include <iostream>
using namespace std;

int main() 
{
    int N, n, sumEven, sumOdd;

    cin >> N;

    sumEven = sumOdd = 0;
    
    while(N != 0) {
        n = N % 10;
        cout << n << endl;

        if(n % 2 == 0) {
            sumEven += n;
        } else {
            sumOdd += n;
        }
        
        N = N / 10;
    } 

    cout << "Sum off Even digits: " << sumEven << endl;
    cout << "Sum off Odd digits: " << sumOdd << endl;
}