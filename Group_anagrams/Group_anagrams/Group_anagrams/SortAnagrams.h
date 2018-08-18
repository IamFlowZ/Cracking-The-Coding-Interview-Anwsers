#include "stdafx.h"

using namespace std;
#pragma once
class SortAnagrams
{
public:
	struct Tuple
	{
		int sum;
		int key;
	};

public:
	SortAnagrams();
	string* SortValues(string* values);
	~SortAnagrams();
};

