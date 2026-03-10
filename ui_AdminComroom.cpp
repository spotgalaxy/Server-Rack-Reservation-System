#include "ui_adminComroom.h"

void initAdminComroom() {
	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(380, 45, "机房");

	setfont(40, 0, "楷体");

	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	int gw = textwidth("查看机房");
	int gh = textheight("查看机房");

	const int gap = 20;

	fillrect(350 - gap, 200 - gap, 350 + gw + gap, 200 + gh + gap);

	outtextxy(350, 200, "查看机房");

	fillrect(350 - gap, 300 - gap, 350 + gw + gap, 300 + gh + gap);

	outtextxy(350, 300, "添加机房");

	fillrect(350 - gap, 400 - gap, 350 + gw + gap, 400 + gh + gap);

	outtextxy(350, 400, "修改机房");

	fillrect(350 - gap, 500 - gap, 350 + gw + gap, 500 + gh + gap);

	outtextxy(350, 500, "删除机房");

	fillrect(600 - gap, 350 - gap, 600 + gw + gap, 350 + gh + gap);

	outtextxy(640, 350, "返回");


	while (1) {
		while (mousemsg()) {
			mouse_msg msg = getmouse();

			int mx = msg.x;
			int my = msg.y;

			bool cis = false;
			bool tis = false;
			bool xis = false;
			bool sis = false;
			bool fis = false;

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 200 - gap && my <= 200 + gh + gap) {
				cis = true;
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 300 - gap && my <= 300 + gh + gap) {
				tis = true;
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 400 - gap && my <= 400 + gh + gap) {
				xis = true;
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 500 - gap && my <= 500 + gh + gap) {
				sis = true;
			}

			if (mx >= 600 - gap && mx <= 600 + gw + gap && my >= 350 - gap && my <= 350 + gh + gap) {
				fis = true;
			}

			if (cis) {
				setfillcolor(HOTPINK);

				fillrect(350 - gap, 200 - gap, 350 + gw + gap, 200 + gh + gap);

				outtextxy(350, 200, "查看机房");
			}

			if (tis) {
				setfillcolor(HOTPINK);

				fillrect(350 - gap, 300 - gap, 350 + gw + gap, 300 + gh + gap);

				outtextxy(350, 300, "添加机房");
			}

			if (xis) {
				setfillcolor(HOTPINK);

				fillrect(350 - gap, 400 - gap, 350 + gw + gap, 400 + gh + gap);

				outtextxy(350, 400, "修改机房");
			}

			if (sis) {
				setfillcolor(HOTPINK);

				fillrect(350 - gap, 500 - gap, 350 + gw + gap, 500 + gh + gap);

				outtextxy(350, 500, "删除机房");
			}

			if (fis) {
				setfillcolor(HOTPINK);

				fillrect(600 - gap, 350 - gap, 600 + gw + gap, 350 + gh + gap);

				outtextxy(640, 350, "返回");
			}

			if (!cis) {
				setfillcolor(PINK);

				fillrect(350 - gap, 200 - gap, 350 + gw + gap, 200 + gh + gap);

				outtextxy(350, 200, "查看机房");
			}

			if (!tis) {
				setfillcolor(PINK);

				fillrect(350 - gap, 300 - gap, 350 + gw + gap, 300 + gh + gap);

				outtextxy(350, 300, "添加机房");
			}

			if (!xis) {
				setfillcolor(PINK);

				fillrect(350 - gap, 400 - gap, 350 + gw + gap, 400 + gh + gap);

				outtextxy(350, 400, "修改机房");
			}

			if (!sis) {
				setfillcolor(PINK);

				fillrect(350 - gap, 500 - gap, 350 + gw + gap, 500 + gh + gap);

				outtextxy(350, 500, "删除机房");
			}

			if (!fis) {
				setfillcolor(PINK);

				fillrect(600 - gap, 350 - gap, 600 + gw + gap, 350 + gh + gap);

				outtextxy(640, 350, "返回");
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 200 - gap && my <= 200 + gh + gap && msg.is_left() && msg.is_up()) {
				checkComrooms();

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(380, 45, "机房");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 300 - gap && my <= 300 + gh + gap && msg.is_left() && msg.is_up()) {
				addComroom();

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(380, 45, "机房");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 400 - gap && my <= 400 + gh + gap && msg.is_left() && msg.is_up()) {
				//改

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(380, 45, "机房");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 500 - gap && my <= 500 + gh + gap && msg.is_left() && msg.is_up()) {
				deleteComroom();

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(380, 45, "机房");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

			if (mx >= 600 - gap && mx <= 600 + gw + gap && my >= 350 - gap && my <= 350 + gh + gap && msg.is_left() && msg.is_up()) {
				return;
			}
		}
	}

	getch();
}

void checkComrooms() {
	CRNode* comroomList = loadComroomsFromFile("comroomList.txt");

	if (comroomList == NULL) {
		/*puts("No users found in the system or file error.");
		system("pause");*/
		return;
	}

	CRNode* current = comroomList;

	int gap = 130;
	int startx = 275;

	cleardevice();

	setfont(20, 0, "楷体");
	xyprintf(startx, gap, "%s\t %12s\t %12s\n", "机房号", "最大容纳量", "是否开放");

	while (current != NULL) {
		gap += 20;
		initCheckComrooms(current, gap, startx);
		current = current->next;
	}

	freeList(comroomList);

	getch();
}

void initCheckComrooms(CRNode* current, int gap, int startx) {
	setfont(60, 0, "华文行楷");
	outtextxy(330, 45, "查看机房");
	setfont(20, 0, "楷体");
	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	xyprintf(startx, gap, "%s\t %8d %14s\n", current->comroom.CRid, current->comroom.maxCom, current->comroom.isOpen ? "开放" : "不开放");
}

