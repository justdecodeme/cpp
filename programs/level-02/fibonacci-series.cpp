#include <iostream>
using namespace std;

int main() 
{
    int n;
    int a = 1, b = 1, c = 1;
    cout << "Type number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i != 1 && i != 2) {
            a = b;
            b = c;
            c = a + b;
        }
        
        cout << c << " "; // 1 1 2 3 5 8 13 21 34 55 ...
    }
}