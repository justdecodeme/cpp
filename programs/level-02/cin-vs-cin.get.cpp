#include <iostream>
using namespace std;

int main() {
    char c;
    int count = 0;

    // cin >> c; // don't consider space, tab, enter
    c = cin.get(); // consider space, tab, enter

    while(c != '.') {
        count++;
        c = cin.get();
    }
    cout << count << endl;
}