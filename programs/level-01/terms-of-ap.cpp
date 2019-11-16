// Write a program to print first x terms of the series 3N + 2 which are 
// not multiples of 4.
// N varies from 1 to 1000.

#include<iostream>
using namespace std;

int main() {
    int n, x, count = 0;
    
    cout << "Type value of x: " << endl;
    cin>>x;

    for(n = 1; n <= 1000; n++){
        int c = 3 * n + 2;

        if(c % 4 != 0){
            cout<< c << " ";
            count++;

            if(count == x) {
                break;
            }
        }
    }
}
