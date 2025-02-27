#include<bits/stdc++.h>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char p, char c);

int main()
{
    char player, computer;
    cout << "Welcome To The Rock Paper Scissors Game\n";
    cout << "***********************\n\n";

    cout << "Choose 'r' for ROCK\n" << "Choose 'p' for PAPER\n" << "Choose 's' for SCISSORS\n";
    player = getUserChoice();
    cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computer's choice: ";
    showChoice(computer);

    cout << "The Winner is: ";
    chooseWinner(player, computer);

return 0;
}

char getUserChoice(){
    char choice;
    cin >> choice;
    return choice;
}

char getComputerChoice(){
    int choice;
    srand(time(0));
    choice = rand()%3 + 1;

    if(choice == 1){
        return 'r';
    }
    else if(choice == 2){
        return 'p';
    }
    else{
        return 's';
    }
}

void showChoice(char choice){
    cout <<  choice << endl;
}

void chooseWinner(char player, char computer){
    switch(player){
        case 'r': 
        if(computer == 'r'){
            cout << "Its a TIE\n";
        }
        else if(computer == 'p'){
            cout << "You LOOSE\n";
        }
        else{
            cout << "You WIN\n";
        }break;

        case 'p': 
        if(computer == 'r'){
            cout << "You WIN\n";
        }
        else if(computer == 'p'){
            cout << "Its a TIE\n";
        }
        else{
            cout << "You LOOSE\n";
        }break;

        case 's': 
        if(computer == 'r'){
            cout << "You Loose\n";
        }
        else if(computer == 'p'){
            cout << "You WIN\n";
        }
        else{
            cout << "Its a TIE\n";
        }break;

        default:
            cout << "Invalid Choice\n";
    }
}