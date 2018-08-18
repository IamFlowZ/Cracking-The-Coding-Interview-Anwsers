#pragma once

using namespace std;

class Stack
{
//The node struct along with the instance variables
public:
	struct Node
	{
		int value;
		struct Node* next;
	};
	Node* min_value = nullptr;
	Node* top = nullptr;
	int count = 0;

//Object methods
public:
	Stack();
	void push(Node n);
	Node pop();
	Node min();
	bool isEmpty();

	~Stack();
};

