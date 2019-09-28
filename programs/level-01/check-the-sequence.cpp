// You are given S a sequence of n integers i.e. S = s1, s2, ..., sn. Compute if it is possible to split S into two parts : s1, s2, ..., si and si+1, si+2, ….., sn (0 <= i <= n) in such a way that the first part is strictly decreasing while the second is strictly increasing one.
// That is, in the sequence if numbers are decreasing, they can start increase at one point. And once number starts increasing, they cannot decrease at any point further.
// Sequence made up of only increasing numbers or only decreasing numbers is a valid sequence. So in both the cases, print true.
// You just need to print true/false. No need to split the sequence.

#include<iostream>
using namespace std;

int main() {
    int n;
    int a, b, count = 0;
    bool inc = true, dec = true, dec1 = true;

    cin >> n;
    cin >> a;
    
    while(n > 1){
        cin >> b;

        if(a > b && dec){
            a = b;
        } else if(a < b && inc){
            dec = false;
            a = b;
        } else{
            dec1 = false;
        }
        n--;   
    }
    if(inc && (!dec1)){
        cout << "false" << endl;
    }
    else {
        cout << "true" << endl;
    }
}