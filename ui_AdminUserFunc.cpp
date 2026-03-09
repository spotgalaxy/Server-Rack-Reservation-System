#include "ui_AdminuserFunc.h"

void initAdminUserFunc() {
	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(330, 45, "管理用户");

	setfont(40, 0, "楷体");

	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	int gw = textwidth("查看用户");
	int gh = textheight("查看用户");

	const int gap = 20;

	fillrect(370 - gap, 200 - gap, 370 + gw + gap, 200 + gh + gap);

	outtextxy(370, 200, "查看用户");

	fillrect(370 - gap, 300 - gap, 370 + gw + gap, 300 + gh + gap);

	outtextxy(370, 300, "修改用户");

	fillrect(370 - gap, 400 - gap, 370 + gw + gap, 400 + gh + gap);

	outtextxy(370, 400, "删除用户");

	fillrect(370 - gap, 500 - gap, 370 + gw + gap, 500 + gh + gap);

	outtextxy(410, 500, "返回");


	while (1) {
		while (mousemsg()) {
			mouse_msg msg = getmouse();

			int mx = msg.x;
			int my = msg.y;

			bool yis = false;
			bool jis = false;
			bool jl = false;
			bool fis = false;

			if (mx >= 370 - gap && mx <= 370 + gw + gap && my >= 200 - gap && my <= 200 + gh + gap) {
				yis = true;
			}

			if (mx >= 370 - gap && mx <= 370 + gw + gap && my >= 300 - gap && my <= 300 + gh + gap) {
				jis = true;
			}

			if (mx >= 370 - gap && mx <= 370 + gw + gap && my >= 400 - gap && my <= 400 + gh + gap) {
				jl = true;
			}

			if (mx >= 370 - gap && mx <= 370 + gw + gap && my >= 500 - gap && my <= 500 + gh + gap) {
				fis = true;
			}

			if (yis) {
				setfillcolor(HOTPINK);

				fillrect(370 - gap, 200 - gap, 370 + gw + gap, 200 + gh + gap);

				outtextxy(370, 200, "查看用户");
			}

			if (jis) {
				setfillcolor(HOTPINK);

				fillrect(370 - gap, 300 - gap, 370 + gw + gap, 300 + gh + gap);

				outtextxy(370, 300, "修改用户");
			}

			if (jl) {
				setfillcolor(HOTPINK);

				fillrect(370 - gap, 400 - gap, 370 + gw + gap, 400 + gh + gap);

				outtextxy(370, 400, "删除用户");
			}

			if (fis) {
				setfillcolor(HOTPINK);

				fillrect(370 - gap, 500 - gap, 370 + gw + gap, 500 + gh + gap);

				outtextxy(410, 500, "返回");
			}

			if (!yis) {
				setfillcolor(PINK);

				fillrect(370 - gap, 200 - gap, 370 + gw + gap, 200 + gh + gap);

				outtextxy(370, 200, "查看用户");
			}

			if (!jis) {
				setfillcolor(PINK);

				fillrect(370 - gap, 300 - gap, 370 + gw + gap, 300 + gh + gap);

				outtextxy(370, 300, "修改用户");
			}

			if (!jl) {
				setfillcolor(PINK);

				fillrect(370 - gap, 400 - gap, 370 + gw + gap, 400 + gh + gap);

				outtextxy(370, 400, "删除用户");
			}

			if (!fis) {
				setfillcolor(PINK);

				fillrect(370 - gap, 500 - gap, 370 + gw + gap, 500 + gh + gap);

				outtextxy(410, 500, "返回");
			}

			if (mx >= 370 - gap && mx <= 370 + gw + gap && my >= 200 - gap && my <= 200 + gh + gap && msg.is_left() && msg.is_up()) {
				checkUsers();

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(330, 45, "管理用户");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

			if (mx >= 370 - gap && mx <= 370 + gw + gap && my >= 300 - gap && my <= 300 + gh + gap && msg.is_left() && msg.is_up()) {
				modifyUser();

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(330, 45, "管理用户");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

			if (mx >= 370 - gap && mx <= 370 + gw + gap && my >= 400 - gap && my <= 400 + gh + gap && msg.is_left() && msg.is_up()) {
				deleteUser();

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(330, 45, "管理用户");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

			if (mx >= 370 - gap && mx <= 370 + gw + gap && my >= 500 - gap && my <= 500 + gh + gap && msg.is_left() && msg.is_up()) {
				return;
			}
		}
	}

	getch();
}

void checkUsers() {
	UNode* userList = loadUsersFromFile("userList.txt");

	if (userList == NULL) {
		/*puts("No users found in the system or file error.");
		system("pause");*/
		return;
	}

	UNode* current = userList;

	int gap = 130;
	int startx = 275;

	cleardevice();

	setfont(20, 0, "楷体");
	xyprintf(startx, gap, "%6s\t %8s\t %10s\t %10s\n", "学号", "名字", "联系方式", "合法性");

	while (current != NULL) {
		gap += 20;
		initCheckUsers(current, gap, startx);
		current = current->next;
	}

	freeList(userList);

	getch();
}

void initCheckUsers(UNode* current, int gap, int startx) {

	setfont(60, 0, "华文行楷");
	outtextxy(330, 45, "查看用户");
	setfont(20, 0, "楷体");
	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	
	xyprintf(startx, gap, "%s\t %6s\t %9s\t %10s\n", current->user.Uid, current->user.name, current->user.tel, current->user.isLegal ? "合法" : "不合法");
	/*int ugap = textwidth(current->user.Uid);
	outtextxy(startx + ugap + 20, gap, current->user.name);
	int ngap = textwidth(current->user.name);
	outtextxy(startx + ugap + ngap + 40, gap, current->user.tel);
	int tgap = textwidth(current->user.tel);
	outtextxy(startx + ugap + ngap + tgap + 60, gap, current->user.isLegal ? "true" : "false");*/

}

void modifyUser() {
	bool isF = false;

	UNode* userList = loadUsersFromFile("userList.txt");

	if (userList == NULL) {
		puts("No users found in the system or file error.");
		system("pause");
		return;
	}

	UNode* current = userList;

	char id[9] = { 0 };

	cleardevice();

	strcpy(id, initModifyUser());

	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(330, 45, "修改用户");
	setfont(20, 0, "楷体");
	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	while (current != NULL) {
		if (strcmp(current->user.Uid, id) == 0) {
			isF = true;
			break;
		}
		current = current->next;
	}

	if (isF) {
		xyprintf(150, 130, "%6s\t %8s\t %10s\t %10s\n", "学号", "名字", "联系方式", "合法性");
		xyprintf(150, 150, "%s\t %6s\t %9s\t %10s\n", current->user.Uid, current->user.name, current->user.tel, current->user.isLegal ? "合法" : "不合法");

		int gw = textwidth("修改");
		int gh = textheight("修改");

		fillrect(650 - 5, 150 - 5, 650 + 5 + gw, 150 + 5 + gh);

		outtextxy(650, 150, "修改");

		while (1) {
			while(mousemsg()) {
				mouse_msg msg = getmouse();

				int mx = msg.x;
				int my = msg.y;

				bool xis = false;

				if (mx >= 650 - 5 && mx <= 650 + 5 + gw && my >= 150 - 5 && my <= 150 + 5 + gh) {
					xis = true;
				}

				if (xis) {
					setfillcolor(HOTPINK);

					fillrect(650 - 5, 150 - 5, 650 + 5 + gw, 150 + 5 + gh);

					outtextxy(650, 150, "修改");
				}

				if (!xis) {
					setfillcolor(PINK);

					fillrect(650 - 5, 150 - 5, 650 + 5 + gw, 150 + 5 + gh);

					outtextxy(650, 150, "修改");
				}

				if (mx >= 650 - 5 && mx <= 650 + 5 + gw && my >= 150 - 5 && my <= 150 + 5 + gh && msg.is_left() && msg.is_up()) {
					cleardevice();
					setfont(60, 0, "华文行楷");
					outtextxy(330, 45, "修改用户");
					setfont(20, 0, "楷体");
					setlinewidth(2);
					setlinecolor(LIGHTGRAY);
					line(100, 120, 800, 120);
					setlinecolor(PINK);

					int dh = textheight("用户名");

					sys_edit editName;
					editName.create(false);
					editName.move(325, 200);
					editName.size(250, dh + 8);
					editName.setmaxlen(14);
					editName.setbgcolor(PINK);
					editName.setcolor(BLACK);
					editName.setfont(20, 0, "宋体");
					editName.visible(true);
					editName.setfocus();
					editName.settext(current->user.name);




					sys_edit editId;
					editId.create(false);
					editId.move(325, 300);
					editId.size(250, dh + 8);
					editId.setmaxlen(8);
					editId.setbgcolor(PINK);
					editId.setcolor(BLACK);
					editId.setfont(20, 0, "宋体");
					editId.visible(true);
					editId.settext(current->user.Uid);




					sys_edit editPwd;
					editPwd.create(false);
					editPwd.move(325, 400);
					editPwd.size(250, dh + 8);
					editPwd.setmaxlen(20);
					editPwd.setbgcolor(PINK);
					editPwd.setcolor(BLACK);
					editPwd.setfont(20, 0, "宋体");
					editPwd.visible(true);
					editPwd.settext(current->user.password);




					sys_edit editTel;
					editTel.create(false);
					editTel.move(325, 500);
					editTel.size(250, dh + 8);
					editTel.setmaxlen(20);
					editTel.setbgcolor(PINK);
					editTel.setcolor(BLACK);
					editTel.setfont(20, 0, "宋体");
					editTel.visible(true);
					editTel.settext(current->user.tel);




					outtextxy(330, 180, "用户名");
					outtextxy(330, 280, "学号");
					outtextxy(330, 380, "密码");
					outtextxy(330, 480, "联系方式");

					bool running = true;

					char name[15] = { 0 };
					char id[9] = { 0 };
					char pwd[21] = { 0 };
					char tel[12] = { 0 };

					

					while (running) {
						
						if (kbhit()) {
							key_msg msg = getkey();

							switch (msg.key) {
							case key_esc:
								running = false;
								break;
							case key_enter:
								editName.gettext(sizeof(name), name);
								editId.gettext(sizeof(id), id);
								editPwd.gettext(sizeof(pwd), pwd);
								editTel.gettext(sizeof(tel), tel);

								if (strlen(name) > 0 && strlen(id) > 0 && strlen(pwd) > 0 && strlen(tel) > 0) {
									strcpy(current->user.name, name);
									strcpy(current->user.Uid, id);
									strcpy(current->user.password, pwd);
									strcpy(current->user.tel, tel);

									outtextxy(650, 350, "修改成功！");
									getch();
									editName.destroy();
									editId.destroy();
									editPwd.destroy();
									editTel.destroy();
									running = false;
								}
								else {
									outtextxy(650, 350, "请填写完整！");
									getch();
								}
								break;
							}
						}
					}
					saveUsersToFile(userList, "userList.txt");
					freeList(userList);
					return;
				}
			}
		}
	}
	else {
		outtextxy(650, 350, "未找到该学生!");
	}

	getch();
}

char* initModifyUser() {
	char id[9] = { 0 };

	setfont(60, 0, "华文行楷");
	outtextxy(330, 45, "修改用户");
	setfont(20, 0, "楷体");
	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	int dh = textheight("学号");

	sys_edit editId;
	editId.create(false);
	editId.move(325, 200);
	editId.size(250, dh + 8);
	editId.setmaxlen(8);
	editId.setbgcolor(PINK);
	editId.setcolor(BLACK);
	editId.setfont(20, 0, "宋体");
	editId.visible(true);
	editId.setfocus();

	outtextxy(330, 180, "学号");

	sys_edit* currentEdit = &editId;

	bool running = true;

	int tempw = textwidth("请填写！");
	int temph = textheight("请填写！");

	const int gap = 20;

	while (running) {
		setlinecolor(WHITE);
		setfillcolor(WHITE);
		fillrect(350 - gap, 500 - gap, 400 + tempw + gap, 500 + temph + gap);
		setfillcolor(PINK);
		setlinecolor(PINK);

		if (kbhit()) {
			key_msg msg = getkey();

			switch (msg.key) {
			case key_esc:
				running = false;
				break;
			case key_enter:
				editId.gettext(sizeof(id), id);

				if (strlen(id) > 0) {
					editId.destroy();
					return id;
				}
				else {
					outtextxy(350, 500, "请填写！");
					getch();
				}
				break;
			}
		}
	}

	getch();
}

void deleteUser() {
	UNode* userList = loadUsersFromFile("userList.txt");

	if (userList == NULL) {
		puts("No users found in the system or file error.");
		system("pause");
		return;
	}

	UNode* current = userList;
}
