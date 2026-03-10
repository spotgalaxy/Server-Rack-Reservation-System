#include "ui_AdminComputer.h"

void initAdminComputer() {
	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(350, 45, "计算机");

	setfont(40, 0, "楷体");

	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	int gw = textwidth("查看计算机");
	int gh = textheight("查看计算机");

	const int gap = 20;

	fillrect(350 - gap, 200 - gap, 350 + gw + gap, 200 + gh + gap);

	outtextxy(350, 200, "查看计算机");

	fillrect(350 - gap, 300 - gap, 350 + gw + gap, 300 + gh + gap);

	outtextxy(350, 300, "添加计算机");

	fillrect(350 - gap, 400 - gap, 350 + gw + gap, 400 + gh + gap);

	outtextxy(350, 400, "修改计算机");

	fillrect(350 - gap, 500 - gap, 350 + gw + gap, 500 + gh + gap);

	outtextxy(350, 500, "删除计算机");

	fillrect(625 - gap, 350 - gap, 625 + gw + gap, 350 + gh + gap);

	outtextxy(680, 350, "返回");


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

				outtextxy(350, 200, "查看计算机");
			}

			if (tis) {
				setfillcolor(HOTPINK);

				fillrect(350 - gap, 300 - gap, 350 + gw + gap, 300 + gh + gap);

				outtextxy(350, 300, "添加计算机");
			}

			if (xis) {
				setfillcolor(HOTPINK);

				fillrect(350 - gap, 400 - gap, 350 + gw + gap, 400 + gh + gap);

				outtextxy(350, 400, "修改计算机");
			}

			if (sis) {
				setfillcolor(HOTPINK);

				fillrect(350 - gap, 500 - gap, 350 + gw + gap, 500 + gh + gap);

				outtextxy(350, 500, "删除计算机");
			}

			if (fis) {
				setfillcolor(HOTPINK);

				fillrect(625 - gap, 350 - gap, 625 + gw + gap, 350 + gh + gap);

				outtextxy(680, 350, "返回");
			}

			if (!cis) {
				setfillcolor(PINK);

				fillrect(350 - gap, 200 - gap, 350 + gw + gap, 200 + gh + gap);

				outtextxy(350, 200, "查看计算机");
			}

			if (!tis) {
				setfillcolor(PINK);

				fillrect(350 - gap, 300 - gap, 350 + gw + gap, 300 + gh + gap);

				outtextxy(350, 300, "添加计算机");
			}

			if (!xis) {
				setfillcolor(PINK);

				fillrect(350 - gap, 400 - gap, 350 + gw + gap, 400 + gh + gap);

				outtextxy(350, 400, "修改计算机");
			}

			if (!sis) {
				setfillcolor(PINK);

				fillrect(350 - gap, 500 - gap, 350 + gw + gap, 500 + gh + gap);

				outtextxy(350, 500, "删除计算机");
			}

			if (!fis) {
				setfillcolor(PINK);

				fillrect(625 - gap, 350 - gap, 625 + gw + gap, 350 + gh + gap);

				outtextxy(680, 350, "返回");
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 200 - gap && my <= 200 + gh + gap && msg.is_left() && msg.is_up()) {
				checkComputers();

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(350, 45, "计算机");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 300 - gap && my <= 300 + gh + gap && msg.is_left() && msg.is_up()) {
				addComputer();

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(350, 45, "计算机");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 400 - gap && my <= 400 + gh + gap && msg.is_left() && msg.is_up()) {
				modifyComputer();

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(350, 45, "计算机");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

			if (mx >= 350 - gap && mx <= 350 + gw + gap && my >= 500 - gap && my <= 500 + gh + gap && msg.is_left() && msg.is_up()) {
				deleteComputer();

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(350, 45, "计算机");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

			if (mx >= 625 - gap && mx <= 625 + gw + gap && my >= 350 - gap && my <= 350 + gh + gap && msg.is_left() && msg.is_up()) {
				return;
			}
		}
	}

	getch();
}

