#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int rows;
    int columns;
    string input1;
    string input2;
    string symbol;
    while(true){
         cout << "Enter a valid integer value for rows: ";
         getline(cin,input1);

         stringstream ss(input1);
         if(ss >> rows && ss.eof()){
            break;
         }
         cout << "Invalid input. Try again.\n";
    }

    while(true){
         cout << "Enter a valid integer value for columns: ";
         getline(cin,input2);

         stringstream ss(input2);
         if(ss >> columns && ss.eof()){
            break;
         }
         cout << "Invalid input. Try again.\n";
    }

    cout << "Enter a symbol to use for the rectangle: ";
    cin >> symbol;

    while(symbol.empty()){
        cout << "Please enter a valid symbol : ";
        cin >> symbol;
    }
    

    for(int i = 1; i <= rows;i++){
        for(int j = 1; j <= columns; j++){
            cout << symbol << " ";
        }
        cout << "\n";
    }

    return 0;
}