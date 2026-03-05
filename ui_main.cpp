#include "ui_main.h"

#define WIDTH 900
#define HEIGHT 600
#define TitleCharSize 60
#define CharSize 40

char title[20] = "机房机位预定系统";
const char bottom1[6] = "登录";
const char bottom2[6] = "注册";
const char bottom3[6] = "退出";

void initMnue() {
	initgraph(WIDTH, HEIGHT, 0);
	setcaption(title);
	setbkmode(TRANSPARENT);

	setbkcolor(WHITE);
	setlinecolor(SPRINGGREEN);
	settextcolor(BLACK);

	setfillcolor(SPRINGGREEN);

	setfont(TitleCharSize, 0, "华文行楷");
	outtextxy(215, 45, title);

	setfont(CharSize, 0, "华文行楷");

	const int gap = 20;

	int dw = textwidth(bottom1);
	int dh = textheight(bottom1);

	fillrect(400 - gap, 250 - gap, 400 + dw + gap, 250 + dh + gap);

	outtextxy(400, 250, bottom1);

	int zw = textwidth(bottom2);
	int zh = textheight(bottom2);

	fillrect(400 - gap, 350 - gap, 400 + zw + gap, 350 + zh + gap);

	outtextxy(400, 350, bottom2);

	int tw = textwidth(bottom3);
	int th = textheight(bottom3);

	fillrect(400 - gap, 450 - gap, 400 + tw + gap, 450 + th + gap);

	outtextxy(400, 450, bottom3);

	while (1) {
		mouse_msg msg = getmouse();

		int mx = msg.x;
		int my = msg.y;

		bool dis = false;
		bool zis = false;
		bool tis = false;

		if (mx >= 400 - gap && mx <= 400 + dw + gap && my >= 250 - gap && my <= 250 + dh + gap) {
			dis = true;
		}
		if (mx >= 400 - gap && mx <= 400 + zw + gap && my >= 350 - gap && my <= 350 + zw + gap) {
			zis = true;
		}
		if (mx >= 400 - gap && mx <= 400 + tw + gap && my >= 450 - gap && my <= 450 + tw + gap) {
			tis = true;
		}

		if (dis) {
			setfillcolor(GREEN);

			fillrect(400 - gap, 250 - gap, 400 + dw + gap, 250 + dh + gap);

			outtextxy(400, 250, "登录");
		}
		if (zis) {
			setfillcolor(GREEN);

			fillrect(400 - gap, 350 - gap, 400 + zw + gap, 350 + zh + gap);

			outtextxy(400, 350, "注册");
		}
		if (tis) {
			setfillcolor(GREEN);

			fillrect(400 - gap, 450 - gap, 400 + tw + gap, 450 + th + gap);

			outtextxy(400, 450, "退出");
		}
		if (!dis) {
			setfillcolor(SPRINGGREEN);

			fillrect(400 - 20, 250 - 20, 400 + dw + 20, 250 + dh + 20);

			outtextxy(400, 250, "登录");
		}
		if (!zis) {
			setfillcolor(SPRINGGREEN);

			fillrect(400 - 20, 350 - 20, 400 + zw + 20, 350 + zh + 20);

			outtextxy(400, 350, "注册");
		}
		if (!tis) {
			setfillcolor(SPRINGGREEN);

			fillrect(400 - 20, 450 - 20, 400 + tw + 20, 450 + th + 20);

			outtextxy(400, 450, "退出");
		}

	}

	getch();
	closegraph();
}