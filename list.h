#pragma once
#include "header.h"

typedef struct Node {
	void* data;
	Node* curr;
	Node* next;
}Node;

//Node* createNode(void* data);
//void addNode(Node** head, Node* newNode);
//void freeList(Node* head);
//int getListLength(Node* head);