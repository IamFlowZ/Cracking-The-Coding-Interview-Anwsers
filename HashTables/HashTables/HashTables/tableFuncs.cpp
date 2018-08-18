#include "stdafx.h"
#include "tableFuncs.h"


tableFuncs::tableFuncs()
{
	cout << "Array init to -1" << endl;
	for (int i = 0; i < 30; i++)
	{
		myArray[i] = -1;
	}
}

void tableFuncs::hashFunction1(int things[], int myArray[])
{
	//Loops over every element in the things array, hashes out an index for them,
	//then inserts them into the array at that position, if there's a collision, 
	//it simply loops through looking for the next open slot
	for (int i = 0; i < 30; i++)
	{
		int hashedValue = things[i] % 29;

		cout << "Mod index: " << hashedValue << " for " << things[i] << endl;

		while(myArray[hashedValue] != -1)
		{
			++hashedValue;
			cout << "Collision occured, trying: " << hashedValue << endl;
			hashedValue %= 30;
		}
		myArray[hashedValue] = things[i];
	}

}

void tableFuncs::hashFunction2(int things[], int myArray[])
{

}

void tableFuncs::displayTable(int myArray[])
{
	int increment = 0;

	for (int i = 0; i < 3; i++)
	{
		increment += 10;
		cout << endl;
		cout << "---------------------------------------------------" << endl;
		for (int j = increment - 10; j < increment; j++)
		{
			cout << "| " << j << " " << flush;
		}

		cout << "|" << flush;
		cout << endl;
		cout << "---------------------------------------------------" << endl;


		for (int j = increment - 10; j < increment; j++)
		{
			if (myArray[j] == -1)
			{
				cout << "|    " << flush;
			}
			else
				cout << "| " << myArray[j] << " " << flush;
		}

		cout << "|" << flush;
		cout << endl;
		cout << "---------------------------------------------------" << endl;
	}
}

int tableFuncs::findKey(int key)
{
	return 0;
}

tableFuncs::~tableFuncs()
{
	delete[] myArray;
}
