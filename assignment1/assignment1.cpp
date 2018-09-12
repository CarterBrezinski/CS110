/*
Name: Carter Brezinski
SID: 200 391 111
Date: February 12th, 2018
Purpose: The purpose of this program is to read 5 integers from a text file, get the average of those integers,
and then display the average to two decimal places in a different text file.
*/


//including file manipulators
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	//Set all printout in a fixed and showpoint decimal format
	cout << fixed << showpoint;

	int int1, int2, int3, int4, int5;	// declares the 5 integer variables
	int sum;					//declares the sum variable for the sum of all 5 integers
	float average;				//declares the average variable for the average of the 5 integers
	ifstream inData;			// declares input stream
	ofstream outData;			// declares output stream

	// binds program variable inData to the input file "integers.txt"
	inData.open("integers.txt");

	//The proceeding lines of code check the state of the stream and if it works or not.
	//true means the last I/O operation on that stream succeeded
	//false means the last I/O operation on that stream failed
	if (!inData)
	{
		cout << "Can't open the input file successfuly." << endl;
		return 1;
	}

	// binds program variable outData to the output file "report.txt"
	outData.open("report.txt");

	//Testing the state of the output stream
	//the same true and false principles apply as they did for inData.
	if (!outData)
	{
		cout << "Can't open the output file successfuly." << endl;
		return 2;
	}

	inData >> int1 >> int2 >> int3 >> int4 >> int5;	// inputs 5 integer values from the integers.txt file

	sum = int1 + int2 + int3 + int4 + int5;			//calculates the sum of all 5 integers

	cout << "The sum of all 5 integers is: " << sum << endl;	//A display of the sum of all 5 integers for the viewer

	average = float(sum/5.0);				//calculates the average, ensuring it is a float number

	//this code sets the precision of the average to only 2 decimal places when printing/displaying it for the viewer
	cout << "The average of all 5 integers is: " << setprecision(2) << average << endl;

	outData << fixed << setprecision(2) << average << endl; //prints to the report.txt file with 2 decimals

	inData.close();		//closing the connection between the integers.txt file and the report.txt file
	outData.close();

	system("pause");	//this line of code asks the user to press any key before closing the program

	return 0; //returns 0 and closes the program.
}