#include "stdafx.h"
#include "Node.h"


Node::Node()
{
	next = NULL;
}

Node::Node(int d)
{
	data = d;
}

void Node::appendToTail(int data)
{
	Node newNode = Node(data);
	while (next != NULL)
	{
		next = &newNode;
	}
}

Node Node::deleteNode(Node head, int d)
{
	//stores the node for scope level access
	Node n = head;

	//if the data in the node matches the data of the node to be deleted, then the head should be that nodes next
	if (n.data == d)
	{
		return *head.next;
	}

	//while there's another node, 
	//if that next nodes data is the data of the node we're looking for, 
	//then set the "next" pointer to the to-be-deleted node's next value
	//else go to the next node, and try again.
	while (n.next != NULL)
	{
		if (next->data == d)
		{
			n.next = n.next->next;
			return head;
		}
		n = *next;
	}
	return head;
}

Node::~Node()
{

}
