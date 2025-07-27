#include <iostream>
using namespace std;

void walk(int steps);
int main()
{
    // Recursion = a programming technique where a function
    //              invokes itself from within
    //              break a complex concept into a repeatable single steps
    walk(3);
    return 0;
}
void walk(int steps)
{
    if (steps > 0)
    {
        cout << "You take a step!\n";
        walk(steps - 1);
    }
}