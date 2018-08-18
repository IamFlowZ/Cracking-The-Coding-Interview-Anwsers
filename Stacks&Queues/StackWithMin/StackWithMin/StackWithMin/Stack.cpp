#include "stdafx.h"
#include "Stack.h"


Stack::Stack()
{
}

void Stack::push(Node n)
{
	if (n.value < min_value->value)
	{
		min_value = &n;
		n.next = top;
		top = &n;
		count++;
	}
	else
	{
		top = &n;
		count++;
	}
}

Stack::Node Stack::pop()
{
	Node temp = *top;
	if (top == min_value)
	{
		Node* new_min = temp.next;
		for (int i = 0; i < count; i++)
		{
			if (new_min->value < new_min->next->value)
			{
				new_min = new_min->next;
			}
		}
		min_value = new_min;
	}
	top = temp.next;
	count--;
	return temp;
}

Stack::Node Stack::min()
{
	return *min_value;
}

bool Stack::isEmpty()
{
	return top == nullptr;
}

Stack::~Stack()
{
}
