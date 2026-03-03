#include "register.h"
#include "logIn.h"

int main() {
	while (1) {
		puts("1.log in\n2.register\n3.exit");
		int choice;
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			LogIn();
			break;
		case 2:
			system("cls");
			Register();
			break;
		case 3:
			exit(5);
		default:
			break;
		}
		system("cls");
	}
	
	return 0;
}