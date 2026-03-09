#include "ui_userFunc.h"

void initUserFunc() {
	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(380, 45, "用户");

	setfont(40, 0, "楷体");

	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	getch();
}
