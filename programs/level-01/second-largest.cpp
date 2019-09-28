#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int num, large = 0, slarge = 0, i = 0, count;
    const int INT_MIN = 50;

    cin >> count;

    while (i < count)
    {
        cin >> num;

        if (i == 0)
        {
            large = num;
        }
        else if (num > large)
        {
            slarge = large;
            large = num;
        }
        else if (num > slarge && num != large)
        {
            slarge = num;
        }

        i++;
    }

    if(count <=1) {
        slarge = -pow(2, 31);
    }

    cout << slarge;
}