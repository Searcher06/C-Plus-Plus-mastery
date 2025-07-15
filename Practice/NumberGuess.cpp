#include <iostream>
#include <ctime>
#include <sstream>
using namespace std;

int main()
{
    cout << "************* Number Guess *************\n";
    int computer;
    string playerString;
    int player;

    srand(time(0));
    // Generating random number between 1 - 6;
    computer = (rand() % 6) + 1;

    while(true){
        cout << "Choose a random number between 1 to 6: ";
        getline(cin,playerString);

        stringstream ss(playerString);
        if(ss >> player && ss.eof() && player > 1 && player < 6 ){
           break;
        }
        cout << "Invalid input. Try again\n";
    }
    cout << "Your choice : " << player;
    cout << "Computer : " << computer;

    return 0;
}