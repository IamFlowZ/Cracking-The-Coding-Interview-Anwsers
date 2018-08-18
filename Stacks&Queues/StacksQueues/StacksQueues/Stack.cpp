#include "stdafx.h"
#include "Stack.h"


Stack::Stack()
{
	
}

void Stack::push(int data)
{
	cout << "Adding value to top of stack..." << endl;
	Node *n = new Node;
	n->data = data;
	n->next = top;
	top = n;
	cout << "Added, " << n->data << endl;
	
}

int Stack::pop()
{
	if (isEmpty())
	{
		cout << "Attempting to pop from an empty stack." << endl;
		exit(1);
	}
	else
	{
		int temp = top->data;
		Node* oldtop = top;
		top = oldtop->next;
		delete oldtop;
		count--;
		return temp;
	}
	
}

Stack::Node Stack::peek(int data)
{
	Node* temp = top;
	while (temp->next != NULL)
	{
		int steps = 0;
		if (temp->data == data)
		{
			cout << "Found node containg: " << data << "after " << steps << endl;
			return *temp;
		}
		else
			cout << "Looking at next node..." << endl;
			temp = temp->next;
	}
	if (temp->data != data)
	{
		cout << "No nodes contained: " << data << endl;
	}
	
}

void Stack::printValue(Node n)
{
	cout << n.data << endl;
}

bool Stack::isEmpty()
{
	return (top == NULL);
}

Stack::~Stack()
{
	while (!isEmpty())
	{
		pop();
	}
}
