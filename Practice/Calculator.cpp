#include <iostream>

using namespace std;

int main()
{
    char Operator;
    double num1;
    double num2;
    double result;
    char Continue = 'y';

    while(Continue == 'y' || Continue == 'Y'){
        cout << "Enter an operator ( + , - , / , x ) : ";
        cin >> Operator;

        while(Operator != '+' && Operator != '-' && Operator != '/' && Operator != 'x'  && Operator != 'X'){
            cout << "Please enter a valid operator ( + , - , / , x ) : ";
            cin >> Operator;
        }

        cout << "Enter the first number : ";
        while(!(cin >> num1)){
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Please enter a valid number : ";
        }

        cout << "Enter the second number : ";
        while(!(cin >> num2)){
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Please enter a valid number : ";
        }


        while(Operator == '/' && num2 == 0){
            cout << "Can't be devided by zero change the second number : ";
            while(!(cin >> num2)){
                cin.clear();
                cin.ignore(1000,'\n');
                cout << "Please enter a valid number : ";
            }
        }

        switch(Operator){
            case '+':
                result = num1 + num2;
                break;
            case 'x':
                result = num1 * num2;
                break;
            case 'X':
                result = num1 * num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '/':
                result = num1 / num2;
                break;
        }
        cout << "The result of " << num1 << " " << Operator << " " << num2 <<  " is " << result << endl;
        cout << "Do you want to calculate again (y/n) : ";
        cin >> Continue;
    }

    return 0;
}
// CLI calculator using C++