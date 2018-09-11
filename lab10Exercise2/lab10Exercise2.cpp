/*
NAME: Carter Brezinski
SID: 200 391 111
DATE: April 4th
LAB: 10
EXERCISE: 2
PURPOSE: The purpose of this program is to take 10 integers the user enters, put them in an array, display from first to last, last to first, and the sum of the array.
*/

#include <iostream>

using namespace std;
int getMax(int[], int);
void printArray(int[], int);
int enterArray(int[], int);

int main()
{
	int number[10];
	int highestNum;
	int variables = 10;

	number[10] = enterArray(number, variables);
	printArray(number, variables);
	highestNum = getMax(number, variables);
	cout << "The highest value entered was: " << highestNum << endl;
	return 0;
}

int enterArray(int number[], int variables)
{
	//prompt the user for the 10 numbers in the array, for loop
	cout << "Please enter 10 integer numbers into the array:" << endl;
	for (int n = 0; n < 10; n++)
	{
		cin >> number[n];
	}
	return number[variables];
}

void printArray(int number[], int variables)
{
	//print out the array in ascending index order, displaying all array elements
	cout << "Index Ascending: ";
	for (int a = 0; a < 10; a++)
	{
		cout << number[a] << " ";

	}
	cout << endl;

}

int getMax(int number[], int variables)
{	
	int maxNum = number[0];
	for (int m = 1; m < variables; m++)
	{
		if (number[m] > maxNum)
		{
			maxNum = number[m];
		}
	}
	return maxNum;
}


