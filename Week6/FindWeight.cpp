/* Psuedocode: FindWeight
(1) Display prompt for user input of mass of an object in kg.
(2) Create constants for if object weight is heavy, light, conversions for
acceleration on earth, acceleration on moon, acceleration on mercury, 
acceleration on venus (m/sect^2).
(3) Prompt user input for mass of object
(4) Check if mass entered is less than zero, invalidate it if so
(5) Calculate weight of object (N): mass(kg) * acceleration due to gravity
(6) If object is heavy or light, print it out next to earth's output
(7) Output the weight of the object on the Earth, Moon, Mercury, and venus.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Constants
    const double IS_HEAVY = 1250;
    const double IS_LIGHT = 20;
    const double EARTH_ACC = 9.807;
    const double MOON_ACC = 1.62;
    const double MERCURY_ACC = 3.7;
    const double VENUS_ACC = 8.87;

    // Variables
    double object, earth, moon, mercury, venus;
 
    // Prompt user for input
    cout << "Please enter the mass of an object in kilograms: ";
    cin >> object;
    cout << endl << endl;

    // Validate if mass entered is correct
    if (object < 0) {
        cout << "Error, invalid mass entered. \nThe entered mass must be greater than 0." << endl;

    } else {

    // Convert user mass from kg to N based on each planets acceleration
    earth = object * EARTH_ACC;
    moon = object * MOON_ACC;
    mercury = object * MERCURY_ACC;
    venus = object * VENUS_ACC;

    // Headings display
    cout << left << setw(16) << "Planet/Satellite\t" << right << setw(14) << "    Weight (N)\n";

    // Set format for weight display
    cout << fixed << setprecision(3) << endl;

    //Display object weight on earth
    cout << left << setw(16) << "Earth           \t" << right << setw(14) << earth;

    if (earth >= IS_HEAVY) {
        cout << "\tThe object is heavy";   
    }
    if (earth <= IS_LIGHT) {
        cout << "\tThe object is light";
    }
    cout << endl;

    //Display object weight on moon, mercury, and venus
    cout << left << setw(16) << "Moon            \t" << right << setw(14) << moon << endl;
    cout << left << setw(16) << "Mercury         \t" << right << setw(14) << mercury << endl;
    cout <<  left << setw(16) << "Venus           \t" << right << setw(14) << venus << endl;
     
    }


}
/* Outputs
Please enter the mass of an object in kilograms: 

Planet/Satellite	    Weight (N)

Earth                 1250.000
Moon                   206.485
Mercury                471.602
Venus                 1130.570

Please enter the mass of an object in kilograms: 

Planet/Satellite	    Weight (N)

Earth                   20.000	The object is light
Moon                     3.304
Mercury                  7.546
Venus                   18.089

Please enter the mass of an object in kilograms: 

Planet/Satellite	    Weight (N)

Earth                  534.481
Moon                    88.290
Mercury                201.650
Venus                  483.415

*/