void checkComputers() {
	CNode* computerList = loadComputersFromFile("computerList.txt");
	CRNode* comroomList = loadComroomsFromFile("comroomList.txt");

	if (computerList == NULL || comroomList == NULL) {
		/*puts("No users found in the system or file error.");
		system("pause");*/
		return;
	}

	CNode* current = computerList;
	CRNode* currentCR = comroomList;

	bool isF = false;

	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(310, 45, "查看计算机");
	setfont(20, 0, "楷体");
	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	char id[8] = { 0 };

	strcpy(id, getComroomId(id));

	while (currentCR != NULL) {
		if (strcmp(id, currentCR->comroom.CRid) == 0) {
			isF = true;
			break;
		}
		currentCR = currentCR->next;
	}

	//cleardevice();

	CRNode* belong = currentCR;

	if (isF) {
		initCheckComputers(computerList, belong, id);
	}
	else {
		outtextxy(650, 350, "未找到该机房!");
	}

	freeList(computerList);
	freeList(comroomList);

	getch();
}

void initCheckComputers(CNode* head, CRNode* belong, char* id) {
	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(310, 45, "查看计算机");
	setfont(20, 0, "楷体");
	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);


	int gap = 130;
	int startx = 275;
	xyprintf(startx, gap, "%s\t %12s\t %12s\n", "机房号", "计算机号", "是否开放");

	CNode* current = head;

	while (current != NULL) {
		int i = 0;
		if (strcmp(id, current->computer.CRid) == 0 && i < belong->comroom.maxCom) {
			gap += 20;
			xyprintf(startx, gap, "%s\t %11s\t %11s\n", current->computer.CRid, current->computer.Cid, current->computer.isOpen ? "开放" : "不开放");
			i++;
		}
		current = current->next;
	}


	getch();
}

void addComputer() {
	CNode* computerList = loadComputersFromFile("computerList.txt");
	CRNode* comroomList = loadComroomsFromFile("comroomList.txt");

	if (computerList == NULL || comroomList == NULL) {
		/*puts("No users found in the system or file error.");
		system("pause");*/
		return;
	}

	CNode* current = computerList;
	CRNode* currentCR = comroomList;

	bool isF = false;

	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(310, 45, "添加计算机");
	setfont(20, 0, "楷体");
	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	char id[8] = { 0 };

	strcpy(id, getComroomId(id));

	while (currentCR != NULL) {
		if (strcmp(id, currentCR->comroom.CRid) == 0) {
			isF = true;
			break;
		}
		currentCR = currentCR->next;
	}

	CRNode* belong = currentCR;

	if (isF) {
		if (!initAddComputer(&computerList, belong, id)) {
			outtextxy(650, 350, "添加失败！");
			getch();
		}
	}
	else {
		outtextxy(650, 350, "未找到该机房!");
	}

	freeList(computerList);
	freeList(comroomList);

	getch();
}

bool initAddComputer(CNode** head, CRNode* belong, char* id) {
	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(310, 45, "添加计算机");
	setfont(40, 0, "楷体");
	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	int cid = getMaxId(*head, belong->comroom.CRid);

	if (cid >= belong->comroom.maxCom) {
		return false;
	}

	char Cid[7] = { 0 };

	sprintf(Cid, "C%05d", cid + 1);

	Computers computer = { 0 };

	strcpy(computer.Cid, Cid);
	strcpy(computer.CRid, belong->comroom.CRid);
	computer.isOpen = true;

	addNode(head, computer);

	saveComputersToFile(*head, "computerList.txt");

	settextcolor(RED);
	outtextxy(345, 300, "添加成功！");
	settextcolor(BLACK);
	getch();

	return true;
}

void modifyComputer() {
	CNode* computerList = loadComputersFromFile("computerList.txt");
	CRNode* comroomList = loadComroomsFromFile("comroomList.txt");

	if (computerList == NULL || comroomList == NULL) {
		/*puts("No users found in the system or file error.");
		system("pause");*/
		return;
	}

	CNode* current = computerList;
	CRNode* currentCR = comroomList;

	bool isF = false;

	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(310, 45, "修改计算机");
	setfont(20, 0, "楷体");
	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	char id[8] = { 0 };

	strcpy(id, getComroomId(id));

	while (currentCR != NULL) {
		if (strcmp(id, currentCR->comroom.CRid) == 0) {
			isF = true;
			break;
		}
		currentCR = currentCR->next;
	}

	CRNode* belong = currentCR;

	if (isF) {
		if (!initModifyComputer(computerList, belong, id)) {
			outtextxy(650, 350, "修改失败！");
			getch();
		}
	}
	else {
		outtextxy(650, 350, "未找到该机房!");
	}

	freeList(computerList);
	freeList(comroomList);

	getch();
}

