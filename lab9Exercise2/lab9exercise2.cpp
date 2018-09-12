#include <iostream>
using namespace std;

void GetData(double &, double &);

double CalcPay(double, double);

void PrintPay(double, double, double);

int main()
{
	double payRate, hoursWorked, totalPay;

	cout << "This program calculates the total pay for an employee." << endl;
	cout << "You will be prompted to enter your pay rate and total hours worked.";
	cout << endl << "The program will then compute and print the total pay.";
	cout << endl;

	GetData(payRate, hoursWorked);

	totalPay = CalcPay(payRate, hoursWorked);

	PrintPay(payRate, hoursWorked, totalPay);

	return 0;
}

void GetData(double & payRate, double & hoursWorked)
{
	cout << "Please enter the pay rate per hour: ";
	cin >> payRate;
	cout << "Please enter the hours worked: ";
	cin >> hoursWorked;
}

double CalcPay(double payRate, double hoursWorked)
{
	double pay;
	pay = payRate * hoursWorked; 
	return pay;
}

void PrintPay(double payRate, double hoursWorked, double totalPay)
{
	cout << "For an employee who worked " << hoursWorked << " hours, with a pay rate of $" << payRate << " per hour," << endl <<  "The total pay is: $" << totalPay  << "." << endl;
}