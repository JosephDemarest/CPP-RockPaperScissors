// Rock Paper Scissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void winner(int, int);
void showChoice(int);
void Game(int);
int compChoice(); 

int main()
{
    cout << "Rock Paper Scissors " << endl;
    cout << "--------------------" << endl;
    const int rock = 1,
              paper = 2,
              scissors = 3; 

    int useronechoice,
        usertwochoice,
        gameType;

    cout << "Weapons. " << endl;
    cout << "For rock, choose 1. " << endl;
    cout << "For paper, choose 2. " << endl;
    cout << "For scissors, choose 3. " << endl;
    cout << "----------------------" << endl;
    cout << "To play vs. another human, press 1." << endl;
    cout << "To play vs. the computer, press 2." << endl;
    cin >> gameType; // user inpout game type
    Game(gameType); // play game depending on type
   

}
// Main game function based on computer or player type
void Game(int type) {
    if (type == 1)
    {
        int useronechoice, usertwochoice;
        cout << "User one, Enter your choice" << endl;
        cin >> useronechoice;
        cout << "User two, Enter your choice" << endl;
        cin >> usertwochoice;
        cout << "Player one chose:";
        showChoice(useronechoice);
        cout << "Player two chose:";
        showChoice(usertwochoice);
        winner(useronechoice, usertwochoice);
    }
    else if (type == 2) {
        int useronechoice;
        cout << "Enter your choice" << endl;
        cin >> useronechoice;
        cout << "Player one chose:";
        showChoice(useronechoice);
        cout << "The computer chose:";
        showChoice(compChoice());
        winner(useronechoice, compChoice());
    }
}

// determine random computer choice between 1 and 3.
int compChoice() {
    int choice = rand() % 3 + 1;
    return choice;
}

// logic for winner
void winner(int useronechoice, int usertwochoice) {
    if (useronechoice == 1 && usertwochoice == 2) {
        cout << "Player Two wins!" << endl;
    }
    else if (useronechoice == 2 && usertwochoice == 3) {
        cout << "Player Two wins!" << endl;
    }
    else if (useronechoice == 3 && usertwochoice == 1) {
        cout << "Player Two wins!" << endl;
    }
    else if (useronechoice == 1 && usertwochoice == 3) {
        cout << "Player One wins!" << endl;
    }
    else if (useronechoice == 2 && usertwochoice == 1) {
        cout << "Player One wins!" << endl;
    }
    else if (useronechoice == 3 && usertwochoice == 2) {
        cout << "Player One wins!" << endl;
    }
    else {
        cout << "Tied!" << endl;
    }
}
// logic to show the choice made. 
void showChoice(int choice) {
    if (choice == 1) {
        cout << "ROCK." << endl;
    }
    else if (choice == 2) {
        cout << "PAPER." << endl;
    }
    else if (choice == 3) {
        cout << "SCISSORS." << endl;
    }
}