bool initModifyComputer(CNode* head, CRNode* belong, char* roomId) {
	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(310, 45, "修改计算机");
	setfont(20, 0, "楷体");
	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	// 1. 先找到该机房的第一个节点
	CNode* current = head;
	while (current != NULL) {
		if (strcmp(roomId, current->computer.CRid) == 0) {
			break;
		}
		current = current->next;
	}

	int startx = 275;
	int base_gap = 130; // 第一行的Y坐标起始位置
	int row_height = 30; // 每行的高度

	// 用于存储所有行的按钮信息，假设最大不超过100台机器，可根据需要调整
	RowButtonInfo rows[100];
	int rowCount = 0;

	// 初始化数组
	for (int i = 0; i < 100; i++) rows[i].isValid = false;

	// 2. 绘制列表并记录按钮坐标
	int gap = base_gap;

	// 表头
	xyprintf(startx, gap, "%s\t %12s\t %12s\n", "机房号", "计算机号", "是否开放");
	gap += row_height;

	int btn_w = textwidth("修改");
	int btn_h = textheight("修改");
	int btn_x_start = 650 - 2;
	int btn_x_end = 650 + 2 + btn_w;

	int count = 0;
	while (current != NULL && count < belong->comroom.maxCom && rowCount < 100) {
		// 只绘制属于该机房的电脑（虽然上面循环找过了，但为了保险再次确认，或者逻辑上是连续的）
		if (strcmp(roomId, current->computer.CRid) == 0) {
			xyprintf(startx, gap, "%s\t %11s\t %11s\n",
				current->computer.CRid,
				current->computer.Cid,
				current->computer.isOpen ? "开放" : "不开放");

			// 记录这一行的按钮信息
			rows[rowCount].y_top = gap - 2;
			rows[rowCount].y_bottom = gap + 2 + btn_h;
			rows[rowCount].nodePtr = current;
			rows[rowCount].isValid = true;

			// 绘制默认状态的按钮
			setfillcolor(PINK);
			fillrect(btn_x_start, rows[rowCount].y_top, btn_x_end, rows[rowCount].y_bottom);
			setlinecolor(PINK); // 确保文字颜色可见
			outtextxy(650, gap, "修改");

			rowCount++;
			gap += row_height;
			count++;
		}
		current = current->next;
	}

	if (rowCount == 0) {
		outtextxy(300, 400, "该机房下暂无计算机数据");
		getch();
		return true;
	}

	// 3. 鼠标交互循环
	bool running = true;
	while (running) {
		while (mousemsg()) {
			mouse_msg msg = getmouse();
			int mx = msg.x;
			int my = msg.y;
			bool isLeftClick = (msg.is_left() && msg.is_down()); // 检查是否是左键点击
			bool isMouseMove = (msg.is_move());

			int hoveredIndex = -1;

			// 遍历所有记录的按钮行，检查鼠标位置
			for (int i = 0; i < rowCount; i++) {
				if (!rows[i].isValid) continue;

				if (mx >= btn_x_start && mx <= btn_x_end &&
					my >= rows[i].y_top && my <= rows[i].y_bottom) {

					hoveredIndex = i;

					// 如果点击了
					if (isLeftClick) {
						// --- 执行修改逻辑 ---
						// 这里可以调用一个新的函数来处理具体节点的修改
						// 例如: doEditComputer(rows[i].nodePtr);

						// 简单演示：切换开放状态并保存（实际项目中你应该弹出输入框）
						rows[i].nodePtr->computer.isOpen = !(rows[i].nodePtr->computer.isOpen);
						saveComputersToFile(head, "computerList.txt"); // 保存

						// 刷新显示或提示
						cleardevice(); // 简单起见，清屏重绘或提示成功
						setfont(60, 0, "华文行楷");
						outtextxy(310, 45, "修改计算机");
						setfont(20, 0, "楷体");
						setlinewidth(2);
						setlinecolor(LIGHTGRAY);
						line(100, 120, 800, 120);
						setlinecolor(PINK);

						setfont(40, 0, "楷体");
						settextcolor(RED);
						outtextxy(345, 300, "修改成功！");
						settextcolor(BLACK);

						getch();
						running = false; // 退出循环
						break;
					}
					break; // 找到命中的行即可
				}
			}

			if (!running) break;

			// 重绘按钮状态（悬停高亮）
			// 注意：为了性能，实际项目可以只重绘变化的按钮，这里为了代码简单重绘所有按钮
			// 优化建议：只在 hoveredIndex 变化时才重绘

			static int lastHovered = -1;
			if (hoveredIndex != lastHovered) {
				// 重绘所有按钮以清除之前的高亮
				for (int i = 0; i < rowCount; i++) {
					if (!rows[i].isValid) continue;

					if (i == hoveredIndex) {
						setfillcolor(HOTPINK); // 悬停颜色
					}
					else {
						setfillcolor(PINK);    // 正常颜色
					}
					fillrect(btn_x_start, rows[i].y_top, btn_x_end, rows[i].y_bottom);
					setlinecolor(PINK);
					outtextxy(650, rows[i].y_top + 2, "修改"); // 重新输出文字，注意Y坐标微调
				}
				lastHovered = hoveredIndex;
			}
		}

	}

	return true;
}

