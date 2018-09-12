/*
NAME: Carter Brezinski
SID: 200 391 111
DATE: March 5th
PURPOSE: The purpose of this assignment is to prompt the user for number of rows in a triangle, and then print said triangle
*/

//including and declaring file manipulators
#include <iostream>
using namespace std;

int main()
{
	int totalRowNum;			//This variable is what is prompted to the user, it will be the total number of rows in the pyramid.
	int currentNumVar;		//This number is the number that will be printed and manipulated in the nested-loops.
	int totalSpaces;			//This is a variable used for the first nested for-loop, it keeps track of the total spaces per row. 
	
	//prompt the user for the total number of rows and plugs that number into the variable totalRowNum.
	cout << "enter an integer number from 1-15 for rows in the triangle: ";
	cin >> totalRowNum;
	
	for (int currentRowNum = 1; currentRowNum <= totalRowNum; currentRowNum++)
	{
		//total possible spaces per row are the total number of rows - the current row number. 
		totalSpaces = totalRowNum - currentRowNum;
		
		//This for-loop is for the printing of spaces for each row.
		//this for-loop prints spaces and adds the space counter until all possible spaces are printed in the function. 
		for(int spaceCounter = 1; spaceCounter <= totalSpaces; spaceCounter++)
		{
			//This prints out a space onto the line.
			cout << ' ';
		}
		
		//This for-loop is for printing the number portion of the triangle.
		//The numbers count down until they reach the center, which is always 1, hence the loop repeats while it's >= 1.
		for (int currentNumVar = currentRowNum; currentNumVar >= 1; currentNumVar--)
		{
			//This prints out the current number (which is counting down) into the pyramid scheme.
			cout << currentNumVar;
		}
		
		//This for-loop is for printing the increasing number portion of the triangle.
		//The numbers count up until they equal they equal the current row number, which is the highest possible value per row.
		//This loop starts at 2, unlike the others which start at 1, because for the top of the pyramid it would not have another number with it.
		//If the loop started at 1, it would cause a duplicate in the center, resulting in two 1's instead of one 1 per row.
		for (currentNumVar = 2; currentNumVar <= currentRowNum; currentNumVar++)
		{
			//This prints the current number (which is counting up) into the pyramid scheme.
			cout << currentNumVar;
		}
		//prints out an end line, to start the next row of the pyramid without any issues
		cout << endl;

	}

	system("pause");	//this line of code asks the user to press any key before closing the program
	return 0;		

}
