#pragma once
#include <ege/sys_edit.h>
#include <ege.h>
#include <graphics.h>
#include "header.h"
#include "ui_main.h"
#include "list.h"
#include "comroom.h"
#include "computer.h"
#include "ui_logIn.h"

typedef struct {
    int y_top;
    int y_bottom;
    CRNode* nodePtr;   // 当前行对应的节点
    CRNode* prevPtr;   // 当前行节点的前一个节点（用于删除）
    bool isValid;
} RowButtonInfo1;

void initUserFunc(char* Uid);
void booking(char* Uid);
void enterRoomDetail(CRNode* targetRoom, CNode* allComputers, char* Uid);
void modifyUserInfo(char* Uid);
void initModifyUserUI(UNode* node, UNode* head);
void checkRecord(char* Uid);
void initCheckRecord(RNode* current, int gap, int startx);