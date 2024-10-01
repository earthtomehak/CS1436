/* Psuedocode
1) Create constants for scissors (0), rock(1), paper(2)
2) Generate a random number (0-2) that shows the computer
choice: 0 for scissor, 1 for rock, and 2 for paper.
3) Ask user to input their choice: 0 for scissor, 1 for rock,
2 for paper
4) Check if user's input is valid within 0 - 2
5) Compare user's choice with computer choice to decide
if it is a win, loss, draw.
6) Output the results.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // Constants for scissor, rock, and paper
    const int SCISSOR = 0;
    const int ROCK = 1;
    const int PAPER = 2;

    // Random number for computer's choice (0, 1, or 2)
    srand(time(0)); // random seed
    int minimum = 0, maximum = 2, range = 3;
    int computerGeneratedNum = rand() % range;

    // User input variable
    int userNum;

    // Prompt user for choice
    cout << "Enter your choice: scissor (0), rock (1), paper (2): ";
    cin >> userNum;

    // Check if the user choice is valid (num between minimum and maximum)
    if (userNum < minimum || userNum > maximum) {
        cout << "Invalid input. Please enter a number between 0 and 2.\n";
    } 
    else {
        //Switch statement to look at different cases based on user choice
        switch (userNum) {
            case SCISSOR:
                if (computerGeneratedNum == SCISSOR) {
                    cout << "The computer is scissor. You are scissor too. It's a draw!\n";
                } 
                else if (computerGeneratedNum == ROCK) {
                    cout << "The computer is rock. You are scissor. You lose!\n";
                } 
                else {
                    cout << "The computer is paper. You are scissor. You win!\n";
                }
                break;

            case ROCK:
                if (computerGeneratedNum == ROCK) {
                    cout << "The computer is rock. You are rock too. It's a draw!\n";
                } 
                else if (computerGeneratedNum == PAPER) {
                    cout << "The computer is paper. You are rock. You lose!\n";
                } 
                else {
                    cout << "The computer is scissor. You are rock. You win!\n";
                }
                break;

            case PAPER:
                if (computerGeneratedNum == PAPER) {
                    cout << "The computer is paper. You are paper too. It's a draw!\n";
                } 
                else if (computerGeneratedNum == SCISSOR) {
                    cout << "The computer is scissor. You are paper. You lose!\n";
                } 
                else {
                    cout << "The computer is rock. You are paper. You win!\n";
                }
                break;
        }
    }

    return 0;
}
/* Expected Outputs
Choose one of the following: 
scissor (0), rock (1), paper (2): 0
The computer is scissor. You are scissor too. It is a draw!

Choose one of the following: 
scissor (0), rock (1), paper (2): 1
The computer is scissor. You are rock. You won

Choose one of the following: 
scissor (0), rock (1), paper (2): 2
The computer is paper. You are paper too. It is a draw!

Choose one of the following: 
scissor (0), rock (1), paper (2): 4
Enter a number between 0 and 2

Choose one of the following: 
scissor (0), rock (1), paper (2): 1
The computer is paper. You are rock. You lost!

Choose one of the following: 
scissor (0), rock (1), paper (2): 1
The computer is rock. You are paper. You won!

Choose one of the following: 
scissor (0), rock (1), paper (2): 4
Enter a number between 0 and 2: 6
Enter a number between 0 and 2: 2
The computer is paper. You are paper too. It is a draw
*/