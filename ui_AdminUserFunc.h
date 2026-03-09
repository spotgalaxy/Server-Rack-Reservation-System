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
char* initModifyUser();
void deleteUser();
