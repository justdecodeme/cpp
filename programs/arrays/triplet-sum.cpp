// Given a random integer array and a number x. Find and print the triplets of elements in the array which sum to x.
// While printing a triplet, print the smallest element first.
// That is, if a valid triplet is (6, 5, 10) print "5 6 10". There is no constraint that out of 5 triplets which have to be printed on 1st line. You can print triplets in any order, just be careful about the order of elements in a triplet.
// Input format :
// Line 1 : Integer N (Array Size)
// Line 2 : Array elements (separated by space)
// Line 3 : Integer x
// Output format :
// Line 1 : Triplet 1 elements (separated by space)
// Line 2 : Triplet 3 elements (separated by space)
// Line 3 : and so on
// Constraints :
// 1 <= N <= 1000
// 1 <= x <= 100
// Sample Input:
// 7
// 1 2 3 4 5 6 7 
// 12
// Sample Output ;
// 1 4 7
// 1 5 6
// 2 3 7
// 2 4 6
// 3 4 5

// arr - input array
// size - size of array
// x - sum of triplets

void FindTriplet(int arr[], int size, int x) {
    int i=0;
    for(i;i<size-2;i++){
        for(int b=i+1;b<size-1;b++){
            for(int c=b+1;c<size;c++){
                if((arr[i]+arr[b]+arr[c])==x){
                    if(arr[i]<arr[b]&&arr[b]<arr[c]){
                            cout<<arr[i]<<" "<<arr[b]<<" "<<arr[c]<<endl;
                    }
                    else if(arr[b]<arr[i]&&arr[i]<arr[c]){
                            cout<<arr[b]<<" "<<arr[i]<<" "<<arr[c]<<endl;
                    }
                    else if(arr[c]<arr[b]&&arr[b]<arr[i]){
                            cout<<arr[c]<<" "<<arr[b]<<" "<<arr[i]<<endl;
                    }
                    else if(arr[c]<arr[i]&&arr[i]<arr[b]){
                            cout<<arr[c]<<" "<<arr[i]<<" "<<arr[b]<<endl;
                    }
                    else if(arr[b]<arr[c]&&arr[c]<arr[i]){
                            cout<<arr[b]<<" "<<arr[c]<<" "<<arr[i]<<endl;
                    }
                    else if(arr[i]<arr[c]&&arr[c]<arr[b]){
                            cout<<arr[i]<<" "<<arr[c]<<" "<<arr[b]<<endl;
                    }
                }
            }
            
        }
    }
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */

}

