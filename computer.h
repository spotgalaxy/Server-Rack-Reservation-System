#pragma once
#include "header.h"

typedef struct Computers {
	char Cid[7];
	char CRid[7];
	bool isOpen;
}Computers;

typedef struct CNode {
	Computers computer;
	CNode* curr;
	CNode* next;
}CNode;