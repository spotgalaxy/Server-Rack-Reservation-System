#pragma once
#include "header.h"
#include "user.h"
#include "comroom.h"
#include "computer.h"



// 创建新节点
UNode* createNode(Users user);

// 向链表头部添加节点
void addNode(UNode** head, Users user);

// 从文件加载用户数据到链表
UNode* loadUsersFromFile(const char* filename);

// 将链表数据保存回文件 (覆盖写入)
void saveUsersToFile(UNode* head, const char* filename);

// 在链表中查找用户 (匹配用户名和密码)
UNode* findUser(UNode* head, const char* name, const char* pwd);

// 获取链表中最大的ID数值 (用于生成新ID)
//int getMaxId(UNode* head);

// 释放链表内存
void freeList(UNode* head);

void showUsers(UNode* head);



CRNode* createNode(Comrooms comroom);

void addNode(CRNode** head, Comrooms comroom);

void freeList(CRNode* head);

CRNode* loadComroomsFromFile(const char* filename);

int getMaxId(CRNode* head);

void saveComroomsToFile(CRNode* head, const char* filename);

CRNode* findComrooms(CRNode* head, const char* CRid);

void showComrooms(CRNode* head);



CNode* createNode(Computers computer);

void addNode(CNode** head, Computers computer);

void freeList(CNode* head);

CNode* loadComputersFromFile(const char* filename);

int getMaxId(CNode* head);

void saveComputersToFile(CNode* head, const char* filename);

CNode* findComputers(CNode* head, const char* CRid, const char* Cid);

void showComputers(CNode* head);
