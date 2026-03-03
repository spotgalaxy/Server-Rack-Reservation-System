#include "logIn.h"
#include "user.h"

void LogIn() {
	Users user = { 0 };
	char buffer[256] = { 0 };

	bool isFound = false;

	printf("Enter your name: ");
	char name[15] = { 0 };
	scanf("%s", name);
	printf("Enter your password: ");
	char pwd[21] = { 0 };
	scanf("%s", pwd);

	FILE* fp = fopen("userList.txt", "a+");

	if (!fp) {

		perror("open failed");
		return;
	}

	while (fgets(buffer, sizeof(buffer), fp)) {
		buffer[strcspn(buffer, "\n")] = '\0';

		sscanf(buffer, "%6[^ ] %14[^ ] %20[^ ] %11[^ ]",
			user.Uid,
			user.name,
			user.password,
			user.tel
		);

		//printf("%s %s %s %s\n", user.Uid, user.name, user.password, user.tel);

		if (strcmp(user.name, name) == 0 && strcmp(user.password, pwd) == 0) {
			isFound = true;
			break;
		}
	}

	if (isFound) {
		puts("LogIn success!");
		Sleep(1500);

		//用户功能
	}
	else {
		puts("LogIn fail!");
		system("pause");
	}
}