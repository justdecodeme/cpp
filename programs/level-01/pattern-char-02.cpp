// A
// BC
// CDE
// DEFG

#include <iostream>
using namespace std;

int main() 
{
    int n, r = 1, c;
    char ch;

    cin >> n;

    while(r <= n) {
        c = 1;
        while(c <= r) {
            ch = 'A' + r + c - 2;
            cout << ch;
            c++;
        }
        
        cout << endl;
        r += 1;
    }
}