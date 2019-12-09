/* Roman Styrku
   ITCS 3112 001
   Module 2 Milestone 2
   Due: 11:59pm 9/7/2018
*/

#include <iostream>
#include "gamefunctions.h"
using namespace std;

int main(){

    //Creating the Board for the Game
    string gameboard[9] = {"1","2","3","4","5","6","7","8","9"};

    //Welcome messages for the players
    cout << "Hello welcome to Tic Tac Toe" << endl << "Player 1 will play as 'X' and Player 2 will play as 'O'" << endl <<"Press Enter to Start the Game" << endl;
    cin.ignore();

    //Loop where the game is played. Ends when either someone has won or the game is a draw.
    while ((checkIfWinner(gameboard) == "none") && (checkIfDraw(gameboard) != "yes")){
        displayBoard(gameboard);
        personMove(gameboard, "X");
        displayBoard(gameboard);
        if ((checkIfWinner(gameboard) == "X") || (checkIfDraw(gameboard) == "yes")){
            break;
            }
        else {
            person2Move(gameboard, "O");
            }
        }

    //Depending on the final outcome prints the result of the game.
    if (checkIfWinner(gameboard) == "X"){
        cout << "Congratulations PLAYER 1, You have Won!" << endl << "Sorry PLAYER 2 Better Luck Next Time!";
        }
    else if (checkIfWinner(gameboard) == "X"){
        cout << "Congratulations PLAYER 2, You have Won!" << endl << "Sorry PLAYER 1 Better Luck Next Time!";
        }
    else{
        cout << "Great Job for Both of You, You Held Your Opponent To a DRAW!";
        }
    cout << endl;
}
