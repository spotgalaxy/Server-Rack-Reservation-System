#pragma once
#include <ege.h>
#include <graphics.h>
#include "header.h"
#include "ui_main.h"
#include "ui_AdminUserFunc.h"
#include "ui_AdminComroom.h"
#include "ui_AdminComputer.h"
#include "record.h"
#include "list.h"

typedef struct DateStat {
	char date[20];
	int count;
} DateStat;

void initAdminFunc();

void initRecordFunc();
void checkAllRecords();
void countRecords();