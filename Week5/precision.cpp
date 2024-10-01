/*
Using formatting like precision and width. 
manipulators used include: setprecision, setw, fixed, left, right,
showpoint and no showpoint to control how floating point is outputted
*/
#include <iostream>
#include <iomanip> // Include iomanip to format the output
using namespace std;

int main()
{
  // Declare variables
    double x = 28.45678;
    double y = 42.98;
    double z = 123456.78915;
    double c = 123.4,  d = 12;

  // Output original values of x and y
   cout << "X is " << x << endl;
   cout << "Y is " << y << endl;
   
   // Set precision to 1 and output x and y
   cout << "With precison 1: " << endl;
   cout << setprecision(1);
   cout << "X is " << x << endl;
   cout << "Y is " << y << endl;
   
   // Set precision to 2 and output x and y
   cout << "With precison 2: " << endl;
   cout << setprecision(2);
   cout << "X is " << x << endl;
   cout << "Y is " << y << endl;
  
   // Set precision to 3 and output x and y
   cout << "With precison 3: " << endl;
   cout << setprecision(3);
   cout << "X is " << x << endl;
   cout << "Y is " << y << endl;
   
   // Set precision to 4 and output x and y
   cout << "With precison 4: " << endl;
   cout << setprecision(4);
   cout << "X is " << x << endl;
   cout << "Y is " << y << endl;
   
   // Set precision to 5 and set width to 8 for x, y, and z
   cout << "With precision 5 and setw(8): " << endl;
   cout << setprecision(5);
   cout << "X is " << setw(8) << x << endl;
   cout << "Y is " << setw(8) << y << endl;
   cout << "Z is " << setw(8) << z << endl << endl;
   
   // Output c and d with no fromatting of any kind 
   cout << "C is " << c << endl;
   cout << "D is " << d << endl;
   
   // Set precision to 5 and set width to 8 for c and d
   cout << "With precision 5 and setw(8): " << endl;
   cout << setprecision(5);
   cout << "C is " << setw(8) << c << endl;
   cout << "D is " << setw(8) << d << endl;
   
   // Set precision to 5, showpoint (trailing zeros), and set width to 8 for c and d
   cout << "With precision 5, showpoint and setw(8): " << endl;
   cout << setprecision(5) << showpoint;
   cout << "C is " << setw(8) << c << endl;
   cout << "D is " << setw(8) << d << endl;
   
   // Set precision to 5, no show point (no trailing zeros), and set width to 8 for c and d
   cout << "With precision 5, noshowpoint and setw(8): " << endl;
   cout << setprecision(5) << noshowpoint;
   cout << "C is " << setw(8) << c << endl;
   cout << "D is " << setw(8) << d << endl;
   cout << endl;
   
   // Set precision to 2, fixed format, and set width to 8 for x, y, and z
   cout << "With precision 2 fixed and setw(8): " << endl;
   cout << setprecision(2) << fixed;
   cout << "X is " << setw(8) << x << endl;
   cout << "Y is " << setw(8) << y << endl;
   cout << "Z is " << setw(8) << z << endl;
   cout << endl;
   
   // Set precision to 5, showpoint, and output c and d
   cout << "With precision 5 and showpoint: " << endl;
   cout << setprecision(5) << showpoint;
   cout << "C is " << c << endl;
   cout << "D is " << setw(8) << d << endl;
   cout << endl;
   
   // Set precision to 3, fixed format, set width to 4, and left justfy x, y, and z
   cout << "With precision 3 fixed and setw(4) and left justified: " << endl;
   cout << setprecision(3) << fixed;
   cout << "X is " << left << setw(4) << x << endl;
   cout << "Y is " << left << setw(4) << y << endl;
   cout << "Z is " << left << setw(4) << z << endl;
   
   // Set precision to 3, fixed format, and left justify x, y, and z
   cout << "With precision 3 fixed and left justified: " << endl;
   cout << setprecision(3) << fixed;
   cout << "X is " << left << x << endl;
   cout << "Y is " << left << y << endl;
   cout << "Z is " << left << z << endl;
   
   // Set precision to 3, fixed format, set width to 8, and right justify x, y, and z
   cout << "With precision 3 , setw(8), fixed and right justified: " << endl;
   cout << setprecision(3) << fixed;
   cout << "X is " << right << setw(8) << x << endl;
   cout << "Y is " << right << setw(8) << y << endl;
   cout << "Z is " << right << setw(8) << z << endl;
  
  return 0;
}

/*
X is 28.4568
Y is 42.98
With precision 1:
X is 3e+01
Y is 4e+01
With precision 2:
X is 28
Y is 43
With precision 3:
X is 28.5
Y is 43
With precision 4:
X is 28.46
Y is 42.98
With precision 5 and setw(8):
X is   28.457
Y is    42.98
Z is 1.2346e+05

C is 123.4
D is 12
With precision 5 and setw(8):
C is    123.4
D is       12
With precision 5, showpoint and setw(8):
C is   123.40
D is   12.000
With precision 5, noshowpoint and setw(8):
C is    123.4
D is       12

With precision 2 fixed and setw(8):
X is    28.46
Y is    42.98
Z is 123456.79

With precision 5 and showpoint:
C is 123.40000
D is 12.00000

With precision 3 fixed and setw(4) and left justified:
X is 28.457
Y is 42.980
Z is 123456.789
With precision 3 fixed  and left justified:
X is 28.457
Y is 42.980
Z is 123456.789
With precision 3 , setw(8), fixed and right justified:
X is   28.457
Y is   42.980
Z is 123456.789

*/