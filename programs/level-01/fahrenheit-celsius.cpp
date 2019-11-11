// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W),
// you need to convert all Fahrenheit values from Start to End at the gap of W, into their
// corresponding Celsius values and print the table.

// Sample Input :

// 0 100 20

// Sample Output :

// 0   -17
// 20  -6
// 40  4
// 60  15
// 80  26
// 100 37

#include <iostream>
using namespace std;

int main()
{
    int s, e, w, c;
    cin >> s >> e >> w;
    while (s <= e)
    {
        c = (5 * (s - 32)) / 9;
        cout << s << "\t" << c << endl;
        s = s + w;
    }
}
