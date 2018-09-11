
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	float num1, num2, num3, num4, num5, num6, num7, num8, num9, num10; //declaration of float variables.
	float sum, average; 

	ifstream inData;                    // declares input stream
	ofstream outData;                   // declares output stream

	inData.open("input.txt");
	if (!inData)
	{
		cout << "Can't open the input file successfuly." << endl;
		return 1;
	}

	outData.open("output.txt");

	if (!outData)
	{
		cout << "Can't open the output file successfuly." << endl;
		return 2;
	}

	inData >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10;
	
	sum = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10;
	average = sum / 10; 

	outData << "The sum is: " << sum << endl;
	outData << "The average is: " << average << endl;

	inData.close();
	outData.close();

	return 0;
}