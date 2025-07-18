#include <iostream>
using namespace std;

int findElement(int array[], int size, int myNum);
int main()
{
    int numbers[20];
    int size = sizeof(numbers) / sizeof(int);
    int myNum;
    int index;
    for (int i = 0; i < 20; i++)
    {
        numbers[i] = i + 1;
    }

    cout << "Enter element to search for >> ";
    cin >> myNum;
    index = findElement(numbers, size, myNum);

    if (index != -1)
    {
        cout << "The element is at position " << index;
    }
    else
    {
        cout << "The element is not in the arrat ";
    }
    return 0;
}
int findElement(int array[], int size, int myNum)
{
    for (int i = 0; i < size; i++)
    {
        if (myNum == array[i])
        {
            return i;
        }
    }
    return -1;
}
