#include <iostream>
using namespace std;

// Dynamic Memory
int main()
{
    /*
    Dynamic memory = Memory that is allocated after the program
    is already compiled and running
    use the 'new' operator to allocate
    memory in the heap rather than the stack

    useful when we don't know how much memory
    we will need. Makes our program more flexible.,
    especially when accepting user input.
    */
    string *pShoppingList = NULL;
    int size;

    cout << "How many items will like to purchase ? : ";
    cin >> size;

    pShoppingList = new string[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the name of the item you want to purchase #" << i + 1 << " >> ";
        cin >> pShoppingList[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << ". " << pShoppingList[i] << "\n";
    }

    delete[] pShoppingList;

    return 0;
}
