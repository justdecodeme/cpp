//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; // should be odd number
    int n1 = (n + 1) / 2, n2 = n / 2;
    int i = 1, l = n2;
    while (i <= n1)
    {
        int j = 1, k = 1;
        while (j <= (n1 - i))
        {
            cout << " ";
            j++;
        }
        while (k <= (2 * i - 1))
        {
            cout << "*";
            k++;
        }
        cout << endl;
        i++;
    }
    while (l >= 1)
    {
        int j = 0, k = 1;
        while (j <= (n2 - l))
        {
            cout << " ";
            j++;
        }
        while (k <= (2 * l - 1))
        {
            cout << "*";
            k++;
        }
        cout << endl;
        l--;
    }
}
