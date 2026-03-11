#pragma once
#include <ege/sys_edit.h>
#include <ege.h>
#include <graphics.h>
#include "header.h"
#include "ui_main.h"
#include "list.h"
#include "comroom.h"
#include "computer.h"

typedef struct {
    int y_top;
    int y_bottom;
    CRNode* nodePtr;   // 当前行对应的节点
    CRNode* prevPtr;   // 当前行节点的前一个节点（用于删除）
    bool isValid;
} RowButtonInfo1;

void initUserFunc();
void booking();

void enterRoomDetail(CRNode* targetRoom, CNode* allComputers);
