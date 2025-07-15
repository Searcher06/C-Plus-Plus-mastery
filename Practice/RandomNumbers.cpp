#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // pseudo-random = Not truly random (but close)
    srand(time(NULL));

    int num = (rand() % 20) + 1;

    cout << num;

    return 0;
}