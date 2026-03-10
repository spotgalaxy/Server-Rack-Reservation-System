#pragma once
#include <ege/sys_edit.h>
#include <ege.h>
#include <graphics.h>
#include "header.h"
#include "comroom.h"
#include "list.h"

void initAdminComroom();
void checkComrooms();
void initCheckComrooms(CRNode* current, int gap, int startx);
void addComroom();
bool initAddComroom(CRNode** head);
void deleteComroom();
char* getComroomId();
bool initDeleteComroom(CRNode* current, CRNode** head, char* id);