#include "list.h"

//用户管理链表

// 创建新节点
UNode* createNode(Users user) {
    // 分配节点内存
    UNode* newNode = (UNode*)malloc(sizeof(UNode));
    if (!newNode) {
        perror("Failed to allocate memory for UNode");
        return NULL;
    }

    newNode->user = user;

    // 初始化指针
    newNode->next = NULL;
    newNode->curr = NULL;

    return newNode;
}

void addNode(UNode** head, Users user) {
    UNode* newNode = createNode(user);
    if (!newNode) return;

    // 如果链表为空，新节点即为头节点
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // 如果链表不为空，遍历找到最后一个节点
    UNode* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    // 将最后一个节点的 next 指向新节点
    current->next = newNode;
}

// 从文件加载用户到链表
UNode* loadUsersFromFile(const char* filename) {
    UNode* head = NULL;
    FILE* fp = fopen(filename, "r");

    if (!fp) {
        // 文件不存在视为空链表，不报错
        return NULL;
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fp)) {
        // 去除换行符
        buffer[strcspn(buffer, "\n\r")] = '\0';
        if (strlen(buffer) == 0) continue;

        Users tempUser = { 0 };
        char isL[8] = { 0 };
       
        int count = sscanf(buffer, "%8[^ ] %14[^ ] %20[^ ] %11[^ ] %6[^\n]",
            tempUser.Uid, tempUser.name, tempUser.password, tempUser.tel, isL);

        if (strcmp(isL, "合法") == 0) {
            tempUser.isLegal = true;
        }
        else {
            tempUser.isLegal = false;
        }

        if (count >= 4) {
            addNode(&head, tempUser);
        }
    }

    fclose(fp);
    return head;
}

// 保存链表到文件
void saveUsersToFile(UNode* head, const char* filename) {
    FILE* fp = fopen(filename, "w");
    if (!fp) {
        perror("Failed to open file for saving");
        return;
    }

    UNode* current = head;
    while (current != NULL) {
        // 访问节点内的 user 成员
        fprintf(fp, "%s %s %s %s %s\n",
            current->user.Uid,
            current->user.name,
            current->user.password,
            current->user.tel,
            current->user.isLegal ? "合法" : "不合法"
            );

        current = current->next;
    }

    fclose(fp);
}

// 查找用户
UNode* findUser(UNode* head, const char* name, const char* pwd) {
    UNode* current = head;
    while (current != NULL) {
        // 比较节点内 user 成员的数据
        if (strcmp(current->user.name, name) == 0 && strcmp(current->user.password, pwd) == 0) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

// 释放链表
void freeList(UNode* head) {
    UNode* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;

        free(temp);
    }
}

void deleteNode(UNode** head, const char* Uid) {
    if (head == NULL) {
        return;
    }

    if (strcmp((*head)->user.Uid, Uid) == 0) {
        UNode* temp = (*head);
        (*head) = (*head)->next;
        free(temp);
        return;
    }

    UNode* prev = (*head);
    UNode* current = (*head)->next;

    while (current != NULL) {
        if (strcmp(current->user.Uid, Uid) == 0) {
            prev->next = current->next;
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }
}

void showUsers(UNode* head) {
    UNode* current = head;
    while (current != NULL) {
        puts("***********************************************\n");
        printf("%5s\t %10s\t %5s\t %10s\n", "ID", "Name", "Tel", "Ability");
        printf("%s\t %2s\t %5s\t %10s\n\n", current->user.Uid, current->user.name, current->user.tel, current->user.isLegal ? "true" : "false");
        puts("***********************************************\n");

        current = current->next;
    }
}

//机房管理链表

// 创建新节点
CRNode* createNode(Comrooms comroom) {
    CRNode* newNode = (CRNode*)malloc(sizeof(CRNode));
    if (!newNode) {
        perror("Failed to allocate memory for CRNode");
        return NULL;
    }

    newNode->comroom = comroom;

    // 初始化指针
    newNode->next = NULL;
    newNode->curr = NULL;

    return newNode;
}

void addNode(CRNode** head, Comrooms comroom) {
    CRNode* newNode = createNode(comroom);
    if (!newNode) return;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    CRNode* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
}

void freeList(CRNode* head) {
    CRNode* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;

        free(temp);
    }
}

CRNode* loadComroomsFromFile(const char* filename) {
    CRNode* head = NULL;
    FILE* fp = fopen(filename, "r");

    if (!fp) {
        // 文件不存在视为空链表，不报错
        return NULL;
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fp)) {
        // 去除换行符
        buffer[strcspn(buffer, "\n\r")] = '\0';
        if (strlen(buffer) == 0) continue;

        Comrooms tempComrooms = { 0 };

        char isO[8] = { 0 };

        sscanf(buffer, "%9[^ ] %d %6[^\n]",
            tempComrooms.CRid, &tempComrooms.maxCom, isO);

        if (strcmp(isO, "开放") == 0) {
            tempComrooms.isOpen = true;
        }
        else {
            tempComrooms.isOpen = false;
        }

        addNode(&head, tempComrooms);
        
    }

    fclose(fp);

    return head;
}

//获取最大ID
int getMaxId(CRNode* head) {
    int maxId = 0;
    CRNode* current = head;

    while (current != NULL) {
        const char* crid = current->comroom.CRid;
        if (crid && strlen(crid) > 1 && crid[0] == 'C' && crid[1] == 'R') {
            char numPart[8] = { 0 };
            strncpy(numPart, crid + 2, 5);

            char* endPtr;
            long val = strtol(numPart, &endPtr, 10);
            if (val > maxId) {
                maxId = (int)val;
            }
        }
        current = current->next;
    }
    return maxId;
}

