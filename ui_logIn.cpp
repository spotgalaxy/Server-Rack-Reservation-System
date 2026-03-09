#include "ui_logIn.h"

void initlogIn() {
	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(380, 45, "登录");

	
	setfont(40, 0, "楷体");

	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	int gw = textwidth("管理员登录");
	int gh = textheight("管理员登录");

	const int gap = 20;

	fillrect(350 - gap, 200 - gap, 350 + gw + gap, 200 + gh + gap);

	outtextxy(350, 200, "管理员登录");

	fillrect(350 - gap, 300 - gap, 350 + gw + gap, 300 + gh + gap);

	outtextxy(365, 300, "用户登录");

	fillrect(350 - gap, 400 - gap, 350 + gw + gap, 400 + gh + gap);

	outtextxy(350, 400, "返回主界面");

	while (1) {
		while (mousemsg()) {
			mouse_msg msg = getmouse();

			int mx = msg.x;
			int my = msg.y;

			bool gl = false;
			bool yl = false;
			bool fl = false;

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 200 - gap && my <= 200 + gh + gap) {
				gl = true;
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 300 - gap && my <= 300 + gh + gap) {
				yl = true;
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 400 - gap && my <= 400 + gh + gap) {
				fl = true;
			}

			if (gl) {
				setfillcolor(HOTPINK);

				fillrect(350 - gap, 200 - gap, 350 + gw + gap, 200 + gh + gap);

				outtextxy(350, 200, "管理员登录");
			}

			if (yl) {
				setfillcolor(HOTPINK);

				fillrect(350 - gap, 300 - gap, 350 + gw + gap, 300 + gh + gap);

				outtextxy(365, 300, "用户登录");
			}

			if (fl) {
				setfillcolor(HOTPINK);

				fillrect(350 - gap, 400 - gap, 350 + gw + gap, 400 + gh + gap);

				outtextxy(350, 400, "返回主界面");
			}

			if (!gl) {
				setfillcolor(PINK);

				fillrect(350 - gap, 200 - gap, 350 + gw + gap, 200 + gh + gap);

				outtextxy(350, 200, "管理员登录");
			}

			if (!yl) {
				setfillcolor(PINK);

				fillrect(350 - gap, 300 - gap, 350 + gw + gap, 300 + gh + gap);

				outtextxy(365, 300, "用户登录");
			}

			if (!fl) {
				setfillcolor(PINK);

				fillrect(350 - gap, 400 - gap, 350 + gw + gap, 400 + gh + gap);

				outtextxy(350, 400, "返回主界面");
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 200 - gap && my <= 200 + gh + gap && msg.is_left() && msg.is_up()) {
				initAdminlogIn();
				cleardevice();
				//管理员功能
				/*setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
				setfont(60, 0, "华文行楷");
				outtextxy(380, 45, "登录");
				setfont(40, 0, "华文行楷");
				fillrect(350 - gap, 200 - gap, 350 + gw + gap, 200 + gh + gap);
				outtextxy(350, 200, "管理员登录");
				fillrect(350 - gap, 300 - gap, 350 + gw + gap, 300 + gh + gap);
				outtextxy(365, 300, "用户登录");
				fillrect(350 - gap, 400 - gap, 350 + gw + gap, 400 + gh + gap);
				outtextxy(350, 400, "返回主界面");*/
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 300 - gap && my <= 300 + gh + gap && msg.is_left() && msg.is_up()) {
				initUserlogIn();
				cleardevice();
				//用户
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 400 - gap && my <= 400 + gh + gap && msg.is_left() && msg.is_up()) {
				return;
			}
		}
		

	}

	getch();
}

