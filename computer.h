#pragma once
#include "header.h"

typedef struct Computers {
	char Cid[7];
	char CRid[7];
	bool isUsed;
}Computers;

typedef struct CNode {
	Computers computer;
	Computers* curr;
	Computers* next;
}CNode;