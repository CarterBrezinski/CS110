/************************************************************
*
*       FileName: loopDW.cpp
*       Purpose:  Demonstrate how to use Do-while Statement.
*
**************************************************************/
#include <iostream>
using namespace std;

int main()
{
	int mark;
	char grade;

	cout << "Please enter an integer mark: " << endl;

	// Please add a do-while loop below to make sure a valid mark 
	// between [0, 100] is entered. 
	do
	{
		cin >> mark;
		if(mark < 0 || mark > 100)
		{
			cout << "invalid mark, please enter a valid integer mark: " << endl;
		}
	} while (mark < 0 || mark > 100);

	if (mark >= 85)
	{
		grade = 'A';
		cout << "Great Mark. " << endl;
	}
	else if (mark >= 75 && mark < 85)
	{
		grade = 'B';
		cout << "Good Mark. " << endl;
	}
	else if (mark >= 65 && mark < 75)
	{
		grade = 'C';
		cout << "Average Mark. " << endl;
	}
	else if (mark >= 50 && mark < 65)
	{
		grade = 'D';
		cout << "You passed the class. " << endl;
	}
	else
	{
		grade = 'F';
		cout << "You failed the class. " << endl;
	}

	cout << "The corresponding character grade is " << grade << endl;

	return 0;
}
// end program