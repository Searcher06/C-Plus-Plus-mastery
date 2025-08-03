#include <iostream>
using namespace std;

class Stove
{
private:
    int temperature = 0;

public:
    // Declaring a getter
    int getTemperature()
    {
        return temperature;
    }
    void setTemperature(int temp)
    {
        if (temp <= 0)
        {
            this->temperature = 0;
        }
        else if (temp >= 10)
        {
            this->temperature = 10;
        }
        else
        {
            this->temperature = temp;
        }
    }
};

int main()
{
    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITABLE
    Stove stove;
    stove.setTemperature(6);
    cout << "The temperature setting is: " << stove.getTemperature();
    return 0;
}
