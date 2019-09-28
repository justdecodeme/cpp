// Given a two dimensional n*m array, print the array in a sine wave order. i.e. print the first column top to bottom, next column bottom to top and so on.
// Note : Print the elements separated by space.
// Input format :
// n, m, array elements (separated by space)
// Sample Input :
// 3 4 1  2  3  4 5  6  7  8 9 10 11 12
// Sample Output :
// 1 5 9 10 6 2 3 7 11 12 8 4

#include <iostream>
using namespace std;

void wavePrint(int input[][1000], int row, int col){
    for(int j=0;j<col;j++){
        if(j%2==0){
            int i=0;
            while(i<row){
            cout<<input[i][j]<<" ";
            i++;
            }
        }
        else{
            int i=row-1;
            while(i>=0){
                cout<<input[i][j]<<" ";
                i--;
            }
        }
        
    }
	/* Don't write main().
	* Don't read input, it is passed as function argument.
	* Print output and don't return it.
	* Taking input is handled automatically.
	*/

}


