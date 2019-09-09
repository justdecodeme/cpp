// *
// **
// ***
// ****
// *****
// ******

#include <iostream>
using namespace std;

int main() 
{
    int n, r = 1, c;

    cin >> n;

    while(r <= n) {
        c = 1;
        while(c <= r) {
            cout << "*";
            c += 1;
        }
        cout << endl;
        r += 1;
    }
}