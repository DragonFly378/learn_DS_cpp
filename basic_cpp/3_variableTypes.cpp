// Declaration only
    // int    i, j, k;
    // char   c, ch;
    // float  f, salary;
    // double d;

// Declaration with value
    // extern int d = 3, f = 5;    // declaration of d and f. 
    // int d = 3, f = 5;           // definition and initializing d and f. 
    // byte z = 22;                // definition and initializes z. 
    // char x = 'x';               // the variable x has the value 'x'.

#include <iostream>
using namespace std;

// Variable declaration:
extern int a, b;
extern int c;
extern float f;
  
int main () {
   // Variable definition:
   int a, b;
   int c;
   float f;
 
   // actual initialization
   a = 10;
   b = 20;
   c = a + b;
 
   cout << c << endl ;

   f = 70.0/3.0;
   cout << f << endl ;
 
   return 0;
}