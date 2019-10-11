#include <iostream>
using namespace std;

int main() {
    // Dynamically create a Two Dimensional Array in C++ 
    // int **twoDArray = new int*[10];

    int m, n;
    
    cin >> m >> n;

    int** p = new int* [m]; // p will hold addresses of row arrays

    for(int i = 0; i < m; i++) {
        // *(p + i) = new int[i]; // is same as below
        p[i] = new int[i]; // creating columns
        // p[i] = new int[i+1]; // Jagged array

        for(int j = 0; j < n; j++) {
            cin >> p[i][j];
        }
    }

    for(int i = 0; i < m; i++) {
        delete [] p[i]; // delete coloumns
    }
    delete [] p; // delete rows
}