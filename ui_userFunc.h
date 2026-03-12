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

typedef struct {
    RNode* nodePtr;
    int btnAction_x, btnAction_y, btnAction_w, btnAction_h; // 签到/签退按钮
    int btnCancel_x, btnCancel_y, btnCancel_w, btnCancel_h; // 退订按钮
    bool hasActionBtn;
    bool hasCancelBtn;
    char actionText[10];
} RowInfo;

void initUserFunc(char* Uid);
void booking(char* Uid);
void enterRoomDetail(CRNode* targetRoom, CNode* allComputers, char* Uid);
void modifyUserInfo(char* Uid);
void initModifyUserUI(UNode* node, UNode* head);
void checkRecord(char* Uid);
void initCheckRecord(RNode* current, int gap, int startx);
void signIn(char* Uid);