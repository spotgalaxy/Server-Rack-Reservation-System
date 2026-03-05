#include "list.h"


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
       
        int count = sscanf(buffer, "%6[^ ] %14[^ ] %20[^ ] %11[^ ]",
            tempUser.Uid, tempUser.name, tempUser.password, tempUser.tel);

        if (count >= 4) {
            tempUser.isLegal = true;
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
        fprintf(fp, "%s %s %s %s\n",
            current->user.Uid,
            current->user.name,
            current->user.password,
            current->user.tel);

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

// 获取最大ID
int getMaxId(UNode* head) {
    int maxId = 0;
    UNode* current = head;

    while (current != NULL) {
        const char* uid = current->user.Uid;
        if (uid && strlen(uid) > 1 && uid[0] == 'U') {
            char numPart[7] = { 0 };
            strncpy(numPart, uid + 1, 5);

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

// 释放链表
void freeList(UNode* head) {
    UNode* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;

        free(temp);
    }
}