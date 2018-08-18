#pragma once
#include "stdafx.h"

struct Node {
	int value;
	Node* leftChild = nullptr;
	Node* rightChild = nullptr;
};