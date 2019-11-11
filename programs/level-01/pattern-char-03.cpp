// E
// DE
// CDE
// BCDE
// ABCDE

#include <iostream>
using namespace std;

int main() 
{
    int n, r = 1, c;
    char ch;

    cin >> n;

    while(r <= n) {
        c = 1;
        ch = 'A' + n - r - 1;
        while(c <= r) {
            ch += 1;
            cout << ch;
            c++;
        }
        
        cout << endl;
        r += 1;
    }
}