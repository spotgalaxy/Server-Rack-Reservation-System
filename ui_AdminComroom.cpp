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
				//查
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 300 - gap && my <= 300 + gh + gap && msg.is_left() && msg.is_up()) {
				//增
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 400 - gap && my <= 400 + gh + gap && msg.is_left() && msg.is_up()) {
				//改
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 500 - gap && my <= 500 + gh + gap && msg.is_left() && msg.is_up()) {
				//删
			}

			if (mx >= 600 - gap && mx <= 600 + gw + gap && my >= 350 - gap && my <= 350 + gh + gap && msg.is_left() && msg.is_up()) {
				return;
			}
		}
	}

	getch();
}
