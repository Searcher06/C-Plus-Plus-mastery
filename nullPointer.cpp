#include <iostream>
using namespace std;

int main()
{
    /*
    null value = a special value that means something has no value.
    when a pointer is holding a nulll value,
    that pointer is not pointing at anything (null pointer)

    nullptr = keyword that represents a null pointer literal

    nullptr are helpful when determinig if an address was
    successfully assigned to a pointer
    */

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr)
    {
        cout << "address was not assigned\n";
    }
    else
    {
        cout << "Address was assigned\n";
        cout << "Here is the address : " << pointer;
    }
    return 0;
}
