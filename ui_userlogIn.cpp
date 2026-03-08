#include "ui_userlogIn.h"

void initLogIn() {
	cleardevice();

	char name[15] = { 0 };
	char id[9] = { 0 };
	char pwd[21] = { 0 };
	
	setfont(60, 0, "华文行楷");
	outtextxy(380, 45, "登录");

	setfont(20, 0, "华文行楷");
	int dw = textwidth("登录");
	int dh = textheight("登录");

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
	editName.gettext(14, name);
	
	

	sys_edit editId;
	editId.create(false);
	editId.move(325, 300);
	editId.size(250, dh + 8);
	editId.setmaxlen(8);
	editId.setbgcolor(PINK);
	editId.setcolor(BLACK);
	editId.setfont(20, 0, "宋体");
	editId.visible(true);
	editId.gettext(8, id);
	
	

	sys_edit editPwd;
	editPwd.create(false);
	editPwd.move(325, 400);
	editPwd.size(250, dh + 8);
	editPwd.setmaxlen(20);
	editPwd.setbgcolor(PINK);
	editPwd.setcolor(BLACK);
	editPwd.setfont(20, 0, "宋体");
	editPwd.visible(true);
	editPwd.gettext(20, pwd);
	
	


	outtextxy(330, 180, "用户名");
	outtextxy(330, 280, "学号");
	outtextxy(330, 380, "密码");

	sys_edit* currentEdit = &editName;

	bool running = true;

    while (running) {
        // 处理鼠标点击（切换焦点）

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
						running = false;
					}
					else {
						outtextxy(350, 500, "请检查输入是否正确");
					}

					// 验证成功可以退出
					// running = false;
				}
				else {
					outtextxy(350, 500, "请填写完整！");
				}
				outtextxy(400, 500, "登录成功！");
            }
        }

        delay(30);  // 关键：让系统处理输入框消息
    }

	getch();
}
