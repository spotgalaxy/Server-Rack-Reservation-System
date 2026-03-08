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
	
	settextcolor(BLACK);

	setfillcolor(PINK);

	setfont(TitleCharSize, 0, "华文行楷");
	outtextxy(215, 45, title);

	setlinewidth(2);
	line(100, 120, 800, 120);

	setlinecolor(PINK);
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
		if (mx >= 400 - gap && mx <= 400 + zw + gap && my >= 350 - gap && my <= 350 + zh + gap) {
			zis = true;
		}
		if (mx >= 400 - gap && mx <= 400 + tw + gap && my >= 450 - gap && my <= 450 + th + gap) {
			tis = true;
		}

		if (dis) {
			setfillcolor(HOTPINK);

			fillrect(400 - gap, 250 - gap, 400 + dw + gap, 250 + dh + gap);

			outtextxy(400, 250, "登录");
		}
		if (zis) {
			setfillcolor(HOTPINK);

			fillrect(400 - gap, 350 - gap, 400 + zw + gap, 350 + zh + gap);

			outtextxy(400, 350, "注册");
		}
		if (tis) {
			setfillcolor(HOTPINK);

			fillrect(400 - gap, 450 - gap, 400 + tw + gap, 450 + th + gap);

			outtextxy(400, 450, "退出");
		}
		if (!dis) {
			setfillcolor(PINK);

			fillrect(400 - 20, 250 - 20, 400 + dw + 20, 250 + dh + 20);

			outtextxy(400, 250, "登录");
		}
		if (!zis) {
			setfillcolor(PINK);

			fillrect(400 - 20, 350 - 20, 400 + zw + 20, 350 + zh + 20);

			outtextxy(400, 350, "注册");
		}
		if (!tis) {
			setfillcolor(PINK);

			fillrect(400 - 20, 450 - 20, 400 + tw + 20, 450 + th + 20);

			outtextxy(400, 450, "退出");
		}

		if (mx >= 400 - gap && mx <= 400 + dw + gap && my >= 250 - gap && my <= 250 + dh + gap && msg.is_left() && msg.is_up()) {
			initLogIn();
			cleardevice();
			setlinewidth(2);
			setlinecolor(LIGHTGRAY);
			line(100, 120, 800, 120);
			setlinecolor(PINK);
			setfont(TitleCharSize, 0, "华文行楷");
			outtextxy(215, 45, title);
			setfont(CharSize, 0, "华文行楷");
			
		}

		if (mx >= 400 - gap && mx <= 400 + zw + gap && my >= 350 - gap && my <= 350 + zh + gap && msg.is_left() && msg.is_up()) {
			//注册函数
			cleardevice();
			setlinewidth(2);
			setlinecolor(LIGHTGRAY);
			line(100, 120, 800, 120);
			setlinecolor(PINK);
			setfont(TitleCharSize, 0, "华文行楷");
			outtextxy(215, 45, title);
			setfont(CharSize, 0, "华文行楷");
		}

		if (mx >= 400 - gap && mx <= 400 + tw + gap && my >= 450 - gap && my <= 450 + th + gap && msg.is_left() && msg.is_up()) {
			exit(5);
		}
	}

	getch();
	closegraph();
}