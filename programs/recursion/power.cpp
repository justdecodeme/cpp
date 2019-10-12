#include <iostream>
using namespace std;

int power(int x, int n) {
    if(n == 1) {
        return x; 
    } 

    return x * power(x, n-1);
}

int main() {
    int x, n;

    cout << "Two integers x and n (separated by space)" << endl;
    cin >> x >> n;

    cout << power(x, n) << endl;
}