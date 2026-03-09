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
				//查看用户
			}

			if (mx >= 370 - gap && mx <= 370 + gw + gap && my >= 300 - gap && my <= 300 + gh + gap && msg.is_left() && msg.is_up()) {
				//修改用户
			}

			if (mx >= 370 - gap && mx <= 370 + gw + gap && my >= 400 - gap && my <= 400 + gh + gap && msg.is_left() && msg.is_up()) {
				//删除用户
			}

			if (mx >= 370 - gap && mx <= 370 + gw + gap && my >= 500 - gap && my <= 500 + gh + gap && msg.is_left() && msg.is_up()) {
				return;
			}
		}
	}

	getch();
}