void initAdminlogIn() {
	cleardevice();

	char pwd[21] = { 0 };

	setfont(60, 0, "华文行楷");
	outtextxy(380, 45, "注册");

	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	setfont(20, 0, "华文行楷");
	int dw = textwidth("密码");
	int dh = textheight("密码");

	sys_edit editPwd;
	editPwd.create(false);
	editPwd.move(325, 200);
	editPwd.size(250, dh + 8);
	editPwd.setmaxlen(20);
	editPwd.setbgcolor(PINK);
	editPwd.setcolor(BLACK);
	editPwd.setfont(20, 0, "宋体");
	editPwd.visible(true);
	editPwd.setfocus();

	outtextxy(330, 180, "密码");

	bool running = true;

	const int gap = 20;

	int tempw = textwidth("请填写完整！");
	int temph = textheight("请填写完整！");

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
				editPwd.gettext(sizeof(pwd), pwd);

				if (strlen(pwd) > 0) {
					if (adminLogIn(pwd)) {
						outtextxy(400, 500, "登录成功！");
						getch();
						editPwd.destroy();
						running = false;
					}
					else {
						outtextxy(350, 500, "请检查输入是否正确");
						getch();
					}
				}
				else {
					outtextxy(350, 500, "请填写完整！");
					getch();
				}
			}

		}

		delay_fps(60);
	}

	initAdminFunc();
}

void initUserlogIn() {
	cleardevice();

	char name[15] = { 0 };
	char id[9] = { 0 };
	char pwd[21] = { 0 };

	setfont(60, 0, "华文行楷");
	outtextxy(380, 45, "登录");

	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	setfont(20, 0, "华文行楷");
	int dw = textwidth("用户名");
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
	



	sys_edit editId;
	editId.create(false);
	editId.move(325, 300);
	editId.size(250, dh + 8);
	editId.setmaxlen(8);
	editId.setbgcolor(PINK);
	editId.setcolor(BLACK);
	editId.setfont(20, 0, "宋体");
	editId.visible(true);
	



	sys_edit editPwd;
	editPwd.create(false);
	editPwd.move(325, 400);
	editPwd.size(250, dh + 8);
	editPwd.setmaxlen(20);
	editPwd.setbgcolor(PINK);
	editPwd.setcolor(BLACK);
	editPwd.setfont(20, 0, "宋体");
	editPwd.visible(true);
	




	outtextxy(330, 180, "用户名");
	outtextxy(330, 280, "学号");
	outtextxy(330, 380, "密码");

	sys_edit* currentEdit = &editName;

	bool running = true;

	int tempw = textwidth("请填写完整！");
	int temph = textheight("请填写完整！");

	const int gap = 20;

	while (running) {
		setlinecolor(WHITE);
		setfillcolor(WHITE);
		fillrect(350 - gap, 500 - gap, 400 + tempw + gap, 500 + temph + gap);
		setfillcolor(PINK);
		setlinecolor(PINK);
		// 键盘处理
		if (kbhit()) {
			key_msg msg = getkey();

			// Tab切换
			if (msg.key == key_tab) {
				if (currentEdit == &editName) {
					currentEdit = &editId;
				}
				else if (currentEdit == &editId) {
					currentEdit = &editPwd;
				}
				else {
					currentEdit = &editName;
				}
				currentEdit->setfocus();
			}
			// ESC退出
			else if (msg.key == key_esc) {
				running = false;
			}
			// Enter提交
			else if (msg.key == key_enter) {
				editName.gettext(sizeof(name), name);
				editId.gettext(sizeof(id), id);
				editPwd.gettext(sizeof(pwd), pwd);

				if (strlen(name) > 0 && strlen(id) > 0 && strlen(pwd) > 0) {

					if (userLogIn(name, pwd)) {
						outtextxy(400, 500, "登录成功！");
						getch();
						editName.destroy();
						editId.destroy();
						editPwd.destroy();
						running = false;
					}	
					else {
						outtextxy(350, 500, "请检查输入是否正确");
						flushkey();
						getch();
					}

					// 验证成功可以退出
					// running = false;
				}
				else {
					outtextxy(350, 500, "请填写完整！");
					flushkey();
					getch();
				}
			}
		}

		delay_fps(60);  // 关键：让系统处理输入框消息
	}

	initUserFunc();
}
