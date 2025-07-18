#include <iostream>
using namespace std;

int main()
{

    string foods[5];
    int size = sizeof(foods) / sizeof(string);
    string temp;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a food you  #" << i + 1 << " or 'q' to quit" << " >> ";
        getline(cin, temp);
        if (temp == "q")
        {
            break;
        }
        else
        {
            foods[i] = temp;
        }
    }

    cout << "You like the following food:\n";
    for (int i = 0; !foods[i].empty(); i++)
    {
        cout << foods[i] << "\n";
    }
    return 0;
}
