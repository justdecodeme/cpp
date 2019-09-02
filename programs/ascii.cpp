#include <iostream>
using namespace std;
int main()
{
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