void saveComroomsToFile(CRNode* head, const char* filename) {
    FILE* fp = fopen(filename, "w");
    if (!fp) {
        perror("Failed to open file for saving");
        return;
    }

    CRNode* current = head;
    while (current != NULL) {
        // 访问节点内的 comroom 成员
        fprintf(fp, "%s %d %s\n",
            current->comroom.CRid,
            current->comroom.maxCom,
            current->comroom.isOpen ? "开放" : "不开放"
            );

        current = current->next;
    }

    fclose(fp);
}

CRNode* findComrooms(CRNode* head, const char* CRid) {
    CRNode* current = head;
    while (current != NULL) {
        if (strcmp(CRid, current->comroom.CRid) == 0) {
            return current;
        }
    }
    return NULL;
}

void showComrooms(CRNode* head) {
    CRNode* current = head;
    while (current != NULL) {
        puts("***********\n");
        printf("%s\t %5s\t %5s\n", "CRID", "maxCom", "Open");
        printf("%s\t %5d\t %5s\n\n", current->comroom.CRid, current->comroom.maxCom, current->comroom.isOpen ? "true" : "false");
        puts("***********\n");
    }
}

void deleteNode(CRNode** head, const char* CRid) {
    if (head == NULL) {
        return;
    }

    if (strcmp((*head)->comroom.CRid, CRid) == 0) {
        CRNode* temp = (*head);
        (*head) = (*head)->next;
        free(temp);
        return;
    }

    CRNode* prev = (*head);
    CRNode* current = (*head)->next;

    while (current != NULL) {
        if (strcmp((*head)->comroom.CRid, CRid) == 0) {
            prev->next = current->next;
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }
}

//计算机管理链表

CNode* createNode(Computers computer) {
    CNode* newNode = (CNode*)malloc(sizeof(CNode));
    if (!newNode) {
        perror("Failed to allocate memory for CNode");
        return NULL;
    }

    newNode->computer = computer;

    newNode->curr = NULL;
    newNode->next = NULL;

    return newNode;
}

void addNode(CNode** head, Computers computer) {
    CNode* newNode = createNode(computer);
    if (!newNode) return;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    CNode* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
}

void freeList(CNode* head) {
    CNode* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;

        free(temp);
    }
}

CNode* loadComputersFromFile(const char* filename) {
    CNode* head = NULL;
    FILE* fp = fopen(filename, "r");

    if (!fp) {
        // 文件不存在视为空链表，不报错
        return NULL;
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fp)) {
        // 去除换行符
        buffer[strcspn(buffer, "\n\r")] = '\0';
        if (strlen(buffer) == 0) continue;

        Computers tempComputers = { 0 };

        char isO[8] = { 0 };

        sscanf(buffer, "%8[^ ] %8[^ ] %6[^\n]",
            tempComputers.CRid, tempComputers.Cid, isO);

        if (strcmp(isO, "开放") == 0) {
            tempComputers.isOpen = true;
        }
        else {
            tempComputers.isOpen = false;
        }

        addNode(&head, tempComputers);

    }

    fclose(fp);


    return head;
}

int getMaxId(CNode* head, char* CRid) {
    int maxId = 0;
    CNode* current = head;

    while (current != NULL) {
        const char* cid = current->computer.Cid;
        if (cid && strlen(cid) > 1 && cid[0] == 'C' && strcmp(CRid, current->computer.CRid) == 0) {
            char numPart[7] = { 0 };
            strncpy(numPart, cid + 1, 5);

            char* endPtr;
            long val = strtol(numPart, &endPtr, 10);
            if (val > maxId) {
                maxId = (int)val;
            }
        }
        current = current->next;
    }

    return maxId;
}

void saveComputersToFile(CNode* head, const char* filename) {
    FILE* fp = fopen(filename, "w");
    if (!fp) {
        perror("Failed to open file for saving");
        return;
    }

    CNode* current = head;
    while (current != NULL) {
        // 访问节点内的 computer 成员
        fprintf(fp, "%s %s %s\n",
            current->computer.CRid,
            current->computer.Cid,
            current->computer.isOpen ? "开放" : "不开放"
        );

        current = current->next;
    }

    fclose(fp);
}

CNode* findComputers(CNode* head, const char* CRid, const char* Cid) {
    CNode* current = head;
    while (current != NULL) {
        if (strcmp(CRid, current->computer.CRid) == 0 && strcmp(Cid, current->computer.Cid) == 0) {
            return current;
        }
    }
    return NULL;
}

void showComputers(CNode* head) {
    CNode* current = head;
    while (current != NULL) {
        puts("***********\n");
        printf("%s\t %5s\t %5s\n", "CRID", "CID", "Open");
        printf("%s\t %5s\t %5s\n\n", current->computer.CRid, current->computer.Cid, current->computer.isOpen ? "true" : "false");
        puts("***********\n");
    }
}

void deleteNode(CNode** head, const char* CRid, const char* Cid) {
    if (head == NULL) {
        return;
    }

    if (strcmp((*head)->computer.CRid, CRid) == 0 && strcmp((*head)->computer.Cid, Cid) == 0) {
        CNode* temp = (*head);
        (*head) = (*head)->next;
        free(temp);
        return;
    }

    CNode* prev = (*head);
    CNode* current = (*head)->next;

    while (current != NULL) {
        if (strcmp((*head)->computer.CRid, CRid) == 0 && strcmp((*head)->computer.Cid, Cid) == 0) {
            prev->next = current->next;
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }
}