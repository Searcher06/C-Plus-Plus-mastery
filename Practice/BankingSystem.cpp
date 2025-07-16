#include <iostream>
#include <iomanip>

using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);
int main()
{
    int choice;
    double balance = 0;

    do {
        cout << "******************* Banking system *******************\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice : ";
        
        cin >> choice;
        
        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance = balance + deposit();
                showBalance(balance);
                break;
            case 3:
                balance = balance - withdraw(balance);
                showBalance(balance);
                break;
            case 4: 
                cout << "Thanks for visiting!";
                break;
            default:
                cout << "Invalid choice \n";
        
        }
    } while(choice != 4);
    

    return 0;
}

void showBalance(double balance){
    cout << "Your balance is: $" << setprecision(2) << fixed << balance  << endl;
}
double deposit(){
    double amount = 0;
    cout << "Enter amount to be deposited : ";
    cin >> amount;
    if(amount > 0){
        return amount;
    } else {
        cout << "That's not a valid amount! \n";
        return 0;
    }
}
double withdraw(double balance){
    double amount = 0;
    cout << "Enter amount to be withdrawn: ";
    cin >> amount;
    if(amount > balance){
        cout << "Insufficient funds! \nBro you know you don't have such amount why! \n";
        return 0;
    }else if(amount < 1){
        cout << "Invalid amount \n";
        return 0;
    }
    else{
        return amount;
    }
    
}