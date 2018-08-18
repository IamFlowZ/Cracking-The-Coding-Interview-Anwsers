#include "stdafx.h"
#include "Tree.h"


Tree::Tree()
{
	
}

void Tree::addNode(int value)
{
	Node newNode;
	newNode.value = value;
	if (root == nullptr)
	{
		root = &newNode;
	}
	/*else if (focusNode.value > newNode.value && focusNode.leftChild != NULL)
	{
		focusNode = *focusNode.leftChild;
	}
	else if (root->value < newNode.value)
	{
		root->rightChild = &newNode;
	}*/
	Node focusNode = *root;
	while (focusNode.leftChild != nullptr || focusNode.rightChild != nullptr)
	{
		if (newNode.value < focusNode.value)
		{
			focusNode = *focusNode.leftChild;
		}
		else if (newNode.value > focusNode.value)
		{
			focusNode = *focusNode.rightChild;
		}
	}

	if (newNode.value < focusNode.value)
	{
		focusNode.leftChild = &newNode;
	}
	else if (newNode.value > focusNode.value)
	{
		focusNode.rightChild = &newNode;
	}
}

void Tree::inOrderTrav(Node node)
{
	if (node.leftChild != NULL || node.rightChild != NULL)
	{
		inOrderTrav(*node.leftChild);
		visit(node);
		inOrderTrav(*node.rightChild);
	}
}

void Tree::preOrderTrav(Node node)
{

}

void Tree::postOrderTrav(Node node)
{

}

void Tree::visit(Node node)
{
	cout << node.value << endl;
}

Tree::~Tree()
{
}
