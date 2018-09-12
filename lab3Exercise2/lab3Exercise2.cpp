/*
Carter Brezinski
200 391 111
January 31st, 2018

Summary: A large portion of this code is added onto format_io.cpp
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//declaration of variables, the variable cost was added to simplify the price * 0.7
	string product;
	float price;
	float cost;

	//takes whole line of product name, not just first word like cin does
	cout << "Product name: ";
	getline(cin, product); 

	cout << "Price: $";
	cin >> price;
	cout << endl;

	//calculates cost
	cost = price * 0.7;

	//prints out cost to a fixed point precision of 2 decimals.
	cout.precision(2);
	cout << product << ": $" << fixed << cost << " (with 30% discount)" << endl;

	return 0;
}