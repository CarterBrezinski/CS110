/*
NAME: Carter Brezinski
SID: 200 391 111
DATE: April 4th
LAB: 10
EXERCISE: 1
PURPOSE: The purpose of this program is to take 10 integers the user enters, put them in an array, display from first to last, last to first, and the sum of the array.
*/

#include <iostream>

using namespace std;

int main() 
{
	int number[10];
	int sum = 0;
	//prompt the user for the 10 numbers in the array, for loop
	cout << "Please enter 10 integer numbers into the array:" << endl;
	for (int n = 0; n < 10; n++)
	{
		cin >> number[n];
	}

	//print out the array in ascending index order, for loop
	cout << "Index Ascending: ";
	for (int a = 0; a < 10; a++)
	{
		cout << number[a] << " ";

	}
	cout << endl;
	//print out the array in descending index order, for loop
	cout << "Index Descending: ";
	for (int d = 9; d >= 0; d--)
	{
		cout << number[d] << " ";
	}
	cout << endl;
	//calculate the sum of the array and print it out, for loop
	
	for (int s = 0; s < 10; s++)
	{
		sum = sum + number[s];
	}
	cout << "The total is: " << sum << endl;
}