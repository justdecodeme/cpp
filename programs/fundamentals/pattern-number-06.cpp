// 55555
// 44444
// 33333
// 22222
// 11111

#include <iostream>
using namespace std;

int main() 
{
    int n, r = 1, c = 1;

    cin >> n;

    while(r <= n) {

        c = 1;
        while(c <= n) {
            cout << n-r+1;
            c += 1;
        }
        
        cout << endl;
        r += 1;
    }
}