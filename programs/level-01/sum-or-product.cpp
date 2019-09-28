// Write a program that asks the user for a number N and a choice C. And then give him the possibility to choose between 
// computing the sum and computing the product of 1 ,..., N.
// If user enters C is equal to -
//  1 : Print sum of 1 to N numbers
//  2 : Print product of 1 to N numbers
//  Any other number : print -1

#include<iostream>
using namespace std;

int main() {
    int n, choice, i, sum=0, pro=1;
    
    cout << "Enter value of n: " << endl;
    cin>>n;

    cout << "Select choice: " << endl;
    cout << "1. Sum" << endl;
    cout << "2. Product" << endl;
    cin >> choice;

    if(choice == 1){
        for(i = 1; i <= n; i++) {
            sum = sum + i;
        }
        cout<<sum;
    } else if(choice == 2){
        for(i = 1; i <= n; i++){
            pro = pro * i;
        }
        cout<<pro;
    } else{
        cout<<"Choice incorrect!";
    }
}
