// Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.
// Input Format :
// Line 1 : Two integers M and N (separated by space)
// Next M lines : ith row elements (separated by space)
// Output Format :
// Sum of every ith column elements (separated by space)
// Constraints :
// 1 <= M, N <= 10^3
// Sample Input :
// 4 2
// 1 2
// 3 4
// 5 6
// 7 8
// Sample Output :
// 16 20

#include<iostream>
using namespace std;


int main(){
    int a[1000][1000];
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m-1;i++){
        for(int j=0;j<n-1;j++){
            cin>>a[i][j];
        }
    }
    /*int sum=0;
    for(int j=0;j<=n-1;j++){
        for(int i=0;i<=m-1;i++){
            sum=sum+a[i][j];
        }
        cout<<sum<<" ";
        sum=0;
    }*/
    int i,j,sum = 0; 
    for (i = 0; i < n; ++i) { 
        for (j = 0; j < m; ++j) { 
            sum = sum + a[j][i]; 
        } 
        cout<<sum<<" ";
        sum = 0; 
    } 

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}



