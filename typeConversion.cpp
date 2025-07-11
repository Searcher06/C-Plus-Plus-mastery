#include <iostream>
using namespace std;

int main() {
    // Implicit type conversion (automatic)
    int i = 42;
    double d = i; // int to double (no data loss)
    cout << "Implicit conversion (int to double): " << d << endl;

    double pi = 3.14159;
    int intPi = pi; // double to int (fractional part lost)
    cout << "Implicit conversion (double to int): " << intPi << endl;

    // Explicit type conversion (casting)
    double x = 9.99;
    int y = (int)x; // C-style cast
    cout << "Explicit conversion (double to int, C-style): " << y << endl;

    int z = static_cast<int>(x); // C++ style cast
    cout << "Explicit conversion (double to int, static_cast): " << z << endl;

    // Converting char to int
    char ch = 'A';
    int ascii = ch;
    cout << "Implicit conversion (char to int): " << ascii << endl;

    // Converting int to char
    int num = 66;
    char letter = static_cast<char>(num);
    cout << "Explicit conversion (int to char): " << letter << endl;

    return 0;
}