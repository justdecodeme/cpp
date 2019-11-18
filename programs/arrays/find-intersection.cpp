// Given two random integer arrays of size m and n, print their intersection. That is, print all the elements that are present in both the given arrays.
// Input arrays can contain duplicate elements.
// Note : Order of elements are not important
// Input format :
// Line 1 : Array 1 Size
// Line 2 : Array 1 elements (separated by space)
// Line 3 : Array 2 Size
// Line 4 : Array 2 elements (separated by space)
// Output format :
// Print intersection elements in different lines
// Constraints :
// 1 <= m, n <= 10^3
// Sample Input 1 :
// 6
// 2 6 8 5 4 3
// 4
// 2 3 4 7 
// Sample Output 1 :
// 2 
// 4 
// 3
// Sample Input 2 :
// 4
// 2 6 1 2
// 5
// 1 2 3 4 2
// Sample Output 2 :
// 2 
// 2
// 1

#include <iostream>
#include<climits>
using namespace std;

void findIntersection(int arr1[], int arr2[], int size1, int size2) {

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                arr2[j] = INT_MIN;
                cout << arr1[i] << endl;
                break;
            }
        }
    }
}

int main() {
    int arr1[100], arr2[100];
    int size1, size2;

    cout << "Enter array size: ";
    cin >> size1;

    cout << "Enter array elements (separated by space): ";

    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter array size: ";
    cin >> size2;

    cout << "Enter array elements (separated by space): ";

    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    cout << "Intersections numbers are: " << endl;
    findIntersection(arr1, arr2, size1, size2);
}