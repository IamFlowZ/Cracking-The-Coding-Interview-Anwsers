#pragma once
#include "stdafx.h"
#include "Node.h"

using namespace std;

class List
{
private:

public:
	struct Item {
		Node* n;
		Node* next;
	};

public:
	List();
	void push(Node n);
	~List();
};

