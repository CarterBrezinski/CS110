// Program Convert converts a temperature in Fahrenheit to
// Celsius or a temperature in Celsius to Fahrenheit
// depending on whether the user enters an F or a C..
/*
The initial issue when entering c0, d0, and F0 was because if the letter did not equal 'C' then it would immediately plug in the
temperature value into the else statement, and 5*(-32)/9 = -17.77..
*/

#include <iostream>
using namespace std;
int main()
{
	char letter;	// Place to store input letter
	int tempIn;		// Temperature to be converted
	int tempOut;	// Converted temperature

	//The input menu needs to be displayed, displaying the options that the user has to enter
	cout << "Input Menu" << endl << endl;
	cout << "F:  Convert from Fahrenheit to Celsius" << endl;
	cout << "C:  Convert from Celsius to Fahrenheit" << endl;
	cout << "Type a C or an F, then press return." << endl << endl;

	//The user should then be prompted to enter a value, that value will be stored in the value of letter.
	cout << "Enter your option: ";
	cin >> letter;
	
	//There needs to be a check if what they entered is a valid letter, a valid letter should be the letter c,C,f,F. Capitals should not matter.
	if (letter == 'C' || letter == 'c' || letter == 'F' || letter == 'f')
	{
		//if they entered a letter that is considered allowed, then they should go through with the if statements below, giving the proper value.
		cout << "Type an integer number: ";
		cin >> tempIn;

		if (letter == 'C' || letter == 'c')
		{
			tempOut = (9 * tempIn / 5) + 32;
		}
		else
		{
			tempOut = 5 * (tempIn - 32) / 9;	
		}
		cout << endl << endl;
		cout << "Temperature to convert: " << tempIn << endl;
		cout << "Converted temperature:  " << tempOut << endl;
	}
	//if what they entered is an invalid letter then the user should be prompted that they entered a wrong letter and the program should close.
	else
	{
		cout << "wrong letter inputted" << endl;
	}

	return 0;
}
