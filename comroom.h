#pragma once
#include "header.h"

typedef struct Comrooms {
	char CRid[7];
	bool isOpen;
}Comrooms;

typedef struct CRNode {
	Comrooms comroom;
	CRNode* curr;
	CRNode* next;
}CRNode;