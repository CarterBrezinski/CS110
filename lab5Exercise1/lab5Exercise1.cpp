/*
NAME: Carter Brezinski
SID: 200391111
PURPOSE: The purpose of this program is to enter 3 integers, decide which is the largest of the 3, and then output the largest number.
*/

#include <iostream>
using namespace std;

int main()
{
	//declaration of numbers being entered
	float num1, num2, num3;
	float largestNum;

	//prompt the user for 3 integer numbers
	cout << "please enter 3 integers" << endl;

	//The user would enter the 3 numbers below, each entered seperately
	cin >> num1 >> num2 >> num3;

	//if statement to see if num1 is the largest number
	if (num1 >= num2 && num1 >= num3)
	{
		largestNum = num1;
	}

	//if statement to see if num2 is the largest number
	if (num2 >= num1 && num2 >= num3)
	{
		largestNum = num2;
	}

	//if statement to see if num3 is the largest number
	if (num3 >= num1 && num3 >= num2)
	{
		largestNum = num3;
	}

	//outputting the largest number entered
	cout << "the largest integer entered is: " << largestNum << endl;

	return 0;
} // end main