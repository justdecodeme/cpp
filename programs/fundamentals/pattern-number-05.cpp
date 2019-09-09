// 11111
// 22222
// 33333
// 44444
// 55555

#include <iostream>
using namespace std;

int main() 
{
    int n, r = 1, c = 1;

    cin >> n;

    while(r <= n) {

        c = 1;
        while(c <= n) {
            cout << r;
            c += 1;
        }
        
        cout << endl;
        r += 1;
    }
}