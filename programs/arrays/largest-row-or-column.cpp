// Given an NxM 2D array, you need to find out which row or column has largest sum (sum of its elements) overall amongst all rows and columns.
// Input Format :
//  Line 1 : 2 integers N and M respectively, separated by space 
//  Line 2: Single line having N*M elements entered in row wise manner, each separated by space.
// Output Format :
//  If row sum is maximum then - "row" row_num max_sum
//  If column sum is maximum then - "column" col_num max_sum
// Note : If there are more than one rows/columns with maximum sum consider the row/column that comes first. And if ith row and jth column has same sum (which is largest), consider the ith row as answer.
// Sample Input 1 :
// 2 2 
// 1 1 1 1
// Sample Output 1 :
// row 0 2
// Sample Input 2 :
// 3 3
// 3 6 9 1 4 7 2 8 9
// Sample Output 2 :
// column 2 25


#include<climits>
void findLargest(int arr[][1000], int row, int col){
    int max=INT_MIN,max1=INT_MIN,a=0,b=0;
    for(int i=0;i<row;i++){
        int sum=0,j=0;
        while(j<col){
            sum=sum+arr[i][j];
            j++;
        }
        if(sum>max){
            max=sum;
            a=i;
        }
    }
    for(int j=0;j<col;j++){
        int sum1=0,i=0;
        while(i<row){
            sum1=sum1+arr[i][j];
            i++;
        }
        if(sum1>max1){
            max1=sum1;
            b=j;
        }
    }
    if(max>=max1){
        cout<<"row"<<" "<<a<<" "<<max;
        
    }
    else{
        cout<<"column"<<" "<<b<<" "<<max1;
    }


  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   * Print output as specified in the question.
   */


}

