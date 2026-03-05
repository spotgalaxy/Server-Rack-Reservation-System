#include "admin.h"

char adminPwd[21] = "123456";

void adminMnue() {
	puts("Admin Mnue\n");

	puts("1.Check all users\n2.Check comrooms info\n3.Check computers\n");
	printf("Enter your choice: ");
	int choice;
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		//
		break;
	case 2:
		//
		break;
	case 3:
		//
		break;
	default:
		puts("Wrong number!");
	}
}