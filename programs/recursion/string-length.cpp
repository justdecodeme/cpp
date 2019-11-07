#include <iostream>
using namespace std;

int length(char s[]) {
    if(s[0] == '\0') 
        return 0;
    
    return (1 + length(s + 1));
}

int main() {
    char str[100];

    cout << "Print string: ";
    cin >> str;

    int l = length(str);

    cout << "Total string lenght: " << l << endl;
}