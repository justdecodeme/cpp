#include <iostream>
using namespace std;
int main()
{
    // a - 97, z - 122
    // A - 65, Z - 90
    // 0 - 48
    
    int choice; 
    int n;
    char c;

    cout << "Ascii to Char: Type 1" << endl;
    cout << "Char to Ascii: Type 2" << endl;

    cin >> choice;

    if(choice == 1) {
        cout << "Type char: "; cin >> c;
        n = c;
        cout << "Ascii value: " << n;
    } else if(choice == 2) {
        cout << "Type Ascii: "; cin >> n;
        c = n;
        cout << "Char value: " << c;
    }
}