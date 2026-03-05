#pragma once
#include "header.h"

typedef struct Users {
	char Uid[7];
	char name[15];
	char password[21];
	char tel[12];
	bool isLegal;
}Users;

typedef struct UNode {
	Users user;
	UNode* curr;
	UNode* next;
}UNode;

void userMnue();
void Booking();