void addComroom() {
	CRNode* comroomList = loadComroomsFromFile("comroomList.txt");

	if (comroomList == NULL) {
		/*puts("No users found in the system or file error.");
		system("pause");*/
		return;
	}

	CRNode* current = comroomList;

	cleardevice();

	if (!initAddComroom(&comroomList)) {
		outtextxy(650, 350, "添加失败！");
		getch();
	}

	freeList(comroomList);

	getch();
}

bool initAddComroom(CRNode** head) {
	setfont(60, 0, "华文行楷");
	outtextxy(330, 45, "添加机房");
	setfont(20, 0, "楷体");
	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	int dh = textheight("最大容纳量");

	/*sys_edit editId;
	editId.create(false);
	editId.move(325, 200);
	editId.size(250, dh + 8);
	editId.setmaxlen(8);
	editId.setbgcolor(PINK);
	editId.setcolor(BLACK);
	editId.setfont(20, 0, "宋体");
	editId.visible(true);
	editId.setfocus();*/

	sys_edit editMaxsite;
	editMaxsite.create(false);
	editMaxsite.move(325, 300);
	editMaxsite.size(250, dh + 8);
	editMaxsite.setmaxlen(8);
	editMaxsite.setbgcolor(PINK);
	editMaxsite.setcolor(BLACK);
	editMaxsite.setfont(20, 0, "宋体");
	editMaxsite.visible(true);
	editMaxsite.setfocus();

	/*outtextxy(330, 180, "机房号");*/
	outtextxy(330, 280, "最大容纳量");

	bool running = true;
	bool res = false;

	char CRid[8] = { 0 };
	char maxSite[10] = { 0 };

	Comrooms comroom = { 0 };

	while (running) {
		if (kbhit()) {
			key_msg msg = getkey();

			switch (msg.key) {
			case key_esc:
				running = false;
				break;
			case key_enter:
				//editId.gettext(sizeof(id), id);
				editMaxsite.gettext(sizeof(maxSite), maxSite);

				if (strlen(maxSite) > 0) {
					int maxsite = atoi(maxSite);
					int id = getMaxId(*head);
					sprintf(CRid, "CR%04d", id + 1);
					strcpy(comroom.CRid, CRid);
					comroom.isOpen = true;
					comroom.maxCom = maxsite;
					addNode(head, comroom);
					res = true;

					outtextxy(650, 350, "添加成功！");
					getch();
					//editId.destroy();
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

	editMaxsite.destroy();
	
	saveComroomsToFile(*head, "comroomList.txt");

	return res;
}

void deleteComroom() {
	CRNode* comroomList = loadComroomsFromFile("comroomList.txt");

	if (comroomList == NULL) {
		/*puts("No users found in the system or file error.");
		system("pause");*/
		return;
	}

	CRNode* current = comroomList;

	char id[9] = { 0 };

	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(330, 45, "删除机房");
	setfont(20, 0, "楷体");
	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	strcpy(id, getComroomId());

	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(330, 45, "删除机房");
	setfont(20, 0, "楷体");
	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	bool isF = false;

	while (current != NULL) {
		if (strcmp(id, current->comroom.CRid) == 0) {
			isF = true;
			break;
		}
		current = current->next;
	}

	if (isF) {
		if (!initDeleteComroom(current, &comroomList, id)) {
			outtextxy(650, 350, "删除失败!");
		}
	}
	else {
		outtextxy(650, 350, "未找到该机房!");
	}

	free(comroomList);

	getch();
}

char* getComroomId() {
	char id[9] = { 0 };

	int dh = textheight("机房号");

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

	outtextxy(330, 180, "机房号");

	bool running = true;

	while (running) {
		if (kbhit()) {
			key_msg msg = getkey();

			switch (msg.key) {
			case key_esc:
				editId.destroy();
				running = false;
				break;
			case key_enter:
				editId.gettext(sizeof(id), id);

				if (strlen(id) > 0) {
					editId.destroy();

					int CRid = atoi(id);

					sprintf(id, "CR%04d", CRid);
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
}

bool initDeleteComroom(CRNode* current, CRNode** head, char* id) {
	xyprintf(250, 130, "%4s\t %12s\t %12s\n", "机房号", "最大容纳量", "是否开放");
	xyprintf(250, 150, "%s\t %8d\t %14s\n", current->comroom.CRid, current->comroom.maxCom, current->comroom.isOpen ? "开放" : "不开放");

	int gw = textwidth("删除");
	int gh = textheight("删除");

	fillrect(650 - 5, 150 - 5, 650 + 5 + gw, 150 + 5 + gh);

	outtextxy(650, 150, "删除");

	bool res = false;

	while (1) {
		while (mousemsg()) {
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

				outtextxy(650, 150, "删除");
			}

			if (!xis) {
				setfillcolor(PINK);

				fillrect(650 - 5, 150 - 5, 650 + 5 + gw, 150 + 5 + gh);

				outtextxy(650, 150, "删除");
			}

			if (mx >= 650 - 5 && mx <= 650 + 5 + gw && my >= 150 - 5 && my <= 150 + 5 + gh && msg.is_left() && msg.is_up()) {
				deleteNode(head, id);

				res = true;

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(330, 45, "删除机房");
				setfont(20, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);

				outtextxy(650, 350, "删除成功！");
				break;
			}
		}
		if (res) {
			break;
		}
	}

	saveComroomsToFile(*head, "comroomList.txt");

	return res;
}

