/*
Name: Carter Brezinski
SID: 200 391 111
Date: February 7th
Program purpose: readline.cpp demonstrates how to read a line of text from a file and output it into another text file
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

	string str1, str2, str3, str4, str5, str6;      // declares 2 variables
	ifstream inData;                    // declares input stream
	ofstream outData;                   // declares output stream

	inData.open("input.txt");
	// binds program variable inData to the input file "input.txt"

	outData.open("output.txt");
	// binds program variable outData to the output file "output.txt"

	// input 6 lines from input.txt
	
	getline(inData, str1);
	getline(inData, str2);
	getline(inData, str3);
	getline(inData, str4);
	getline(inData, str5);
	getline(inData, str6);
	
	// outputs 6 lines with names
	outData << "My instructors name is: "  << str6 << endl;
	outData << "My name is: " << str5 << endl;  
	outData << str4 << endl;
	outData << str3 << endl;
	outData << str2 << endl;
	outData << str1 << endl;
	
	inData.close();
	outData.close();

	return 0;
}