#include<iostream>
using namespace std;
void swap (char *x, char *y) 
{
  char *t = x;
  x = y;
  y = t;
}

int main()
{
   char *x = "ab";
   char *y = "cd";
   char *t;
   swap(x, y);
   cout<<x << " "<<y;
   t = x;
   x = y;
   y = t; 
   cout<<" "<<x<< " "<<y;
   return 0;
}

// output: ab cd cd ab