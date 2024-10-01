/*Psuedocode
(1) Generate a random two digit lottery number using rand()
(2) Promput user for input of a number
(3) If the user input matches the lottery in exact order, the award is $10,000.
(4) If the user input matches the lottery(ex 63 and 36), the award is $3,000.
(5) If one digit in the user input matches a digit in the lottery(ex 83 and 39), 
 the award is $1,000.
(6) Else no award

*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    //Generate random number, set lotteryNum to any random value between 10 - 99
    srand(time(NULL));
    int lotteryNum = rand() % 90 + 10;
    cout << lotteryNum << endl; //Just checking what lotteryNum is generated

    //Assign int value to user input, prompt user for input
    int userNum;
    cout << "Enter a two digit Number: " << endl;
    cin >> userNum;
    
    // Check if user number is equal to lottery number to give them reward
    if (userNum == lotteryNum) {
        cout << "Congratulations you won: $10,000." << endl;
    
    }

    /*Checking if the first and last, or last and first numbers from user
    lottery are equal */
    else if (userNum % 10 == lotteryNum /10|| userNum / 10 == lotteryNum % 10) {
        cout <<  "Congratulations you won: $3,000." << endl;
    }

    /*Checking to see if the first or last number of user input is a match to 
    the first and last number of lottery number */
    else if ((userNum / 10 == lotteryNum / 10) || (userNum / 10 == lotteryNum % 10) || 
    (userNum % 10 == lotteryNum / 10) || (userNum % 10 == lotteryNum % 10)) {
        cout << "Congratulations you won: $1,000." << endl;
    }

    //No award for no match
    else {
        cout << "No Award" << endl;
    }

    return 0;
}
/*Output
No Award
No Award
Congratulations you won: $1,000. 
Congratualtions you won: $3,000.
Congratulations you won: $10,000.
*/