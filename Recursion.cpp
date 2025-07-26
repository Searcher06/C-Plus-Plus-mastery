#include <iostream>
using namespace std;

void walk(int steps);
int main()
{
    // Recursion = a programming technique where a function
    //              invokes itself from within
    //              break a complex concept into a repeatable single steps
    walk(8);
    return 0;
}
void walk(int steps)
{
    for (int i = 0; i < steps; i++)
    {
        cout << "You take a step!\n";
    }
}