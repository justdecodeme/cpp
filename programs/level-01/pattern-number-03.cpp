//   1
//  23
// 456

#include <iostream>
using namespace std;

int main() 
{
    int n, r = 1, c, N = 1;

    cin >> n;

    while(r <= n) {

        c = 1;
        while(c <= n-r) {
            cout << " ";
            c++;
        }

        c = 1;
        while(c <= r) {
            cout << N;
            c += 1;
            N += 1;
        }
        
        cout << endl;
        r += 1;
    }
}