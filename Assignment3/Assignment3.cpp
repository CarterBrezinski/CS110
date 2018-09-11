/*
NAME: Carter Brezinski
SID: 200 391 111
DATE: March 26th, 2018
PURPOSE: The purpose of this assignment is to create a fully functioning version of the gambling game craps.
*/

#include <iostream>				//Included resources to assist in the program functioning properly
#include <stdlib.h>				//The resources: stdlib.h, stdio.h, and time.h are all necessary in this program
#include <stdio.h>				//In their use of the rand() function, time, and NULL commands which assist in
#include <time.h>				//Generation of a random seed for the random numbers to pull from.
using namespace std;

//Declaration of the void functions called upon later on in the program.
void GetRoll(int&);
void CalcSum(int, int, int&);
void PrintRoll(int, int, int);

/*
Purpose: The purpose of the main function is to house the fully functioning game of craps. All containing the first phase,
calling of the functions: GetRoll, CalcSum, and PrintRoll; and the containment of the potential second phase.
*/
int main()
{
	//declaration of die variables, dice total, point (if it should go to second phase) and end of game bool check
	int dice1 = 0;
	int	dice2 = 0;
	int totalRolled = 0;
	int point = 0;
	bool endGame = false;
	//declaration of this initializes the random seed for this instance of the program.
	srand(time(NULL));

/*
The first roll phase, within this phase there are various options in the game of craps.
If the player is to roll a 7 or 11 on the first roll, they instantly win.
But if they roll a 2, 3, or 12 on the first roll they instantly lose.
Any other number will be initialized as the point, and then the second phase of the game of craps would commence.
Within the second phase, the player must continue rolling until they hit their number (WIN) or they hit a 7 (LOSE).
*/

	//In this instance, since GetRoll was specified to be a single variable change, it has to be called twice
	//To retrieve both values for dice1 and dice2, which are specified as By Reference (ByRef) variables in the
	//Functions declaration statement.
	GetRoll(dice1);
	GetRoll(dice2);

	//Once the values for dice1 and dice2 are found, they are sent to the void function CalcSum
	//Within this function, only the third parameter sent, totalRolled is being sent By Reference (ByRef)
	CalcSum(dice1, dice2, totalRolled);

	//Once the sum of the two rolls are calculated into totalRolled, all three values are sent By Value (ByVal)
	//To be printed out and displayed in the function PrintRoll.
	PrintRoll(dice1, dice2, totalRolled);

	//Once the player has made their first roll, there must be a check as to whether or not they have won, lost, or
	//Will keep going, this statement is deciding whether or not they have or have not, and if any of these instances
	//Have been met, it will trigger the boolean function endGame to be true so the second phase won't happen.

	if (totalRolled == 7 || totalRolled == 11)
	{
		//As following the rules, if a 7 or 11 is rolled, the player wins.
		cout << "You win!" << endl;
		endGame = true;
	}
	else if (totalRolled == 2 || totalRolled == 3 || totalRolled == 12)
	{
		//As following the rules, if a 2, 3, or 12 is rolled, the player loses. 
		cout << "You lose." << endl;
		endGame = true;
	}
	else
	{
		//Otherwise, the value rolled has become the point value and second phase will initiate.
		point = totalRolled;
		cout << "Point is " << point << endl;
	}

	//Within the second phase, it will not stop until endGame has changed from its false value to a true value.
	//This could result in various roll displays until the point value, or a 7 has been rolled.
	while (endGame == false)
	{
		//Initial calling of the two dice values.
		GetRoll(dice1);
		GetRoll(dice2);
		//Calculation and change of the variable totalRolled.
		CalcSum(dice1, dice2, totalRolled);
		//Print what the user initally rolled.
		PrintRoll(dice1, dice2, totalRolled);

		//If the user rolls the point value, they win the game and the while statement ends.
		if (totalRolled == point)
		{
			cout << "You win!" << endl;
			endGame = true;
		}
		//Otherwise if the user rolls a 7, they lose the game and the while statement ends.
		else
			if (totalRolled == 7)
			{
				cout << "You lose." << endl;
				endGame = true;
			}
	}
	system("pause");	//this line of code asks the user to press any key before closing the program

	return 0; //returns 0 and closes the program.
}

/*
Purpose: The purpose of the GetRoll function is to take the dice variable, generate a random number, and send the
variable back to the main function.
*/
void GetRoll(int& RolledDie)
{
	//randomly generate a number between 1 and 6 for RolledDie
	RolledDie = (rand() % 6 + 1);
}

/*
Purpose: The purpose of the CalcSum function is to take the two dice variables rolled prior in the GetRoll function
and calculate their sum into the ByReference variable totalRolled, which will then be returned to the main function.
*/
void CalcSum(int dice1, int dice2, int& totalRolled)
{
	totalRolled = dice1 + dice2;
}

/*
Purpose: The purpose of the PrintRoll function is to take the three values gathered prior in other functions,
and display them for the user to see their progress in the game of craps. This function only displays the roll that
the user recieved in the game, not whether or not they lose or win the game.
*/
void PrintRoll(int dice1, int dice2, int totalRolled)
{
	cout << "you rolled " << dice1 << " + " << dice2 << " = " << totalRolled << endl;
}