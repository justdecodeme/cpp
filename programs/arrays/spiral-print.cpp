// Given an N*M 2D array, print it in spiral form. That is, first you need to print the 1st row, then last column, then last row and then first column and so on.
// Print every element only once.
// Input format :
// Line 1 : N and M, No. of rows & No. of columns (separated by space) followed by N*M  elements in row wise fashion.
// Sample Input :
//  4 4 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
// Sample Output :
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 

#include <iostream>
using namespace std;

void spiralPrint(int input[][1000], int row, int col){
    int rs=0,cs=0,re=row-1,ce=col-1,count=0;
    while(count<(row*col)){
        for(int i=cs;i<=ce;i++){
        cout<<input[rs][i]<<" ";
        count++;
    }
    rs=rs+1;
    for(int i=rs;i<=re;i++){
        cout<<input[i][ce]<<" ";
        count++;
    }
    ce=ce-1;
    for(int i=ce;i>=cs;i--){
        cout<<input[re][i]<<" ";
        count++;
    }
    re=re-1;
    for(int i=re;i>=rs;i--){
        cout<<input[i][cs]<<" ";
        count++;
    }
    cs=cs+1;
    }
	/* Don't write main().
	* Don't read input, it is passed as function argument.
	* Print output and don't return it.
	* Taking input is handled automatically.
	*/

}


