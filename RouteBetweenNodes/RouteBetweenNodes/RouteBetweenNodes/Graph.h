#pragma once
#include "stdafx.h"

using namespace std;

class Graph
{
private:
	static const int NUM_OF_NODES;
public:
	struct Node {
		int value;
		Node* children;
	};

	Node* root;
	Node* nodes = new Node[NUM_OF_NODES]; //I'll put the array contaning all of the children on the heap

	bool breadthFirstSearch(Node* node);
	bool routeExists(Node*firstNode, Node* secondNode);
	void insert(int value);
	void delete_node(Node n);
public:
	Graph();
	~Graph();
};

