#include "stdafx.h"
#include "Graph.h"


Graph::Graph()
{
}

bool Graph::breadthFirstSearch(Node* node)
{

}

//working off the assumption that the data set is large enough, that the cost of searching from the root of the tree out to any given point, will average out.
bool Graph::routeExists(Node* firstNode, Node* secondNode)
{
	bool firstPath, secondPath;

	firstPath = breadthFirstSearch(firstNode);
	secondPath = breadthFirstSearch(secondNode);

	if (firstPath == 1 && secondPath == 1)
	{
		return true;
	}
	else return false;

}

void Graph::insert(int value)
{

}

void Graph::delete_node(Node n)
{

}

Graph::~Graph()
{
}
