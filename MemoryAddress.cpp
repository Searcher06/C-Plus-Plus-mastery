#include <iostream>

using namespace std;

int main()
{
    // memory address = a location in memory where data is stored
    // a memory address can be accessed with & (address-of operator)
    string name = "Ahmad";
    int age = 18;
    bool student = true;

    cout << &name << '\n';
    cout << &age << '\n';
    cout << &student << '\n';

    return 0;
}