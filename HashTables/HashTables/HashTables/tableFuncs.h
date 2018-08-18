#pragma once
#include "stdafx.h"
#include "linkedList.h"
#include <stdio.h>

using namespace std;

class tableFuncs
{
private:
	//linkedList *list = new linkedList[30];
	
public:
	int * myArray = new int[30];
	void hashFunction1(int things[], int myArray[]);
	void hashFunction2(int things[], int myArray[]);
	void displayTable(int myArray[]);
	int findKey(int key);
	tableFuncs();
	~tableFuncs();
};

