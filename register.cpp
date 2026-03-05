#include "register.h"

void Register() {
    Users newUser = { 0 };

    printf("Enter your name: ");
    scanf("%s", newUser.name);

    printf("Enter your password: ");
    scanf(" %s", newUser.password);

    printf("Enter your tel: ");
    scanf(" %s", newUser.tel);

    // 1. 从文件加载现有用户到链表
    UNode* userList = loadUsersFromFile("userList.txt");

    // 2. 计算新用户的ID (最大ID + 1)
    int maxId = getMaxId(userList);
    char utid[7];
    sprintf(utid, "U%05d", maxId + 1);
    strcpy(newUser.Uid, utid);
    newUser.isLegal = true;

    // 3. 将新用户添加到链表
    addNode(&userList, newUser);

    // 4. 将整个链表保存回文件 (覆盖原文件)
    saveUsersToFile(userList, "userList.txt");

    // 5. 释放链表内存
    freeList(userList);

    printf("Registration successful!\nYour ID is: %s\n", newUser.Uid);
    puts("\nFinished!");
    Sleep(1500);
}