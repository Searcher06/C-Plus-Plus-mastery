#include <iostream>
using namespace std;

struct Car
{
    string model;
    int year;
    string color;
};
void printCar(Car &car);
int main()
{
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2025;
    car1.color = "White";

    car1.model = "Corvette";
    car1.year = 2024;
    car1.color = "Red";

    cout << "Address of car1 outside a function : " << &car1 << endl;
    printCar(car1);
    return 0;
}
void printCar(Car &car)
{
    cout << "Address of car1 inside a function : " << &car << endl;
    cout << car.model << "\n";
    cout << car.year << "\n";
    cout << car.color << "\n";
}
