In this project, you will implement the tic-tac-toe game for a 3 by 3 square.If you are not familiar with this game (really?) play it a few times at this link (Links to an external site.) and familiarize yourself. 

The game will be played by two players (players A and B). All output are to the console. Follow these guidelines:

Relevant Concepts/Sections:  Arrays, Functions and Function prototypes, Input/Output; refer to the "Preparation" section of this module for reviewing these programming concepts.

Marks:Assume characters to use for  the two players, for instance  X and O; an unoccupied square has a default mark.
Board Drawing/Input: Draw the board (ensure its nicely formatted as a square grid) after each move and make sure to prompt the user with enough information on what to input; if the user tries to use an occupied space, then he/she effectively loses his/her move (no redoes!); any illegal characters input also results in loss of the move (your implementation will check for all this).
Program Structure: You will design your program so that the main function will be its own file (say main.cpp) and all remaining functions will be in a separate file (say tictactoe.cpp). All function prototype declarations (definitions of the functions will be in a header file (tictactoe.h). The header file will be included in main.cpp, as it will be calling these functions.
 Functions: Each major task in the project will be implemented in its own function, These include drawing the board, checking to see if the game is complete, receiving input and board updates.
Output: The program should output if the game was won by you, the computer or if it ended in a tie and show the final state of the board.
Modularity/Documentation: Your program should be modular and should use functions to accomplish each task. For documentation, take a look at the link (Links to an external site.) provided in the Reading Materials section of the module. Each function should be documented and function and variable names should be meaningful and use properly indented code.
Tasks/Approach

You will solve this problem in two stages (corresponding to the two milestones). In the first stage, you will do the following:

Identify the major tasks involved in designing the solution. Each task becomes a function. The main function will only make calls to these functions (sub-tasks).
Identify any data structures needed to keep the data required for this problem.
Identify the parameters that will be passed or returned from each function
Organize the structure of the program - C++ source files, include (.h) files, what function or declarations goes into each, etc.
Draw a diagram  or flowchart or equivalent means to illustrate  the control flow  between the main  function and the individual functions to indicate your logic.
At this point, you should have a good idea of how the whole project comes together in terms of the logic
Assumptions:

The program can terminate after it plays a single game. Additional play will require re-executing the program