#include <iostream>
using namespace std;

enum Day
{
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};

int main()
{
    // enums = a user-defined data type that consists of paired
    // named-integer constants.
    // GREAT if you have a set of potential options

    Day today = sunday;

    switch (today)
    {
    case sunday:
        cout << "It's sunday!\n";
        break;
    case monday:
        cout << "It's monday!\n";
        break;
    case tuesday:
        cout << "It's tuesday!\n";
        break;
    case wednesday:
        cout << "It's wednesday!\n";
        break;
    case thursday:
        cout << "It's thursday!\n";
        break;
    case friday:
        cout << "It's friday!\n";
        break;
    case saturday:
        cout << "It's saturday!\n";
        break;
    }

    return 0;
}
