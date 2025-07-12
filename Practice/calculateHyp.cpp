#include <iostream>
#include <cmath>

using namespace std;
// Calculating the hypotenuse of a right triangle
// Formula C = root of a^2 + b^2
typedef double sides;
int main()
{
    sides sideA;
    sides sideB;
    double hypotenuse;

    cout << "Enter the value of side A : ";
    cin >> sideA;
    
    cout << "Enter the value of side B : ";
    cin >> sideB;

    hypotenuse = sqrt(pow(sideA,2) + pow(sideB,2));

    cout << "The hypotenuse of the right triangle is : " << hypotenuse;

    return 0;
}

