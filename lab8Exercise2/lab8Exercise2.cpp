// Program functionP prints a triangle of the stars.
// For example:  
//		 *****
//		 ****
//		 ***
//		 **
//		 *

#include <iostream>
#include <iomanip>
using namespace std;

void PrintStars(int numofstars)
{
	int line = numofstars;
	//the number of stars correlates with the line number, it will decrease from the highest
	for (int numStars = line; numStars > 0; numStars--)
	{
		//a * will print every time this loop goes out, creating the triangle formation by the end of the whole iteration
		cout << '*';
	}
	//after each line of stars, it will end line so a newer and shorter line can be printed after.
	cout << endl;

	/* FILL IN Code to print the number of NUM stars in a line by using a loop*/
}

int main ()
{
    int  numofstars;

    cout << "Enter the number of stars in the first line: " << endl;
    cin >> numofstars;

    while (numofstars > 0)
    {

    /* FILL IN code to invoke function PrintStars */
		PrintStars(numofstars);
    /* Update the control variable   numofstars  */ 
		numofstars--;
    }

    return 0;
}

//****************************************************************************



