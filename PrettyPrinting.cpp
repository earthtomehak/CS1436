/* A program to demonstrate the use of the stream manipulators to format output.
   The program displays student names and GPA's in tabular form
*/

#include <iostream>
#include <iomanip>

#define NAME_COL_WIDTH 40
#define FNAME_COL_WIDTH 20
#define LNAME_COL_WIDTH 20
#define GPA_COL_WIDTH 4

using namespace std;

int main()
{
    // Display headings

    cout << "LAST NAME, FIRST NAME";
    cout << '\t';
    cout << "GPA";
    cout << endl;

    // Display the data in the table under the headings

    // ROW 1

    cout << "Ables, Jack";
    cout << '\t';
    cout << 3.1;
    cout << endl;

    // ROW 2

    cout << "Westermann, Celeste";
    cout << '\t';
    cout << 2.0;
    cout << endl;

    // ROW 3

    cout << "Johnson, Vonda";
    cout << '\t';
    cout << 3.67;
    cout << endl;
    cout << endl;

    // Use stream manipulators to format

    cout << "-----------------------------------------------------------------------\n";
    
    /* Second Printing Set: 
    last Name and fist name (both heading and values) are left justified
    GPA (both heading and values) is right justified
    */
    
    //heading:  
    cout << left << setw(NAME_COL_WIDTH) << "LAST NAME, FIRST NAME";
    cout << '\t';
    cout << right << setw(GPA_COL_WIDTH) << "GPA" << endl;
    
    //Fixed set precision of 2 sets values to two places after decimal (trailing zeros)
    // Row 1
    cout << left << setw(NAME_COL_WIDTH) << "Ables, Jack";
    cout << '\t';
    cout << fixed << setprecision(2);
    cout << right << setw(GPA_COL_WIDTH) << 3.1 << endl;
    
    // Row 2
    
    cout << left << setw(NAME_COL_WIDTH) << "Westermann, Celeste";
    cout << '\t';
    cout << fixed << setprecision(2);
    cout << right << setw(GPA_COL_WIDTH) << 2.0 << endl;
    
    // Row 3
    
    cout << left << setw(NAME_COL_WIDTH) << "Johnson, Vonda";
    cout << '\t';
    cout << fixed << setprecision(2);
    cout << right << setw(GPA_COL_WIDTH) << 3.67 << endl;
    
   cout << "-----------------------------------------------------------------------\n";
    
    /* 3rd Printing Set:
    last name and first name (both headings and values should be left justified)
    GPA heading should be left justified, values should be right justified
    */
    
    //heading
    cout << left << setw(LNAME_COL_WIDTH) << "LAST NAME";
    cout << left << setw(FNAME_COL_WIDTH) << "FIRST NAME";
    cout << '\t';
    cout << left << setw(GPA_COL_WIDTH) << "GPA" << endl;
   
   //Row 1
    cout << left << setw(LNAME_COL_WIDTH) << "Ables";
    cout << left << setw(FNAME_COL_WIDTH) << "Jack";
    cout << '\t';
    cout << left << setw(GPA_COL_WIDTH) << 3.1 << endl;
    
    //Row 2
    cout << left << setw(LNAME_COL_WIDTH) << "Westermann";
    cout << left << setw(FNAME_COL_WIDTH) << "Celeste";
    cout << '\t';
    cout << left << setw(GPA_COL_WIDTH) << 2.0 << endl;
    
   //Row 3
    cout << left << setw(LNAME_COL_WIDTH) << "Johnson";
    cout << left << setw(FNAME_COL_WIDTH) << "Vonda";
    cout << '\t';
    cout << left << setw(GPA_COL_WIDTH) << 3.67 << endl;
   

    return 0;
}

/** OUTPUT
LAST NAME, FIRST NAME   GPA
Ables, Jack     3.1
Westermann, Celeste     2
Johnson, Vonda  3.67

-----------------------------------------------------------------------
LAST NAME, FIRST NAME                            GPA
Ables, Jack                                     3.10
Westermann, Celeste                             2.00
Johnson, Vonda                                  3.67
-----------------------------------------------------------------------
LAST NAME           FIRST NAME                  GPA
Ables               Jack                        3.10
Westermann          Celeste                     2.00
Johnson             Vonda                       3.67
*/
