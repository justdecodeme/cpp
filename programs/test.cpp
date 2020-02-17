#include <iostream>
using namespace std;

int main() {
   int n = 5;

   for(int i = 0; i < n; i++){
      cout << "outer: " << i << ' ' << n << endl;
      for(; i < n; i++){
         cout << "inner" << i << ' ' << n << endl;
      }
   }
}