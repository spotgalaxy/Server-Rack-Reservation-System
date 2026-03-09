#include "ui_register.h"

void initRegister() {
	cleardevice();

	char name[15] = { 0 };
	char id[9] = { 0 };
	char pwd[21] = { 0 };
	char tel[12] = { 0 };

	setfont(60, 0, "华文行楷");
	outtextxy(380, 45, "注册");

	setfont(20, 0, "华文行楷");

	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	int dw = textwidth("用户名");
	int dh = textheight("用户名");

	sys_edit editName;
	editName.create(false);
	editName.move(325, 150);
	editName.size(250, dh + 8);
	editName.setmaxlen(14);
	editName.setbgcolor(PINK);
	editName.setcolor(BLACK);
	editName.setfont(20, 0, "宋体");
	editName.visible(true);
	editName.setfocus();




	sys_edit editId;
	editId.create(false);
	editId.move(325, 250);
	editId.size(250, dh + 8);
	editId.setmaxlen(8);
	editId.setbgcolor(PINK);
	editId.setcolor(BLACK);
	editId.setfont(20, 0, "宋体");
	editId.visible(true);




	sys_edit editPwd;
	editPwd.create(false);
	editPwd.move(325, 350);
	editPwd.size(250, dh + 8);
	editPwd.setmaxlen(20);
	editPwd.setbgcolor(PINK);
	editPwd.setcolor(BLACK);
	editPwd.setfont(20, 0, "宋体");
	editPwd.visible(true);



	sys_edit editTel;
	editTel.create(false);
	editTel.move(325, 450);
	editTel.size(250, dh + 8);
	editTel.setmaxlen(12);
	editTel.setbgcolor(PINK);
	editTel.setcolor(BLACK);
	editTel.setfont(20, 0, "宋体");
	editTel.visible(true);




	outtextxy(330, 130, "用户名");
	outtextxy(330, 230, "学号");
	outtextxy(330, 330, "密码");
	outtextxy(330, 430, "联系方式");

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
				else if (currentEdit == &editPwd) {
					currentEdit = &editTel;
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
				editTel.gettext(sizeof(tel), tel);

				if (strlen(name) > 0 && strlen(id) > 0 && strlen(pwd) > 0 && strlen(tel) > 0) {

					Register(name, id, pwd, tel);
					outtextxy(400, 500, "注册成功！");
					running = false;
					
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

	getch();
}