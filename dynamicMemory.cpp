#include <iostream>
using namespace std;

// Dynamic Memory
int main()
{
    /*
    Dynamic memory = Memory that is allocated after the program
    is already compiled and running
    user the 'new' operator to allocate
    memory in the heap rather than the stack

    useful when we don't know how much memory
    we will need. Makes our program more flexible.,
    especially when accepting user input.
    */

    int *pNum = NULL;

    pNum = new int;

    // *pNum = 21;

    cout << "Address: " << pNum << '\n';
    cout << "Value: " << *pNum << '\n';

    return 0;
}
