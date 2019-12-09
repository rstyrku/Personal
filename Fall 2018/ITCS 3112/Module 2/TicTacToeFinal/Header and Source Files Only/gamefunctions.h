#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Function to check if the spot selected it available or not
bool spotIsTaken(string arr[9], int spot){
    if (arr[spot - 1] == "X" || arr[spot -1] == "O"){
        return true;
        }
    else {
        return false;
        }
}

// Function that creates the users move in the game
void personMove(string arr[9], string let){
    cout << "PLAYER 1! YOU ARE PLAYING AS 'X'"<<endl;
    // Prompts and selects the spot.
    cout << endl << "Enter the spot you want to select,"<< endl<< "WARNING !!! The wrong input will cause you to lose your turn !!!: ";
    string input;
    cin >> input;

    //Converts the spot to a int
    std::string text = input;
    int spot;
    std::istringstream iss (text);
    iss >> spot;

    // Prints error message if spot if taken
    if (spotIsTaken(arr, spot) == true){
        cout << endl << "Sorry you chose a spot that was already taken, you have lost your turn.";
    }

    else {

        // If not taken prompts what the user would like to input into the spot.
        cout << endl << "What letter would you like to put into the spot, "<< endl<< "WARNING !!! The wrong input will cause you to lose your turn !!!: ";
        string input2;
        cin >> input2;

        //If the user wants to input the wrong letter they lose their turn.
        if  (input2 != let){
            cout << endl << "You have entered the wrong input, SORRY you lost your turn.";
            }

        //If everything goes good the spot is assigned the letter.
        else {
            arr[spot -1] = let;
        }
    }
}

void person2Move(string arr[9], string let){
    cout << "PLAYER 2, YOU ARE PLAYING AS 'O'" << endl;
    // Prompts and selects the spot.
    cout << endl << "Enter the spot you want to select, "<< endl<< "WARNING !!! The wrong input will cause you to lose your turn !!!: ";
    string input;
    cin >> input;

    //Converts the spot to a int
    std::string text = input;
    int spot;
    std::istringstream iss (text);
    iss >> spot;

    // Prints error message if spot if taken
    if (spotIsTaken(arr, spot) == true){
        cout << endl << "Sorry you chose a spot that was already taken, you have lost your turn.";
    }

    else {

        // If not taken prompts what the user would like to input into the spot.
        cout << endl << "What letter would you like to put into the spot, "<< endl<< "WARNING !!! The wrong input will cause you to lose your turn !!!: ";
        string input2;
        cin >> input2;

        //If the user wants to input the wrong letter they lose their turn.
        if  (input2 != let){
            cout << endl << "You have entered the wrong input SORRY you lost your turn.";
            }

        //If everything goes good the spot is assigned the letter.
        else {
            arr[spot -1] = let;
        }
    }
}

// Function to check if there is a winner yet
string checkIfWinner(string arr[9]){

    // If statements to check if 'X' has won.
    if ((arr[0] == "X") && (arr[1] == "X") && (arr[2] == "X")){
        return "X";
        }

    else if ((arr[3] == "X") && (arr[4] == "X") &&(arr[5] == "X")){
        return "X";
        }

    else if ((arr[6] == "X") && (arr[7] == "X") && (arr[8] == "X")){
        return "X";
        }

    else if ((arr[0] == "X") && (arr[3] == "X") && (arr[6] == "X")){
        return "X";
        }

    else if ((arr[1] == "X") && (arr[4] == "X") && (arr[7] == "X")){
        return "X";
        }

    else if ((arr[2] == "X") && (arr[5] == "X") && (arr[8] == "X")){
        return "X";
        }

    else if ((arr[0] == "X") && (arr[4] == "X") &&(arr[8] == "X")){
        return "X";
        }

    else if ((arr[6] == "X") && (arr[4] == "X") && (arr[2] == "X")){
        return "X";
        }

    // If statements to check if 'O' has won.
    if ((arr[0] == "O") && (arr[1] == "O") && (arr[2] == "O")){
        return "O";
        }

    else if ((arr[3] == "O") && (arr[4] == "O") &&(arr[5] == "O")){
        return "O";
        }

    else if ((arr[6] == "O") && (arr[7] == "O") && (arr[8] == "O")){
        return "O";
        }

    else if ((arr[0] == "O") && (arr[3] == "O") && (arr[6] == "O")){
        return "O";
        }

    else if ((arr[1] == "O") && (arr[4] == "O") && (arr[7] == "O")){
        return "X";
        }

    else if ((arr[2] == "O") && (arr[5] == "O") && (arr[8] == "O")){
        return "O";
        }

    else if ((arr[0] == "O") && (arr[4] == "O") &&(arr[8] == "O")){
        return "O";
        }

    else if ((arr[6] == "O") && (arr[4] == "O") && (arr[2] == "O")){
        return "O";
        }

    // Else no one has won yet
    else {
        return "none";
        }
    }

// Function to check if draw
string checkIfDraw (string arr[9]){
    string draw = "no";
    for (int i = 0; i < 9; i++){
        if ((arr[i] == "X") || (arr[i] == "O")){
            draw = "yes";
        }
        else {
            draw = "no";
            break;
            }
    }
    return draw;
    }



// Function to display the board
void displayBoard(string arr[9]){
    cout << endl << "     |     |     " << endl;
	cout << "  " << arr[0] << "  |  " << arr[1] << "  |  " << arr[2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << arr[3] << "  |  " << arr[4] << "  |  " << arr[5] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << arr[6] << "  |  " << arr[7] << "  |  " << arr[8] << endl;

	cout << "     |     |     " << endl << endl;



}
