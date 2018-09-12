#include <iostream>
using namespace std;


// Function prototypes:


void GetValues(double &, double &);

double ComputeArea(double , double);

void PrintArea(double);


int main()
{
	double length, width, area;

	cout << "This program computes the area of a rectangle." << endl;
	cout << "You will be prompted to enter both the length and width.";
	cout << endl << "Enter a real number (such as 7.88 or 6.3) for each.";
	cout << endl << "The program will then compute and print the area.";
	cout << endl;

	// call function GetValues(length, width) here
	GetValues(length, width);
	
	// call function ComputeArea(length, width) here
	area = ComputeArea(length, width);

	// call function PrintArea(area) here
	PrintArea(area);

	return 0;
}


/*
Purpose:  To ask the user for the length and width of a rectangle and
to return these values via the two parameters.
Return:   Length   The length entered by the user.
Width    The width entered by the user.
*/

void GetValues(double & l, double & w)
{
	// add code to get Length and Width
	cout << "Please enter the length: ";
	cin  >> l;
	cout << "Please enter the width: ";
	cin  >> w;
}


/* Given:  Length   The length of the rectangle.
Width    The width of the rectangle.
Purpose:   To compute the area of this rectangle.
Return: The area in the function name.
*/

double ComputeArea(double l, double w)
{
	double area;
	area = l * w;
	// add code to compute area 
	return area;
}



/* Given:  Area    The area of a rectangle.
Purpose:   To print Area.
Return: Nothing.
*/
void PrintArea(double a)
{
	cout << "The area of the rectangle is: " << a << endl;
	// add code to print area of the rectangle

}