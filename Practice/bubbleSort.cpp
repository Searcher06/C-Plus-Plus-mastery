#include <iostream>
using namespace std;

int main()
{

    int numbers[] = {1, 4, 3, 5, 7, 8, 2, 9, 10, 6};
    int size = sizeof(numbers) / sizeof(int);

    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            int left = numbers[i];
            int right = numbers[i + 1];
            if (left > right)
            {
                numbers[i + 1] = left;
                numbers[i] = right;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
