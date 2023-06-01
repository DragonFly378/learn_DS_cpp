#include <iostream>
using namespace std;

// Local Variables
    // int main () {
    //     // declaration
    //     int a, b, c;

    //     // initialize
    //     a = 10;
    //     b = 12;
    //     c = 6;

    //     cout << a + b;

    //     return 0;
    // }


// Global variable declaration:
    // int g;
    
    // int main () {
    // // Local variable declaration:
    // int a, b;
    
    // // actual initialization
    // a = 10;
    // b = 20;
    // g = a + b;
    
    // cout << g;
    
    // return 0;
    // }


// Both variable (global and local)

    // Global variable declaration:
    int g = 20;

    int add(int x, int y){

        cout<< "nilai g adalah " << g << endl;
        cout<< "hasil penjumlahan: " << x + y << endl;

        return x + y;
    }
    
    int main () {
    // Local variable declaration:
    int g = 10;
    int num = 3;

    add(g, num);
    cout << g;

    
    return 0;
    }