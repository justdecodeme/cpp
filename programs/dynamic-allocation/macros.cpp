#include <iostream>
using namespace std;

#define PI 3.14
#define MULTIPLY(a, b) a*b
#define SQUARE(x) x*x

int main(){
    int r = 4;

    cout << "Area: " << PI*r*r << endl; // Area: 50.24
    
    cout << MULTIPLY(2+3, 3+5) << endl; // 16
    // Solution Description
    // "MULTIPLY(a, b)" will be replaced by "a*b" in code. So, MULTIPLY(2+3, 3+5) will be replaced by 2+3*3+5. And according to operator precedence, multiply operator (*) has higher precedence than plus operator (+). 
    //  So, 3*3 will be evaluated first. Hence expression will become :
    //  2+9+5 = 16 

    cout << 36 / SQUARE(6) << endl; // 36: 36/6*6 = 6*6 = 36   
}