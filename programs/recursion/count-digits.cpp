#include <iostream>
using namespace std;

int count(int n) {
    if (n == 0) {
        return 0;
    } else {
        return 1 + count(n/10);
    }
}

int main() {
    int n;

    cout << "Type any integer: ";
    cin >> n;

    cout << "Total digits are: " << count(n) << endl;
}