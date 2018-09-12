/*
NAME: Carter Brezinski
SID: 200 391 111
DATE: March 14th, 2018
PURPOSE: Prompts the user for 5 integers, then sends those integers to a sub-function, which will calculate and return the integer to the main function.
*/

#include <iostream>
#include <iomanip>
using namespace std;

float AVG(int num1, int num2, int num3, int num4, int num5)
{
	float average;
	cout << fixed;
	int sum = num1 + num2 + num3 + num4 + num5;
	average = (float)sum / 5.0;
	return average;
}

int main()
{
	int num1, num2, num3, num4, num5;
	float average;
	cout << "Enter 5 integers: \n";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	average = AVG(num1, num2, num3, num4, num5);
	cout << endl;

	cout << "The average of the 5 integers is: " << setprecision(2)  << average << endl;

	return 0;
}
