/*

File Name: hello.cpp
Author: Carter Brezinski
Author SID: 200 391 111

Purpose of program: prompt user for their name, and then say hello to them.

*/

#include <iostream>
#include <string>
using namespace std;



int main()
{
	string name;  //char name[50];

	cout << "Please enter your name" << endl;

	cin >> name;
	cout << "Hello, " << name << endl;
	return 0;
}