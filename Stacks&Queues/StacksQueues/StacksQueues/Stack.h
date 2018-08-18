#pragma once

using namespace std;

class Stack
{

public:
	struct Node
	{
		int data;
		Node* next = nullptr;
	};
	
private:
	int count = 0;
	Node* top = NULL;

public:
	Stack();
	void push(int data);
	int pop();
	Node peek(int data);
	void printValue(Node n);
	bool isEmpty();
	~Stack();
};

