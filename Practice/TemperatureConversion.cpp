#include <iostream>

using namespace std;

int main()
{
    char unit;
    double temp;
    double result;
    
    cout << "*************** Temperature Conversion ***************"<<"\n";
    cout << "F=Fahrenheit\n";
    cout << "C=Celcius\n";
    cout << "What would you like to convert to ? (F / C): ";
    cin >> unit;
    
    while(unit != 'f' && unit != 'F' && unit != 'c' && unit != 'C'){
        cout << "Please enter a valid conversion unit between F and C : ";
        cin >> unit;
    }

    if(unit == 'f' || unit == 'F'){
        cout << "Enter the temperature in celsius : ";
        while(!(cin >> temp)){
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Please enter a valid temperature in celcius : ";
        }
        result = (1.8 * temp) + 32.0;
        cout << "The temperature in Fahrenheit is : " << result << "F";
    } else if (unit == 'c' || unit == 'C'){
        cout << "Enter the temperature in fahrenheit : ";
        while(!(cin >> temp)){
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Please enter a valid temperature in fahrenheit : ";
        } 
        result = (temp -32) / 100;
        cout << "The temperature in celcius is : " << result << "C";

    }
    return 0;
}