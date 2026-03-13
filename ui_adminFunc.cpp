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

	fillrect(650 - gap, 350 - gap, 650 + gw + gap, 350 + gh + gap);

	outtextxy(707, 350, "记录");

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
			bool jls = false;

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

			if (mx >= 650 - gap && mx <= 650 + gw + gap && my >= 350 - gap && my <= 350 + gh + gap) {
				jls = true;
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

			if (jls) {
				setfillcolor(HOTPINK);

				fillrect(650 - gap, 350 - gap, 650 + gw + gap, 350 + gh + gap);

				outtextxy(707, 350, "记录");
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

			if (!jls) {
				setfillcolor(PINK);

				fillrect(650 - gap, 350 - gap, 650 + gw + gap, 350 + gh + gap);

				outtextxy(707, 350, "记录");
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 200 - gap && my <= 200 + gh + gap && msg.is_left() && msg.is_up()) {
				initAdminUserFunc();

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(350, 45, "管理员");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 300 - gap && my <= 300 + gh + gap && msg.is_left() && msg.is_up()) {
				initAdminComroom();

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(350, 45, "管理员");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 400 - gap && my <= 400 + gh + gap && msg.is_left() && msg.is_up()) {
				initAdminComputer();

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(350, 45, "管理员");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 500 - gap && my <= 500 + gh + gap && msg.is_left() && msg.is_up()) {
				initMnue();
			}

			if (mx >= 650 - gap && mx <= 650 + gw + gap && my >= 350 - gap && my <= 350 + gh + gap && msg.is_left() && msg.is_up()) {
				initRecordFunc();

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(350, 45, "管理员");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

		}
	}


	getch();
}

void initRecordFunc() {
	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(330, 45, "查看记录");

	setfont(40, 0, "楷体");

	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	checkAllRecords();

	int gw = textwidth("统计");
	int gh = textheight("统计");

	const int gap = 10;

	fillrect(400 - gap, 550 - gap, 400 + gw + gap, 550 + gh + gap);

	outtextxy(400, 550, "统计");

	while (1) {
		while (mousemsg()) {
			mouse_msg msg = getmouse();

			int mx = msg.x;
			int my = msg.y;

			bool tis = false;

			if (mx >= 400 - gap && mx <= 400 + gw + gap && my >= 550 - gap && my <= 550 + gh + gap) {
				tis = true;
			}

			if (tis) {
				setfillcolor(HOTPINK);

				fillrect(400 - gap, 550 - gap, 400 + gw + gap, 550 + gh + gap);

				outtextxy(400, 550, "统计");
			}

			if (!tis) {
				setfillcolor(PINK);

				fillrect(400 - gap, 550 - gap, 400 + gw + gap, 550 + gh + gap);

				outtextxy(400, 550, "统计");
			}

			if (mx >= 400 - gap && mx <= 400 + gw + gap && my >= 550 - gap && my <= 550 + gh + gap && msg.is_left() && msg.is_up()) {
				countRecords();

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(330, 45, "查看记录");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
				checkAllRecords();
			}

		}
	}

	

	getch();
}

void checkAllRecords() {
	RNode* recordList = loadRecordsFromFile("recordList.txt");

	if (recordList == NULL) {
		/*puts("No users found in the system or file error.");
		system("pause");*/
		return;
	}

	RNode* current = recordList;

	int gap = 130;
	int startx = 105;

	setfont(20, 0, "楷体");
	xyprintf(startx, gap, "%7s\t %10s\t %14s\t %12s\t %16s\n", "学号", "机房号", "计算机号", "时间", "情况");

	while (current != NULL) {
		gap += 20;
		initCheckRecord(current, gap, startx);

		current = current->next;
	}

	freeList(recordList);
}

void countRecords() {
	cleardevice();
	setfont(60, 0, "华文行楷");
	outtextxy(330, 45, "查看统计");

	setfont(40, 0, "楷体");
	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(BLACK);

	RNode* recordList = loadRecordsFromFile("recordList.txt");

	if (recordList == NULL) {
		setfont(30, 0, "楷体");
		outtextxy(250, 200, "暂无记录数据");
		getch();
		return;
	}

	// ========== 统计每天数据 ==========
	int total = 0;
	RNode* current = recordList;
	while (current != NULL) {
		total++;
		current = current->next;
	}

	DateStat* stats = (DateStat*)malloc(sizeof(DateStat) * total);
	int statCount = 0;

	current = recordList;
	while (current != NULL) {
		char date[20] = { 0 };
		strncpy(date, current->record.time, 10);
		date[10] = '\0';

		int found = 0;
		for (int i = 0; i < statCount; i++) {
			if (strcmp(stats[i].date, date) == 0) {
				stats[i].count++;
				found = 1;
				break;
			}
		}

		if (!found) {
			strcpy(stats[statCount].date, date);
			stats[statCount].count = 1;
			statCount++;
		}

		current = current->next;
	}

	// 按数量排序（降序）
	for (int i = 0; i < statCount - 1; i++) {
		for (int j = 0; j < statCount - 1 - i; j++) {
			if (stats[j].count < stats[j + 1].count) {
				DateStat temp = stats[j];
				stats[j] = stats[j + 1];
				stats[j + 1] = temp;
			}
		}
	}

	// ========== 显示统计结果 ==========
	setfont(24, 0, "楷体");
	setcolor(BLACK);

	int starty = 140;
	int gap = 35;

	// 表头
	setfont(26, 0, "楷体");
	xyprintf(130, starty, "%-15s    %-10s    %-10s\n", "日期", "记录数", "占比");

	/*setlinewidth(2);
	setlinecolor(BLACK);
	line(120, starty, 780, starty);*/

	// 显示每条统计
	for (int i = 0; i < statCount; i++) {
		int y = starty + gap + i * gap;
		float percent = (total > 0) ? (stats[i].count * 100.0 / total) : 0;

		xyprintf(130, y, "%-15s    %-10d    %6.2f%%\n",
			stats[i].date, stats[i].count, percent);
	}

	// 分隔线
	int lineY = starty + gap + statCount * gap;
	/*setlinewidth(2);
	setlinecolor(BLACK);
	line(120, lineY + 5, 780, lineY + 5);*/

	// 总计
	setfont(28, 0, "楷体");
	int totalY = lineY + 25;
	xyprintf(130, totalY, "总记录数：%d 条\n", total);

	setfont(22, 0, "楷体");
	outtextxy(350, totalY + 250, "按任意键返回");

	free(stats);
	freeList(recordList);

	getch();
}

