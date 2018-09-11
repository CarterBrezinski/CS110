/*
NAME: Carter Brezinski
SID: 200 391 111
DATE: March 7th, 2018
PURPOSE: To create a triangle program, that takes the integer the user inputs and creates a triangle based off of it.
*/

#include <iostream>
using namespace std;

int main()
{
	//prompt the user for the total amount of stars on the first line
	int firstLineStars;
	cout << "how many stars on the first line: ";
	cin >> firstLineStars;

	//the variable line will continue until there is only 1 line remaining, this will have our for loop repeat as many times as it needs to
	for (int line = firstLineStars; line > 0; line--)
	{
		
		//the number of stars correlates with the line number, it will decrease from the highest
		for (int numStars = line; numStars > 0; numStars--) 
		{
			//a * will print every time this loop goes out, creating the triangle formation by the end of the whole iteration
			cout << '*';
		}
		//after each line of stars, it will end line so a newer and shorter line can be printed after.
		cout << endl;

	}
	return 0;
}