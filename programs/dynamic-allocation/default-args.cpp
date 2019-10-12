#include <iostream>
using namespace std;

int sum(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d;
}

int main(){
    cout << sum(1, 2, 3, 4) << endl; // 10
    cout << sum(1, 2, 3) << endl; // 6
    cout << sum(1, 2) << endl; // 3
}