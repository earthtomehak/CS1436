/* Psuedocode: Lab #4 - Convert Seconds to days, hr, mins, remaining secs
(1) Create constant variables of type long long int to hold seconds
for conversion: 1 day = 86400 secs, 1 hr = 3600 secs, 1 min = 60 secs.
(2) Declare vairiables: One for user input (userSeconds), and three for 
storing the calculations for hours, minutes, and remainingSeconds.
(3) Prompt the user for input of userSeconds.
(4) Validate user input: Entered value cannot be less than or equal to 0.
Display error message to user in a while loop.
(5) Calculate days by dividing userSeconds by Seconds in a Day to get 
integer value for days. Use modulous to get the remainder and store that 
value in remaining days. 
Calculate hrs by dividing the remainingSeconds by Seconds in an hr to
get integer value for hrs. Use Modulous to get remainder by (remainingSec / secs in hr).
Calculate mins by dividing the remainingSeconds by Seconds in a min to
get integer value for hrs. Use Modulous to get remainder by (remainingSec / secs in min).
(6) Only display the leading label if the value of days, hours, minutes, or seconds > 0.
(7) Display all outputs
*/
#include <iostream>
using namespace std;

int main() {

    // Constants for converting time
    const long long int SECONDS_IN_DAY = 86400; // 1 day = 86400 secs
    const long long int SECONDS_IN_HOUR = 3600; // 1 hr = 3600 secs
    const long long int SECONDS_IN_MINUTE = 60; // 1 min = 60 secs

    // Declare variables
    long long int userSeconds;
    long long int days, hours, minutes, remainingSeconds;

    // Prompt for user input of seconds
    cout << "Enter a time in seconds: ";
    cin >> userSeconds;
    cout << endl << endl;


    // Validate user input (Seconds cannot be zero or less)
    if (userSeconds <= 0) {
        cout << "Error! The seconds must be greater than zero." << endl;
        cout << "Enter a time in seconds: ";
        cin >> userSeconds;
        cout << endl << endl;
        
    } else {

        // Calculate days, hours, minutes, and remaining seconds
        days = userSeconds / SECONDS_IN_DAY;
        remainingSeconds = userSeconds % SECONDS_IN_DAY;

        hours = remainingSeconds / SECONDS_IN_HOUR;
        remainingSeconds = remainingSeconds % SECONDS_IN_HOUR;

        minutes = remainingSeconds / SECONDS_IN_MINUTE;
        remainingSeconds = remainingSeconds % SECONDS_IN_MINUTE;

        // Display resluts for userSeconds
        cout << userSeconds << " seconds is:" << endl;

        // Only display the leading label when the value of days, hours, minutes, or seconds > 0
        if (days > 0) {
            cout << "\t" << days << " days." << endl;
        }
        if (hours > 0) {
            cout << "\t" <<  hours << " hours." << endl;
        }
        if (minutes > 0) {
            cout << "\t" << minutes << " minutes." << endl;
        }
        if (remainingSeconds > 0) {
            cout << "\t" << remainingSeconds << " seconds." << endl;
        }
    }

    return 0;
}
/* Output
----------------------------------------------
Enter a time in seconds: 369204

369204 seconds is:
    4 days.
    6 hours.
    33 minutes.
    24 seconds.
----------------------------------------------
Enter a time in seconds: 68459

68459 seconds is:
    19 hours.
    59 seconds.
----------------------------------------------
Enter a time in seconds: 0

Error! The seconds must be greater than zero.
----------------------------------------------
*/