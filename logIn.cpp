#include "logIn.h"


void logIn() {
    /*puts("Choice your identity: \n");
    puts("1.user\n2.admin\n");

    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        userLogIn();
        break;
    case 2:
        adminLogIn();
        break;
    default:
        puts("Enter incorrot number!");
        Sleep(1500);
    }*/
}

bool userLogIn(char* name, char* pwd) {
    /*char name[15] = { 0 };
    char pwd[21] = { 0 };

    printf("\nEnter your name: ");
    scanf("%s", name);
    printf("Enter your password: ");
    scanf("%s", pwd);

    puts("\nLoading...");*/

    bool res = false;

    // 1. 从文件加载用户链表
    UNode* userList = loadUsersFromFile("userList.txt");

    if (userList == NULL) {
        puts("No users found in the system or file error.");
        system("pause");
        return res;
    }

    // 2. 在链表中查找匹配的用户
    UNode* foundNode = findUser(userList, name, pwd);

    if (foundNode) {
        /*puts("\nLogIn success!");
        Sleep(1500);
        system("cls");

        userMnue();*/
        res = true;
    }
    //else {
    //    /*puts("LogIn fail! Incorrect username or password.");
    //    system("pause");*/
    //    
    //}

    // 3. 无论成功与否，都要释放链表内存
    freeList(userList);

    return res;
}

bool adminLogIn(char* pwd) {
    bool res = false;
    /*printf("\nEnter password: ");
    char pwd[21] = { 0 };
    scanf(" %s", pwd);*/

    if (strcmp(pwd, adminPwd) == 0) {
        /*puts("Success!");
        Sleep(1500);
        system("cls");

        adminMnue();*/
        res = true;
    }

    return res;
}