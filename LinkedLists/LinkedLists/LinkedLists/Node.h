#pragma once
class Node
{
private:
	Node* next;
	int data;
public:
	Node();
	Node(int data);
	void appendToTail(int data);
	Node deleteNode(Node node, int d);
	~Node();
};

