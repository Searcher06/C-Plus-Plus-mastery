#include <iostream>
using namespace std;

// Pointers = variable that stores a memory address of another variable
// sometimes it's easier to work with an address

// & address-of operator
// * dereference operator

int main()
{
    string name = "Ahmad";
    int age = 18;
    string freePizzas[5] = {
        "pizza1",
        "pizza2",
        "pizza3",
        "pizza4",
        "pizza5",
    };

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas;

    cout << pName << endl;
    cout << pAge << endl;
    cout << pFreePizzas << endl;

    return 0;
}
