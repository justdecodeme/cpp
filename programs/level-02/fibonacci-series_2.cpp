#include <iostream>
using namespace std;

int fib(int n) 
{ 
    if (n <= 1) { return n; }

    return fib(n-1) + fib(n-2); 
} 

int main() 
{
    int n;

    cout << "Type number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << fib(i) << " ";
    }

}