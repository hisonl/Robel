#include <iostream>
using namespace std;

int main() {
    int a = 0, c = 0;
    signed char b = -1;
    cout << "a: " << a << endl;                     //   0
    cout << "int: " << sizeof(a) << endl;           //   4 : int

    cout << "b: " << b << endl;                     //   ?
    cout << "signed char: " << sizeof(b) << endl;   //   1 : signed char
    
    b = (unsigned char)b; 
    cout << "b: " << b << endl;                     // 255 
    cout << "unsigned char: " << sizeof(b) << endl; //   4 : unsigned char

    a = b;
    cout << "a: " << a << endl;                     // 255
    cout << "int: " << sizeof(a) << endl;           //   4 : int
}
