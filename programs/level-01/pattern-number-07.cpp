// 54321
// 54321
// 54321
// 54321
// 54321

#include <iostream>
using namespace std;

int main() 
{
    int n, r = 1, c = 1;

    cin >> n;

    while(r <= n) {

        c = 1;
        while(c <= n) {
            cout << n-c+1;
            c += 1;
        }
        
        cout << endl;
        r += 1;
    }
}