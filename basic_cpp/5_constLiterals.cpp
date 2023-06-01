// Literals

    // --> int
        // 85         // decimal
        // 0213       // octal
        // 0x4b       // hexadecimal
        // 30         // int
        // 30u        // unsigned int
        // 30l        // long
        // 30ul       // unsigned long

    // --> float
        // 3.14159       // Legal
        // 314159E-5L    // Legal
        // 510E          // Illegal: incomplete exponent
        // 210f          // Illegal: no decimal or exponent
        // .e55          // Illegal: missing integer or fraction

    // --> Boolean
        // true             // representing true condition
        // false            // representing false condition

    // --> Char
        // \\ meaning	\ character
        // \' meaning	' character
        // \" meaning	" character
        // \? meaning	? character
        // \a meaning	Alert or bell
        // \b meaning	Backspace
        // \f meaning	Form feed
        // \n meaning	Newline
        // \r meaning	Carriage return
        // \t meaning	Horizontal tab
        // \v meaning	Vertical tab
        // \ooo     meaning	   Octal number of one to three digits
        // \xhh ... meaning	   Hexadecimal number of one or more digits

// const keyword
// --> Constants refer to fixed values that the program may not alter and they are called literals.
// --> There are two simple ways in C++ to define constants −

// Using #define preprocessor.
// Using const keyword.

// #define
    // #include <iostream>
    // using namespace std;

    // #define LENGTH 10   
    // #define WIDTH  5
    // #define NEWLINE '\n'

    // int main() {
    // int area;  
    
    // area = LENGTH * WIDTH;
    // cout << area;
    // cout << NEWLINE;
    // return 0;
    // }


// const
#include <iostream>
using namespace std;

int main() {
   const int  LENGTH = 10;
   const int  WIDTH  = 5;
   const char NEWLINE = '\n';
   int area;  
   
   area = LENGTH * WIDTH;
   cout << area;
   cout << NEWLINE;
   return 0;
}