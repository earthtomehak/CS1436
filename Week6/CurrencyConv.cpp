/*Program that converts us dollars to other dollars
(1)Declare constants for conversion from US Dollars, Canadian Dollars,
Pesos, GBP. 
1 US dollar is 1.35 Canadian Dollars, 18.36 Mexican Pesos, and 0.829 British Pounds
(2) Declare double variables for final conversion of cad, pesos, and gdp
(3) Calculate each of the conversions by multiplying amount in US Dollars
by the constants.
(4) Format the heading of currency create spaces with set precision of 12, right justified.
(5) Format the amounts with a fixed setprecison of 2, set width of 12, right justified.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
  //Declare constants for conversion of 1 us dollar to other 
  const double US_CANADIAN_DOLLARS = 1.35;
  const double US_MEXICAN_PESOS = 18.36;
  const double US_BRITISH_POUNDS = 0.829;
  
  //Declare variable for user input
  double amountInUsDollars;
  
  //Declare Variables used after final conversion
  double cad;
  double pesos;
  double gbp;

  //Display for user input
  cout << "Enter an amount in US dollars: " << endl;
  cin >> amountInUsDollars;
  
  //Calculate Canadian Dollar Conversion
  cad = amountInUsDollars * US_CANADIAN_DOLLARS; 

  //Calculate Mexican Pesos Conversion
  pesos = amountInUsDollars * US_MEXICAN_PESOS; 
  
  //Calculate British Pouds Conversion
  gbp = amountInUsDollars * US_BRITISH_POUNDS; 
  
  
  
  //Currency headings and spaces, right justified, with set width of 12
  cout << right << setw(12) << "     Dollars\t";
  cout << right << setw(12) << "         CAD\t";
  cout << right << setw(12) << "       Pesos\t";
  cout << right << setw(12) << "GBP" << endl;
  
  //Currency format for amount and display, right justified, set width of 12
  cout << fixed << setprecision(2);
  cout << right << setw(12) << amountInUsDollars << "\t";
  cout << right << setw(12) << cad << "\t";
  cout << right << setw(12) << pesos << "\t";
  cout << right << setw(12) << gbp << endl;
  
}
/*Output
Enter an amount in US dollars: 59.27

     Dollars             CAD           Pesos             GBP
       59.27           80.01         1088.20           49.13

*/
