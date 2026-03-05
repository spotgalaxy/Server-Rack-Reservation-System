#include "admin.h"

const char* adminPwd = "1";

void adminMnue() {
	while (1) {
		puts("\tAdmin Mnue\n");

		puts("1.Check all users\n2.Check comrooms info\n3.Check computers\n0.Back to Main Mnue\n");
		printf("Enter your choice: ");
		int choice;
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			checkAllUsers();
			break;
		case 2:
			checkRoomInfo();
			break;
		case 3:
			checkComputers();
			break;
		case 0:
			break;
		default:
			puts("\nWrong number! Choose again!\n");
		}

		if (0 == choice) {
			break;
		}
	}
	}

void checkAllUsers() {
	UNode* userList = loadUsersFromFile("userList.txt");

	showUsers(userList);

	if (userList == NULL) {
		puts("No users found in the system or file error.");
		system("pause");
		return;
	}

	freeList(userList);
}

void checkRoomInfo() {

}

void checkComputers() {

}
