#pragma once
#include "header.h"
#include "user.h"
#include "list.h"
#include "admin.h"

void logIn();
bool userLogIn(char* name, char* pwd);
bool adminLogIn(char* pwd);