/** 
LAB #5: PART 1
    Sound Travel: a menu driven program that determines 
    how fast sound travels a specified distance through 
    wood, steel, water, or air as selected by the user.
*/

/* Algorithm
1) Declare constants for wood, steel, water, air speed in ft/sec.
    wood(1) = 12,631.23, steel(2) = 10,614.81, water(3) = 4,714.57, 
    air(4) = 1,125.33. 
2) Get user input for medium: wood(1), steel(2), water(3), air(4).
3) Validate user input. If invalid medium, prompt user to 
    “Please run the program again.”
4) Get user input for distance traveled
5) Validate user input for distance: When distance is greater than 0,
    calculate and display the seconds it takes the sound to travel 
    through the selected medium.
    Or create error message to user that "the distance must be greater than zero”.
6) Display the outputs
*/
#include <iostream>
#include <iomanip> // Include iomanip to format the output
using namespace std;

int main()
{ 
    // Constants
    const int WOOD = 1;
    const int STEEL = 2;
    const int WATER = 3;
    const int AIR = 4;

    const double WOOD_SPEED = 12631.23;
    const double STEEL_SPEED = 10614.81;
    const double WATER_SPEED = 4714.57;
    const double AIR_SPEED = 1125.33;

    // Variables
    unsigned int choiceOfMedium;
    double distanceTraveled;
    double soundTravel;

    // Heading Display
    cout << "\tTime for Sound to Travel through a Medium given Distance\n" << endl;
    cout << "1 - Wood\n";
    cout << "2 - Steel\n";
    cout << "3 - Water\n";
    cout << "4 - Air\n\n";

    //Prompt user to input choice of medium

    cout << "Enter the number of the medium: ";
    cin >> choiceOfMedium;
    cout << endl;

    //Validate user input of medium
    if(!(choiceOfMedium >= WOOD && choiceOfMedium <= AIR)) {
        cout << "Error, invalid entry!\n";
        cout << "Please run the program again." << endl;
    }
    else {

        cout << "Enter the distance to travel (in feet): ";
        cin >> distanceTraveled;
        cout << endl;

        if(distanceTraveled > 0) {

            switch(choiceOfMedium) {
                case WOOD:
                cout << fixed << setprecision(4);
                soundTravel = distanceTraveled / WOOD_SPEED;
                cout << "In wood it will take " << soundTravel;
                cout << fixed << setprecision(2);
                cout << " seconds to travel " << distanceTraveled << " feet.\n";
                break;

                case STEEL:
                cout << fixed << setprecision(4);
                soundTravel = distanceTraveled / STEEL_SPEED;
                cout << "In steel it will take " << soundTravel;
                cout << fixed << setprecision(2);
                cout << " seconds to travel " << distanceTraveled << " feet.\n";
                break;

                case WATER:
                cout << fixed << setprecision(4);
                soundTravel = distanceTraveled / WATER_SPEED;
                cout << "In water it will take " << soundTravel;
                cout << fixed << setprecision(2);
                cout << " seconds to travel " << distanceTraveled << " feet.\n";
                break;

                case AIR:
                cout << fixed << setprecision(4);
                soundTravel = distanceTraveled / AIR_SPEED;
                cout << "In air it will take " << soundTravel;
                cout << fixed << setprecision(2);
                cout << " seconds to travel " << distanceTraveled << " feet.\n";
                break;  
            }
        } else {
            cout << "Error, the distance must be greater than zero." << endl;
        }

    }

    return 0;
}
/* Expected Output
    Time for Sound to Travel through a Medium given Distance

1 - Wood
2 - Steel
3 - Water
4 - Air

Enter the number of the medium: 1
Enter the distance to travel (in feet): 58
In wood it will take 0.0046 seconds to travel 58.00 feet.

    Time for Sound to Travel through a Medium given Distance

1 - Wood
2 - Steel
3 - Water
4 - Air

Enter the number of the medium: 3
Enter the distance to travel (in feet): 72.25
In water it will take 0.0153 seconds to travel 72.25 feet.

    Time for Sound to Travel through a Medium given Distance

1 - Wood
2 - Steel
3 - Water
4 - Air

Enter the number of the medium: 6
Error, invalid entry!
Please run the program again.
*/