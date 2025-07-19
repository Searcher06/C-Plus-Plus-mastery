#include <iostream>
using namespace std;

// 2D Arrays
int main()
{
    string cars[][3] = {
        {"Mustang", "Escape", "F-150"},
        {"Corvette", "Equinox", "Silverado"},
        {"Challenger", "Durango", "Ram 1500"},
    };
    int size = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < sizeof(cars[i]) / sizeof(cars[i][0]); j++)
        {
            cout << cars[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
