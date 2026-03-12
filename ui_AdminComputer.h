#pragma once
#include "ui_AdminComroom.h"
#include "computer.h"

typedef struct {
    int y_top;
    int y_bottom;
    CNode* nodePtr;   // 当前行对应的节点
    CNode* prevPtr;   // 当前行节点的前一个节点（用于删除）
    bool isValid;
} RowButtonInfo;

void initAdminComputer();
void checkComputers();
void initCheckComputers(CNode* head, CRNode* belong, char* id);
void addComputer();
bool initAddComputer(CNode** head, CRNode* belong, char* id);
void modifyComputer();
bool initModifyComputer(CNode* head, CRNode* belong, char* id);
void deleteComputer();
bool initDeleteComputer(CNode* head, CRNode* belong, char* id);