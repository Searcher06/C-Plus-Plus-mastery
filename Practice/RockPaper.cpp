#include <iostream>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player,char computer);
int main()
{   
    char player;
    char computer;

    player = getUserChoice();

    cout << "Your choice : ";

    showChoice(player);

    computer = getComputerChoice();

    cout << "Computer choice : ";

    showChoice(computer);

    chooseWinner(player,computer);

    return 0;
}

char getUserChoice(){
    char player;
    do{
       cout << "*************** Rock Paper Game ***************\n";
       cout << "Choose one of the following >> \n";
       cout << "r for Rock\n";
       cout << "p for Paper\n";
       cout << "s for Scissors\n";
       cout << ">> ";
       cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
   
    return player;
}
char getComputerChoice(){
    char computer;
    srand(time(0));
    int num = (rand() % 3) + 1;
    switch(num){
        case 1:
            computer = 'r';
            break;
        case 2:
            computer = 'p';
            break;
        case 3:
            computer = 's';
            break;

    }
    return computer;
}
void showChoice(char choice){
    switch(choice){
        case 'r': cout << "Rock\n";
            break;
        case 'p': cout << "Paper\n";
            break;
        case 's': cout << "Scissors\n";
            break;
    }
}
void chooseWinner(char player,char computer){
    switch(player){
        case 'r':   if(computer == 'r'){
                        cout << "It's a tie \n";
                    }else if(computer == 'p'){
                        cout << "You lose \n";
                    }else{
                        cout << "You win\n";
                    }
                    break;
        case 'p':   if(computer == 'r'){
                        cout << "You win!\n";
                    }else if(computer == 'p'){
                        cout << "It's a tie \n";
                    }else{
                        cout << "You lose\n";
                    }
                    break;
        case 's':   if(computer == 'r'){
                        cout << "You lose  \n";
                    }else if(computer == 'p'){
                        cout << "You win \n";
                    }else{
                        cout << "It's a tie\n";
                    }
                    break;



    }
}