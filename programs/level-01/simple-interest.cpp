#include <iostream>
using namespace std;

int main() 
{
    float p, r, t, si;

    cout << "Principle: $";
    cin >> p;
    cout << "Rate: ";
    cin >> r;
    cout << "Time: ";
    cin >> t;

    si = (p * r * t) / 100;

    cout << "Simple Interest: $" << si << endl;
 }