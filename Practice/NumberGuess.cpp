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
    int score = 0;
    int computerScore = 0;
    int trial = 3;
    string Continue;

    while(trial >= 1){
        srand(time(0));
        // Generating random number between 1 - 6;
        computer = (rand() % 6) + 1;

        while(true){
            cout << "Choose a random number between 1 to 6: ";
            getline(cin,playerString);

            stringstream ss(playerString);
            if(ss >> player && ss.eof() && player >= 1 && player <= 6 ){
               break;
            }
            cout << "Invalid input. Try again\n";
        }

        if(computer == player){
            score ++;
            cout << "You guessed the right number!";
        } else {
            computerScore ++;
            cout << "Failed to guess the right number ! \n";
        }
        cout << "Your choice : " << player << '\n';
        cout << "Computer : " << computer << '\n' << '\n';

        cout << "*************** Scores *************** \n" << '\n';
        cout << "Your score : " << score << endl;
        cout << "computer : " << computerScore << '\n' << endl;
        trial--;
    }
    if(score > computerScore){
        cout << "Congratulations you won!\n";
    }else{
        cout << "Computer won, you failed! \n";
    }
    

    return 0;
}