/*

File Name: lab2.cpp
Author: Carter Brezinski
Author SID: 200 391 111

Purpose of program: create a program script that will 
prompt the user for two numbers and then display 
the sum of the two numbers.

*/

#include <iostream>
using namespace std;

int main()
{

	int num1;		//declaration of integers
	int num2;
	cout << "This program adds two integers together." << endl;
	cout << "Please enter the first number: ";						//prompt user for first and second numbers
		cin >> num1;
		cout << "Please enter the second number: ";
		cin >> num2;


		cout << "The sum of the two numbers you entered is " << num1 + num2 << endl;	//display the sum of the program
		return 0;

}