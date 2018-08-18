#pragma once
#include "stdafx.h"

class linkedList
{
private:
	int value;
	int *nextValue;
public:
	linkedList();
	void addValue(int value);
	~linkedList();
};

