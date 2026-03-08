#pragma once
#include "header.h"

typedef struct Comrooms {
	char CRid[7];
	int maxCom;
	bool isOpen;
}Comrooms;

typedef struct CRNode {
	Comrooms comroom;
	CRNode* curr;
	CRNode* next;
}CRNode;