#pragma once
#include "stdafx.h"
#include "Node.h"
#include "List.h"

using namespace std;

class Tree
{
public:
	Node* root = nullptr;
	List* layerTable;
private:
	
public:
	Tree();
	void addNode(int value);
	void inOrderTrav(Node node);
	void preOrderTrav(Node node);
	void postOrderTrav(Node node);
	void visit(Node node);
	~Tree();
};

