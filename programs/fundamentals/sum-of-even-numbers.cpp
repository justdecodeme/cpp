// Given a number N, print sum of all even numbers from 1 to N.

#include <iostream>
using namespace std;

int main() 
{
    int n, i = 1, s = 0;

    cin >> n;

    while(i <= n) {
        if(i % 2 == 0) {
            s += i;
        }
        i += 1;
    }

    cout << s << endl;
}