/*Psuedocode
(1) Declare named constants type double for the prices of the individual items and the 
tax rate: chili dogs = 8.5, corn dogs = 7, chips, 2.5, soft drinks = 4.5, water = 4. tax rate = 0.065
(2) Declare variables of type int to hold the quantity of each item sold.
(3) Declare variables of type double for calculations of taxable, nontaxable, tax amount, total.
(4) prompt user and read each item separately.
IMPORTANT: All of the items but the water bottles are taxable at a rate of 6.5 percent. 
(5) Calculate taxable by multiplying each items amnt with its price and adding them together
(except for the water bottle price and amount since this item is not taxable).
(6) Calculate tax amount by multiplying value gotten from taxble with tax rate.
(7) Calculate notaxable by multiplying water bottle amount with water bottle price.
(8) Calculate total by adding taxable + nontaxable + tax amount together.
(9) Format details: The labels Taxable:, Tax amount:, etc. must be displayed left 
justified in a field fifteen characters wide. Display the $ in a field exactly wide 
enough to fit the character. Right justify the amounts in a field ten characters wide.
Make sure to endl.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //Declare contant variables of type double for price
    const double CHILI_DOG_PRICE = 8.5, CORN_DOG_PRICE = 7.0, CHIPS_PRICE = 2.5,
                 SOFT_DRINKS_PRICE = 4.5, WATER_BOTTLE_PRICE = 4.0;

    //Declare constant variable of type double for tax rate
    const double TAX_RATE = 0.065;

    //Declare int variables for user input for item amounts/quantity
    int chiliDogAmnt, cornDogAmnt, chipsAmnt, softDrinksAmnt, WaterBottleAmnt;

    //Declare double variables for calculations
    double taxable, taxAmnt, nonTaxable, total;

    //Prompt user for each item's input and read in separately
    cout << "How many chili dogs were sold? ";
    cin >> chiliDogAmnt;
    cout << "How many corn dogs were sold? ";
    cin >> cornDogAmnt;
    cout << "How many bags of chips were sold? ";
    cin >> chipsAmnt;
    cout << "How many soft drinks were sold? ";
    cin >> softDrinksAmnt;
    cout << "How many bottles of water were sold? " << endl;
    cin >> WaterBottleAmnt;

    //Calculate taxable products by omitting water bottle 
    taxable = ((chiliDogAmnt * CHILI_DOG_PRICE) + (cornDogAmnt * CORN_DOG_PRICE) + 
              (chipsAmnt * CHIPS_PRICE) + (softDrinksAmnt * SOFT_DRINKS_PRICE));

    //Calculate tax amount
    taxAmnt = taxable * TAX_RATE;
   
    //Calculate nontaxable products 
    nonTaxable = WaterBottleAmnt * WATER_BOTTLE_PRICE;

    //Calculate total
    total = taxable + taxAmnt + nonTaxable;
   

   //Formating output: headings left justified w/ setw(15), amounts right justified w/ setw(10)
    cout << fixed << setprecision(2); //Fixed to 2 places after decimal
    cout << left << setw(15) << "Taxable:" << right << setw(1) << "$" << setw(10) << taxable << endl;
    cout << left << setw(15) << "Tax amount:" << right << setw(1) << "$" << setw(10) << taxAmnt << endl;
    cout << left << setw(15) << "Non-taxable:" << right << setw(1) << "$" << setw(10) << nonTaxable << endl;
    cout << left << setw(15) << "Total:" << right << setw(1) << "$" << setw(10) << total << endl;
return 0;
}

/*Output
How many chili dogs were sold? 297
How many corn dogs were sold? 514
How many bags of chips were sold? 205
How many soft drinks were sold? 801
How many bottles of water were sold? 1036

Taxable:       $  10239.50
Tax amount:    $    665.57
Non-taxable:   $   4144.00
Total:         $  15049.07
*/