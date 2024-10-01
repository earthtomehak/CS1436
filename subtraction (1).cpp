/* Program for first grader subtractions.
1) Randomly generate two single digit numbers integers for num1 and num2 
2) Swap num1 with num2 if it's value is less than that of num2
2) Ask user to input difference of two numbers  
3) Check if the difference inputed by user is correct.
4) Base the output on the following condition:
If the user inputs wrong answer, print a message, “Your answer is wrong. 
The correct answer is ” with the correct answer. Otherwise print “Your answer is correct.”

Hint:
1. Check if number1 < number2, otherwise swap them
2.Ask the user  what is “number1 – number2”?
3.Print the message according to the user input

*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
  
  //variables
  int num1, num2, temp, answer, difference;
  
  //Generates two random numbers from 0-10
  srand(time(0));
  num1 = 0 + rand() % 11;
  num2 = 0 + rand() % 11;
 
 //Swap if num1 is less than num2 
 if (num1 < num2) {
   temp = num1;
   num1 = num2;
   num2 = temp;
 }
 
 //get difference of the two numbers
 difference = num1 - num2;
 
 //Asking for user input of answer
 cout << "What is " << num1 << " - " << num2 << "?" << endl;
 cin >> answer;
 

 //Check if the user input matches the correct answer. Message is printed according to user input.
 if(difference == answer) {
   cout << "Your answer correct";
 }
 else {
   cout << "Your answer is wrong. The correct answer is " << difference << endl;
 }
 
  
}
/*
What is 10 - 9?
1
Your answer is correct.
What is 8 - 2?
4
Your answer is wrong. The correct answer is 6

*/