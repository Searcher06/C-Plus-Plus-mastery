#include <iostream>

using namespace std;

int main()
{
    // The const keyword specifies that a variable's value cannot be changed after it is initialized.
    const string nationality = "Nigerian";
    // nationality = "Japanese"; // Error: cannot assign to a const variable
    cout << "A constant can't be modified";
    return 0;
}