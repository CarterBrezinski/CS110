/*
NAME: Carter Brezinski
SID: 200 391 111
DATE: April 9th, 2018
ASSIGNMENT: 4
PURPOSE: The purpose of this project is to analyze four different DNA Strands and gather different information from them.
Different information gathered will be: If the person is anemic, a carrier, or normal, and if two of the people analyzed are related. 
*/

#include <iostream>
#include <fstream>
using namespace std;

int BaseTCheck(char [], char []);
bool SameGene(char [], char []);

/*
The purpose of the main function is to:
- Declare each char array and fill each with 444 char values from the dna.txt file respectively
- Call upon the baseTCheck subfunction to test if the person is normal, a carrier, or anemic.
- Call upon the sameGene function to test if the people are related or not.
- And finally print all these results into the output file, DNAanalysis.txt
*/
int main()
{
	//Declaration of all 8 gene arrays, 2 per person.
	char personAGene1[444];
	char personAGene2[444];
	char personBGene1[444];
	char personBGene2[444];
	char personCGene1[444];
	char personCGene2[444];
	char personDGene1[444];
	char personDGene2[444];

	//declaration of variables necessary for tests/checks 
	int baseCounter;
	bool relative;

	//declaring inData and outData to allow communication between the program and the input and output data files.
	ifstream inData;
	ofstream outData;
	
	//Checking if inData and outData function properly.
	inData.open("dna.txt");
	if (!inData)
	{
		cout << "Can't open the input file successfuly." << endl;
		return 1;
	}

	outData.open("DNAanalysis.txt");

	if (!outData)
	{
		cout << "Can't open the output file successfuly." << endl;
		return 2;
	}

	/*
	The following code extracts 444 values per person's two gene blocks.
	This is done through extracting character by character from the inData file with the use of for-loops.
	*/
	for (int a = 0; a < 444; a++)
	{
		personAGene1[a] = inData.get();
	}
	for (int a2 = 0; a2 < 444; a2++)
	{
		personAGene2[a2] = inData.get();
	}
	for (int b = 0; b < 444; b++)
	{
		personBGene1[b] = inData.get();
	}
	for (int b2 = 0; b2 < 444; b2++)
	{
		personBGene2[b2] = inData.get();
	}
	for (int c = 0; c < 444; c++)
	{
		personCGene1[c] = inData.get();
	}
	for (int c2 = 0; c2 < 444; c2++)
	{
		personCGene2[c2] = inData.get();
	}
	for (int d = 0; d < 444; d++)
	{
		personDGene1[d] = inData.get();
	}
	for (int d2 = 0; d2 < 444; d2++)
	{
		personDGene2[d2] = inData.get();
	}

	/*
	The following code's purpose is to check and see if the person in question is normal, a carrier, or anemic.
	This is done through the calling of the BaseTCheck function, which checks both gene blocks and returns a baseCounter number
	This baseCounter number is used to determine the state of the person in quesiton.
	*/
	//BaseTCheck for Person A
	baseCounter = BaseTCheck(personAGene1, personAGene2);
	if (baseCounter == 0)
	{
		outData << "Person A is normal." << endl;
	}
	if (baseCounter == 1)
	{
		outData << "Person A is a carrier." << endl;
	}
	if (baseCounter == 2)
	{
		outData << "Person A is anemic." << endl;
	}
	//BaseTCheck for Person B
	baseCounter = BaseTCheck(personBGene1, personBGene2);
	if (baseCounter == 0)
	{
		outData << "Person B is normal." << endl;
	}
	if (baseCounter == 1)
	{
		outData << "Person B is a carrier." << endl;
	}
	if (baseCounter == 2)
	{
		outData << "Person B is anemic." << endl;
	}
	//BaseTCheck for Person C
	baseCounter = BaseTCheck(personCGene1, personCGene2);
	if (baseCounter == 0)
	{
		outData << "Person C is normal." << endl;
	}
	if (baseCounter == 1)
	{
		outData << "Person C is a carrier." << endl;
	}
	if (baseCounter == 2)
	{
		outData << "Person C is anemic." << endl;
	}
	//BaseTCheck for Person D
	baseCounter = BaseTCheck(personDGene1, personDGene2);
	if (baseCounter == 0)
	{
		outData << "Person D is normal." << endl;
	}
	if (baseCounter == 1)
	{
		outData << "Person D is a carrier." << endl;
	}
	if (baseCounter == 2)
	{
		outData << "Person D is anemic." << endl;
	}

	/*
	The following code calls upon the sameGene sub-function. For each DNA gene block, it must be tested against both the #1 and #2
	blocks for each person. There is the possibility for a #1 block matching with a #2 block, so for each relative test per two people,
	four subtests must be made. Meaning 24 total subtests.
	*/

	//---------------------------------------------------------
	//Person A to Person B Comparison
	//---------------------------------------------------------
	relative = SameGene(personAGene1, personBGene1);
	if (relative == true)
	{
		outData << "Person A is related to person B." << endl;
	}
	relative = SameGene(personAGene1, personBGene2);
	if (relative == true)
	{
		outData << "Person A is related to person B." << endl;
	}
	relative = SameGene(personAGene2, personBGene1);
	if (relative == true)
	{
		outData << "Person A is related to person B." << endl;
	}
	relative = SameGene(personAGene2, personBGene2);
	if (relative == true)
	{
		outData << "Person A is related to person B." << endl;
	}
	//---------------------------------------------------------
	//Person A to Person C Comparison
	//---------------------------------------------------------
	relative = SameGene(personAGene1, personCGene1);
	if (relative == true)
	{
		outData << "Person A is related to person C." << endl;
	}
	relative = SameGene(personAGene1, personCGene2);
	if (relative == true)
	{
		outData << "Person A is related to person C." << endl;
	}
	relative = SameGene(personAGene2, personCGene1);
	if (relative == true)
	{
		outData << "Person A is related to person C." << endl;
	}
	relative = SameGene(personAGene2, personCGene2);
	if (relative == true)
	{
		outData << "Person A is related to person C." << endl;
	}
	//---------------------------------------------------------
	//Person A to Person D Comparison
	//---------------------------------------------------------***
	relative = SameGene(personAGene1, personDGene1);
	if (relative == true)
	{
		outData << "Person A is related to person D." << endl;
	}
	relative = SameGene(personAGene1, personDGene2);
	if (relative == true)
	{
		outData << "Person A is related to person D." << endl;
	}
	relative = SameGene(personAGene2, personDGene1);
	if (relative == true)
	{
		outData << "Person A is related to person D." << endl;
	}
	relative = SameGene(personAGene2, personDGene2);
	if (relative == true)
	{
		outData << "Person A is related to person D." << endl;
	}
	//---------------------------------------------------------
	//Person B to Person C Comparison
	//---------------------------------------------------------
	relative = SameGene(personBGene1, personCGene1);
	if (relative == true)
	{
		outData << "Person B is related to person C." << endl;
	}
	relative = SameGene(personBGene1, personCGene2);
	if (relative == true)
	{
		outData << "Person B is related to person C." << endl;
	}
	relative = SameGene(personBGene2, personCGene1);
	if (relative == true)
	{
		outData << "Person B is related to person C." << endl;
	}
	relative = SameGene(personBGene2, personCGene2);
	if (relative == true)
	{
		outData << "Person B is related to person C." << endl;
	}
	//---------------------------------------------------------
	//Person B to Person D Comparison
	//---------------------------------------------------------
	relative = SameGene(personBGene1, personDGene1);
	if (relative == true)
	{
		outData << "Person B is related to person D." << endl;
	}
	relative = SameGene(personBGene1, personDGene2);
	if (relative == true)
	{
		outData << "Person B is related to person D." << endl;
	}
	relative = SameGene(personBGene2, personDGene1);
	if (relative == true)
	{
		outData << "Person B is related to person D." << endl;
	}
	relative = SameGene(personBGene2, personDGene2);
	if (relative == true)
	{
		outData << "Person B is related to person D." << endl;
	}
	//---------------------------------------------------------
	//Person C to Person D Comparison
	//---------------------------------------------------------
	relative = SameGene(personCGene1, personDGene1);
	if (relative == true)
	{
		outData << "Person C is related to person D." << endl;
	}
	relative = SameGene(personCGene1, personDGene2);
	if (relative == true)
	{
		outData << "Person C is related to person D." << endl;
	}
	relative = SameGene(personCGene2, personDGene1);
	if (relative == true)
	{
		outData << "Person C is related to person D." << endl;
	}
	relative = SameGene(personCGene2, personDGene2);
	if (relative == true)
	{
		outData << "Person C is related to person D." << endl;
	}
	//---------------------------------------------------------

	//Close the inData and outData files.
	inData.close();
	outData.close();

	system("pause");	//this line of code asks the user to press any key before closing the program
	return 0;
}
/*
The purpose of this function is to check both gene arrays and count the number of base T genes in the 20th position.
This function will return a counter and based on that counter the main function will determine whether or not the person is normal,
a carrier, or if the person has the anemic mutation.
*/
int BaseTCheck(char gene1[], char gene2[])
{	//declaration of base T counter variable
	int baseCounter = 0;

	//If either gene block at position 20 (array[19]) then the baseTCounter will go up.
	if (gene1[19] == 'T')
	{
		baseCounter++;
	}
	if (gene2[19] == 'T')
	{
		baseCounter++;
	}

	return baseCounter;
}
/*
The process of the same SameGene subfunction is to test as to whether or not the gene blocks between two people are the same.
The subfunction receives two arrays, tests each individual array to see if the people are relatives, this will happen while loopContinue
remains true. If it stops remaining equal, then the value of valse will be sent to relativeChecker and they will be deemed unrelated.
This subfunction contains a for loop that counts from 0-443 (all spots of the array)
*/
bool SameGene(char gene1[], char gene2[])
{
	//Declaration of variables.
	bool relativeChecker = false;
	bool loopContinue = true;
	int i = 0;

	//This loop will continue while loopContinue remains true, and the counter is less than 444.
	while (loopContinue && i < 444)
	{
		//if at any point, the two gene blocks cease to equal each other, the loop will close.
		if (gene1[i] != gene2[i])
		{
			loopContinue = false;
		}
		i++;
	}

	//depending on the final value of loopContinue, it will determine the value of relativeChecker.
	if (loopContinue == true)
	{
		relativeChecker = true;
	}
	else
	{
		relativeChecker = false;
	}

	return relativeChecker;
}