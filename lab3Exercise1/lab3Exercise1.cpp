/*
Carter Brezinski
200 391 111
January 31st, 2018

Summary: This program was largely taken from the readData.cpp program, in this program 
it determines the cost of a sheet of glass from the users input of the dimensions of the
sheet of glass.

This code was missing input and output statements, as well as a prompt, as the programmer,
this is something that needed to be added.
*/

#include <iostream>
#include <iomanip>
using namespace std;

const  int inchesInSqFt = 144;

int main()
{
	int  length;		// measured in inches
	int   width;         	// measured in inches
	float  price;            	// sold by square foot
	float  cost;

	cout << fixed;

	/*
	The program was completed by added the following code below, this code prompted
	the user to add the three data variables: width, length, and price per square feet of glass.
	*/

	cout << "Input a number for the length of the sheet of glass" << endl;
		cin >> length; 
	cout << "Input a number for the width of the sheet of glass" << endl;
		cin >> width;
	cout << "Input a number for the price per square feet of glass" << endl;
		cin >> price;


/*
Below is where the variables themselves are combined in arithmatic equations to give the result that
is the cost of the glass. The cost is calculated, displayed, and then the program closes.
*/
	cout << "Width: " << setw(5) << width
		<< "  Length: " << setw(5) << length
		<< "  Price: " << setw(6) << setprecision(2)
		<< price << endl;
	cost = ((float(width) * float(length)) / float(inchesInSqFt)) * price;
	cout << "The cost of the glass is $" << setw(6)
		<< cost << endl;
	return 0;
}