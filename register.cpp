#include "register.h"
#include "user.h"

void Register() {
	Users newUser = { 0 };
	Users user = { 0 };

	int id = 0;

	char buffer[256];

	printf("Enter your name: ");
	scanf("%s", newUser.name);

	printf("Enter your password: ");
	scanf(" %s", newUser.password);

	printf("Enter your tel: ");
	scanf(" %s", newUser.tel);


	puts("Loading...");
	newUser.isLegal = true;

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

		char tuid[7] = { 0 };
		memcpy(tuid, user.Uid + 1, 5);

		char* end;

		id = (int)strtol(tuid, &end, 10);
	}
	char utid[7];

	sprintf(utid, "U%05d", id + 1);

	strcpy(newUser.Uid, utid);

	fprintf(fp, "%s %s %s %s\n",
		newUser.Uid,
		newUser.name,
		newUser.password,
		newUser.tel
	);

	fclose(fp);

	puts("Finished!");
}