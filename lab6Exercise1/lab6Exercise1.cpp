/*
NAME: Carter Brezinski
SID: 200391111
DATE: February 28th
Purpose: The program prompts for the number of integers to sum.It then reads the integers in a loop, summing them.Finally, it prints the sum.
*/

#include <iostream>
using namespace std;

int main()
{
	int  sum = 0;               // summing variable
	int  dataValue;             // input value
	int count;					//count variable		  
	int loopTotal;				//total loop variable
	count = 0;					//loop counter is set to 0.

	//Prompts the user for the number of loops for the while statement later on, then they enter it and it is assigned to loopTotal.
	cout << "enter the number of loops you would like to create: " << endl;							
	cin >> loopTotal;			

	//This while statement will loop until the counter is no longer less than the loopTotal entered by the user above
	//This loop prompts users for a number, and will loop and add numbers until the while loop requirements have been met.
	while(count < loopTotal)
	{
		//The user is prompted for an integer value, they enter it, and it is added to the sum
		cout << "Enter an integer value.  Press return." << endl;
		cin >> dataValue;
		sum = sum + dataValue;
		//The counter then increases by 1
		count++;		
	}

	//The sum is then printed and the program will then close.
	cout << endl << "The sum is " << sum << endl;
	return 0;
}