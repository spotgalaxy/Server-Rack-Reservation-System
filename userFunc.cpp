#include "user.h"

void userMnue() {
	puts("User Mnue\n");
	puts("1.Booking\n2.Check own booked\n3.Check computer site\n");

	printf("Enter your choice: ");

	while (1) {
		int choice;
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			Booking();
			break;
		case 2:
			//check
			break;
		case 3:
			//check com
			break;
		default:
			puts("Wrong number!");
		}
	}
	
}

void Booking() {
	
}