void deleteComputer() {
	CNode* computerList = loadComputersFromFile("computerList.txt");
	CRNode* comroomList = loadComroomsFromFile("comroomList.txt");

	if (computerList == NULL || comroomList == NULL) {
		/*puts("No users found in the system or file error.");
		system("pause");*/
		return;
	}

	CNode* current = computerList;
	CRNode* currentCR = comroomList;

	bool isF = false;

	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(310, 45, "删除计算机");
	setfont(20, 0, "楷体");
	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	char id[8] = { 0 };

	strcpy(id, getComroomId(id));

	while (currentCR != NULL) {
		if (strcmp(id, currentCR->comroom.CRid) == 0) {
			isF = true;
			break;
		}
		currentCR = currentCR->next;
	}

	CRNode* belong = currentCR;

	if (isF) {
		if (!initDeleteComputer(computerList, belong, id)) {
			outtextxy(650, 350, "删除失败！");
			getch();
		}
	}
	else {
		outtextxy(650, 350, "未找到该机房!");
	}

	freeList(computerList);
	freeList(comroomList);

	getch();
}

bool initDeleteComputer(CNode* head, CRNode* belong, char* roomId) {
	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(310, 45, "删除计算机");
	setfont(20, 0, "楷体");
	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	// 1. 定位到该机房的第一个节点
	CNode* current = head;
	CNode* prev = NULL;

	// 先找到第一个匹配的节点
	while (current != NULL) {
		if (strcmp(roomId, current->computer.CRid) == 0) {
			break;
		}
		prev = current;
		current = current->next;
	}

	int startx = 275;
	int base_gap = 130;
	int row_height = 30;

	// 存储行信息的数组
	RowButtonInfo rows[100];
	int rowCount = 0;
	for (int i = 0; i < 100; i++) rows[i].isValid = false;

	int gap = base_gap;

	// 表头
	xyprintf(startx, gap, "%s\t %12s\t %12s\n", "机房号", "计算机号", "是否开放");
	gap += row_height;

	int btn_w = textwidth("删除");
	int btn_h = textheight("删除");
	int btn_x_start = 650 - 2;
	int btn_x_end = 650 + 2 + btn_w;

	int count = 0;
	// 遍历该机房下的所有计算机
	while (current != NULL && count < belong->comroom.maxCom && rowCount < 100) {
		// 确保只处理属于该机房的连续节点
		if (strcmp(roomId, current->computer.CRid) == 0) {
			xyprintf(startx, gap, "%s\t %11s\t %11s\n",
				current->computer.CRid,
				current->computer.Cid,
				current->computer.isOpen ? "开放" : "不开放");

			// 记录信息：当前节点和前驱节点
			rows[rowCount].y_top = gap - 2;
			rows[rowCount].y_bottom = gap + 2 + btn_h;
			rows[rowCount].nodePtr = current;
			rows[rowCount].prevPtr = prev; // 关键：保存前驱节点
			rows[rowCount].isValid = true;

			// 绘制默认按钮
			setfillcolor(PINK);
			fillrect(btn_x_start, rows[rowCount].y_top, btn_x_end, rows[rowCount].y_bottom);
			setlinecolor(PINK);
			int text_y = rows[rowCount].y_top + (rows[rowCount].y_bottom - rows[rowCount].y_top - btn_h) / 2;
			outtextxy(650, text_y, "删除");

			// 更新 prev 和 current 指针，准备处理下一个
			prev = current;
			current = current->next;

			rowCount++;
			gap += row_height;
			count++;
		}
		else {
			// 如果链表中间夹杂了其他机房的机器（虽然逻辑上不应该，但为了健壮性），跳过
			prev = current;
			current = current->next;
		}
	}

	if (rowCount == 0) {
		outtextxy(300, 400, "该机房下暂无计算机数据");
		getch();
		return true;
	}

	// 2. 鼠标交互循环
	bool running = true;
	int lastHoveredIndex = -1;

	while (running) {
		while (mousemsg()) {
			mouse_msg msg = getmouse();

			int mx = msg.x;
			int my = msg.y;
			int hoveredIndex = -1;

			// 检测悬停
			for (int i = 0; i < rowCount; i++) {
				if (!rows[i].isValid) continue;
				if (mx >= btn_x_start && mx <= btn_x_end &&
					my >= rows[i].y_top && my <= rows[i].y_bottom) {
					hoveredIndex = i;
					break;
				}
			}

			// 处理移动 (高亮)
			if (msg.is_move()) {
				if (hoveredIndex != lastHoveredIndex) {
					for (int i = 0; i < rowCount; i++) {
						if (!rows[i].isValid) continue;

						if (i == hoveredIndex) setfillcolor(HOTPINK);
						else setfillcolor(PINK);

						fillrect(btn_x_start, rows[i].y_top, btn_x_end, rows[i].y_bottom);

						setlinecolor(PINK);
						int text_y = rows[i].y_top + (rows[i].y_bottom - rows[i].y_top - btn_h) / 2;
						outtextxy(650, text_y, "删除");
					}
					lastHoveredIndex = hoveredIndex;
				}
			}

			// 处理左键点击 (删除)
			if (msg.is_left() && msg.is_down()) {
				if (hoveredIndex != -1) {
					CNode* target = rows[hoveredIndex].nodePtr;
					CNode* prevNode = rows[hoveredIndex].prevPtr;

					// --- 执行删除逻辑 ---

					// 1. 从链表中断开
					if (prevNode == NULL) {
						// 如果删除的是头节点，需要更新 head 指针
						// 注意：这里的 head 是局部变量，如果外部需要用，可能需要传二级指针
						// 但因为我们马上要 saveComputersToFile(head...)，只要 head 指向的链表结构对即可
						// 如果删除的是第一个元素，head 变量本身需要改变吗？
						// 在这个函数里 head 是值传递的指针。如果删除的是首节点，我们需要让 head 指向下一个
						// 但由于 head 是值传递，修改 head = target->next 不会影响调用者 deleteComputer() 中的 computerList 变量
						// 不过 saveComputersToFile 使用的是传入的 head。
						// 【重要修正】：如果删除的是第一个节点，必须更新 head 变量，否则保存时会包含已删除节点或出错
						// 由于 head 是按值传递的指针，我们在本函数内修改 head 变量是有效的（仅对本函数有效），
						// 而 saveComputersToFile 使用的正是这个 head 变量。
						head = target->next;
					}
					else {
						prevNode->next = target->next;
					}

					// 2. 释放内存
					// 假设有一个 freeNode 函数，或者手动释放
					// 如果 Computers 结构体里有动态分配的字符串，也要记得 free
					// 这里简单处理，直接 free 节点
					free(target);

					// 3. 保存文件
					// 使用更新后的 head 保存
					

					// 4. 反馈用户
					cleardevice();
					setfont(40, 0, "楷体");
					settextcolor(RED); // 删除用红色提示
					outtextxy(345, 300, "删除成功！");
					settextcolor(BLACK);
					getch();

					running = false;
					break;
				}
			}
		}
	}
	saveComputersToFile(head, "computerList.txt");
	return true;
}


