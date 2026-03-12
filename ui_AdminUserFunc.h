#pragma once
#include <ege/sys_edit.h>
#include <ege.h>
#include <graphics.h>
#include "header.h"
#include "user.h"
#include "list.h"

void initAdminUserFunc();
void checkUsers();
void initCheckUsers(UNode* current, int gap, int startx);
void modifyUser();
void initModifyUser(UNode* current, UNode* head);
char* getUserId();
void deleteUser();
bool initDeleteUser(UNode* current, UNode** head, char* id);
