/* Psuedocode: BagelDoWhile
(1) Declare constants for the cost od each item
(2) Initialize all totals
(3) Do while loop - quit of choice F
Display the menu
Validate the choices
Switch - to calculate the total for all the choices
(4) Calculate to total of all
(5) Display the total to the customer 
*/
#include <iostream>
#include <iomanip>
using namespace std;

const float EVERY_BAGEL_COST = 1.99;
const float BLUE_BAGEL_COST = 1.99;
const float GARLIC_BAGEL_COST = 1.99;
const float CREAM_CHEESE_COST = 2.99;
const float COFFEE_COST = 3.99;

int main()
{  
   //Variables for user input
    char choice; 
    int cnt;
    
    //Initialize totals for each item
    double total_charges = 0.0;
    double charges_every = 0.0;
    double charges_blueberry = 0.0;
    double charges_garlic = 0.0;
    double charges_cream = 0.0;
    double charges_coffee = 0.0;
   
   //Formatting output 
    cout << fixed << showpoint << setprecision(2);
   
      //Menu display of choices
    do {
        cout << "\nPlease pick one item from the menu:" << endl;
        cout << "Enter A for Everything Bagel" << endl;
        cout << "Enter B for Blueberry Bagel" << endl;
        cout << "Enter C for Garlic Bagel" << endl;
        cout << "Enter D for Cream Cheese" << endl;
        cout << "Enter E for coffee" << endl;
        cout << "Enter F for quit" << endl << endl;
        cout << "Please enter your choice of food: ";

      //Input user choice
        cin >> choice;

        // Input validation
        while (choice != 'A' && choice != 'a' && choice != 'B' && choice != 'b' &&
               choice != 'C' && choice != 'c' && choice != 'D' && choice != 'd' &&
               choice != 'E' && choice != 'e' && choice != 'F' && choice != 'f') {
            cout << "Enter a choice between A to F" << endl;
            cin >> choice;
        }
      //Calculate charges based on inputted count and cost
        switch (choice) {
            case 'A':
            case 'a':
                cout << "How many Everything Bagels would you like? ";
                cin >> cnt;
                charges_every += cnt * EVERY_BAGEL_COST;
                break;
            case 'B':
            case 'b':
                cout << "How many Blueberry Bagels would you like? ";
                cin >> cnt;
                charges_blueberry += cnt * BLUE_BAGEL_COST;
                break;
            case 'C':
            case 'c':
                cout << "How many Garlic Bagels would you like? ";
                cin >> cnt;
                charges_garlic += cnt * GARLIC_BAGEL_COST;
                break;
            case 'D':
            case 'd':
                cout << "How many servings of Cream Cheese would you like? ";
                cin >> cnt;
                charges_cream += cnt * CREAM_CHEESE_COST;
                break;
            case 'E':
            case 'e':
                cout << "How many Coffees would you like? ";
                cin >> cnt;
                charges_coffee += cnt * COFFEE_COST;
                break;
            case 'F':
            case 'f':
                cout << "Thank you for shopping! Calculating your total...\n";
                break;
        }
      
    } while (!(choice == 'F' || choice == 'f'));
    
    //Calculate total charges and output them after exiting the loop
    total_charges = charges_every + charges_blueberry + charges_garlic + charges_cream + charges_coffee;
    
    cout << "\nTotal charges are: $" << total_charges << endl;
    cout << "charges_every: " << charges_every << endl;
    cout << "charges_blueberry: " << charges_blueberry << endl;
    cout << "charges_garlic: " << charges_garlic << endl;
    cout << "charges_cream: " << charges_cream << endl;
    cout << "charges_coffee: " << charges_coffee << endl;

    return 0;
}