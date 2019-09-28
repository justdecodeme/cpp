#include<iostream>
using namespace std;

int main() {
    int n, i = 1, squareRoot;

    cout << "Enter number: ";
    cin >> n;

    while(i * i < n) {
        i++;
    }

    if((i * i) == n) {
        squareRoot = i;
    } else {
        squareRoot = i - 1;
    }

    cout << "Square root is: " << squareRoot << endl;
}

