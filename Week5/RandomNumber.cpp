/* Instructions:

  Generate random numbers within the following given ranges:
  first number between 43 and 37
  second number between 35 and 93

  Display the sum of two numbers
  Submit five runs of the program below.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
  // Variables
  double num1, num2, sum;
  
  //Generates a seed for a random number using current time
  unsigned seed = time(0);
  srand(seed);  // initializes seed
  
  //Generates first number between 43 and 87
  num1 = 43 + rand() % 45;
  
  //Generates second number between 35 and 93
  num2 = 35 + rand() % 59;
 
  // Sum the two numbers and assign it to sum
   sum = num1 + num2;
   
  //output the sum
  cout << sum << endl; 
  
}
/* Output
123
150
91
135
127
*/