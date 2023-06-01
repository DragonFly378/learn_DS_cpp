#include <iostream>

using namespace std;

int main() {
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
   
   return 0;
}

// Enum
// enum color { red, green, blue } c;
// c = blue;

// int main()
// {
//     // Defining enum Gender
//     enum Gender { Male, Female };
  
//     // Creating Gender type variable
//     Gender gender = Male;
  
//     switch (gender) {
//     case Male:
//         cout << "Gender is Male";
//         break;
//     case Female:
//         cout << "Gender is Female";
//         break;
//     default:
//         cout << "Value can be Male or Female";
//     }
//     return 0;
// }