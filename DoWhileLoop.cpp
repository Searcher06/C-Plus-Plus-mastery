#include <iostream>

using namespace std;

// do-while loop
int main()
{
    int number;
    do{
        cout << "Enter a positive number : ";
        cin >> number;
    } while (number < 0);
   
    cout << "The number is : " << number;
    
    return 0;
}