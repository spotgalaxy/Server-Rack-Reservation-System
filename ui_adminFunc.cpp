#include "ui_adminFunc.h"

void initAdminFunc() {
	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(350, 45, "管理员");

	setfont(40, 0, "楷体");

	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	int gw = textwidth("返回主界面");
	int gh = textheight("返回主界面");

	const int gap = 20;

	fillrect(350 - gap, 200 - gap, 350 + gw + gap, 200 + gh + gap);

	outtextxy(407, 200, "用户");

	fillrect(350 - gap, 300 - gap, 350 + gw + gap, 300 + gh + gap);

	outtextxy(407, 300, "机房");

	fillrect(350 - gap, 400 - gap, 350 + gw + gap, 400 + gh + gap);

	outtextxy(387, 400, "计算机");

	fillrect(350 - gap, 500 - gap, 350 + gw + gap, 500 + gh + gap);

	outtextxy(350, 500, "返回主界面");

	while (1) {
		while (mousemsg()) {
			mouse_msg msg = getmouse();

			int mx = msg.x;
			int my = msg.y;

			bool yis = false;
			bool jis = false;
			bool jl = false;
			bool fis = false;

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 200 - gap && my <= 200 + gh + gap) {
				yis = true;
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 300 - gap && my <= 300 + gh + gap) {
				jis = true;
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 400 - gap && my <= 400 + gh + gap) {
				jl = true;
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 500 - gap && my <= 500 + gh + gap) {
				fis = true;
			}

			if (yis) {
				setfillcolor(HOTPINK);

				fillrect(350 - gap, 200 - gap, 350 + gw + gap, 200 + gh + gap);

				outtextxy(407, 200, "用户");
			}

			if (jis) {
				setfillcolor(HOTPINK);

				fillrect(350 - gap, 300 - gap, 350 + gw + gap, 300 + gh + gap);

				outtextxy(407, 300, "机房");
			}

			if (jl) {
				setfillcolor(HOTPINK);

				fillrect(350 - gap, 400 - gap, 350 + gw + gap, 400 + gh + gap);

				outtextxy(387, 400, "计算机");
			}

			if (fis) {
				setfillcolor(HOTPINK);

				fillrect(350 - gap, 500 - gap, 350 + gw + gap, 500 + gh + gap);

				outtextxy(350, 500, "返回主界面");
			}

			if (!yis) {
				setfillcolor(PINK);

				fillrect(350 - gap, 200 - gap, 350 + gw + gap, 200 + gh + gap);

				outtextxy(407, 200, "用户");
			}

			if (!jis) {
				setfillcolor(PINK);

				fillrect(350 - gap, 300 - gap, 350 + gw + gap, 300 + gh + gap);

				outtextxy(407, 300, "机房");
			}

			if (!jl) {
				setfillcolor(PINK);

				fillrect(350 - gap, 400 - gap, 350 + gw + gap, 400 + gh + gap);

				outtextxy(387, 400, "计算机");
			}

			if (!fis) {
				setfillcolor(PINK);

				fillrect(350 - gap, 500 - gap, 350 + gw + gap, 500 + gh + gap);

				outtextxy(350, 500, "返回主界面");
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 200 - gap && my <= 200 + gh + gap && msg.is_left() && msg.is_up()) {
				//用户相关功能
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 300 - gap && my <= 300 + gh + gap && msg.is_left() && msg.is_up()) {
				//机房相关功能
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 400 - gap && my <= 400 + gh + gap && msg.is_left() && msg.is_up()) {
				//计算机相关功能
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 500 - gap && my <= 500 + gh + gap && msg.is_left() && msg.is_up()) {
				cleardevice();
				initMnue();
			}

		}
	}


	getch();
}
