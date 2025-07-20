#include <iostream>
using namespace std;

// Luhn Algorithm
// 1. Double every second digit from right to left
//    if double number is 2 digits split them
// 2. Add all single digit from step 1
// 3. Add all odd numbered digits form right to left
// 4. Sum results from steps 2 & 3
// 5. If step 4 is divisible by 10, # is valid

int main()
{
    string creditCardNumber;
    string doubledNums;
    int sumOfDoubledNums = 0;
    int sumofOdd = 0;
    int total = 0;

    cout << "Enter a credit card number : ";
    cin >> creditCardNumber;
    for (int i = creditCardNumber.length() - 2; i <= creditCardNumber.length(); i -= 2)
    {
        int num = creditCardNumber[i] - '0';
        num = num * 2;
        if (num > 9)
        {
            num = num - 9;
        }
        sumOfDoubledNums += num;
    }

    for (int i = creditCardNumber.length() - 1; i <= creditCardNumber.length(); i -= 2)
    {
        int num = creditCardNumber[i] - '0';
        sumofOdd += num;
    }

    total = sumOfDoubledNums + sumofOdd;

    if (total % 10 == 0 && total != 0)
    {
        cout << "Valid credit card number!";
    }
    else
    {
        cout << "Invalid credit card number!";
    }
}