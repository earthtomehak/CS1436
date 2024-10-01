/* Psuedocode: IC12_RepeatAdditions_Loops

1) Initialize the counters (cnt, correctCnt, wrongCnt)
2) Declare variables of type int for random number 1 and random number 2
3) Use srand(time(NULL)) to generate different random numbers each run
4) Loop 10 times using (cnt < 10) to ask 10 questions. Increment
the counters throughout the loop
4a) Within the loop create an if statement to check if 
user answer is correct: if wrong, increment wrong cnt and tell user
correct answer. If correct, increment correct cnt and move on.
5) After the 10 questions print how many were correct and how
many were wrong.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

// Variables to store counts and random numbers
int cnt = 0, randNum1, randNum2, userInput; 

// Counters for correct and wrong answers
int wrongCnt = 0, correctCnt = 0;

// Initialize seed for random number generation
srand(time(NULL)); 

    while (cnt < 10) {
        
        // Generate random numbers
        randNum1 = rand() % 51; // num b/w 0 and 50
        randNum2 = rand() % 101; // num b/w 0 and 100

        // Ask the user the math question and prompt for input
        cout << "What is " << randNum1 << " + " << randNum2 << "? ";
        cin >> userInput;
        cout << endl;

        // Calculate the correct sum
        int sum = randNum1 + randNum2;
        
        //Check if the users answer is correct
        if (userInput != sum) {
            cout << "Wrong answer.\nYour correct answer is " << sum << "." << endl;
            wrongCnt++; // Increment wrong answer count

        } else {
            correctCnt++; // Increment correct answer coumnt
        }

       cnt++; // Increment count
    }
    
    //Display the final counts after loop ends
    cout << "You have answered " << correctCnt << " questions correctly." << endl;
    return 0;
    
}
/* Expected Output
What is 30 + 79? 109
What is 4 + 81? 85
What is 23 + 50? 73
What is 48 + 39? 34
Wrong answer.
Your correct answer is 87

What is 25 + 54? 79
What is 6 + 16? 22
What is 29 + 47? 65
Wrong answer.
Your correct answer is 76

What is 41 + 67? 34
Wrong answer.
Your correct answer is 108

What is 10 + 63? 73
What is 42 + 86? 128
Your have answered  7 questions correctly.
*/