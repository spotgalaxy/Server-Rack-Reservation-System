#pragma once
#include "header.h"

typedef struct Records {
    char Uid[10];      
    char CRid[10];     
    char Cid[10];      
    char time[50];     
    int status;     // 0:待签到, 1:使用中(已签到), 2:已完成(已签退), 3:已取消
}Records;

typedef struct RNode {
    Records record;
    RNode* curr;
    RNode* next;
}RNode;

