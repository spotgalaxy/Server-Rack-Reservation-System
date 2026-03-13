#include "ui_userFunc.h"

void initUserFunc(char* Uid) {
	cleardevice();

	setfont(60, 0, "华文行楷");
	outtextxy(380, 45, "用户");

	setfont(40, 0, "楷体");

	setlinewidth(2);
	setlinecolor(LIGHTGRAY);
	line(100, 120, 800, 120);
	setlinecolor(PINK);

	int gw = textwidth("预定");
	int gh = textheight("预定");

	const int gap = 20;

	fillrect(400 - gap, 200 - gap, 400 + gw + gap, 200 + gh + gap);

	outtextxy(400, 200, "预定");

	fillrect(200 - gap, 300 - gap, 200 + gw + gap, 300 + gh + gap);

	outtextxy(200, 300, "记录");

	fillrect(600 - gap, 300 - gap, 600 + gw + gap, 300 + gh + gap);

	outtextxy(600, 300, "修改");

	fillrect(300 - gap, 400 - gap, 300 + gw + gap, 400 + gh + gap);

	outtextxy(300, 400, "签到");

	fillrect(500 - gap, 400 - gap, 500 + gw + gap, 400 + gh + gap);

	outtextxy(500, 400, "返回");

	while (1) {
		while (mousemsg()) {
			mouse_msg msg = getmouse();

			int mx = msg.x;
			int my = msg.y;

			bool yis = false;
			bool jis = false;
			bool xis = false;
			bool qis = false;
			bool fis = false;

			if (mx >= 400 - gap && mx <= 400 + gw + gap && my >= 200 - gap && my <= 200 + gh + gap) {
				yis = true;
			}

			if (mx >= 200 - gap && mx <= 200 + gw + gap && my >= 300 - gap && my <= 300 + gh + gap) {
				jis = true;
			}

			if (mx >= 600 - gap && mx <= 600 + gw + gap && my >= 300 - gap && my <= 300 + gh + gap) {
				xis = true;
			}

			if (mx >= 300 - gap && mx <= 300 + gw + gap && my >= 400 - gap && my <= 400 + gh + gap) {
				qis = true;
			}

			if (mx >= 500 - gap && mx <= 500 + gw + gap && my >= 400 - gap && my <= 400 + gh + gap) {
				fis = true;
			}

			if (yis) {
				setfillcolor(HOTPINK);

				fillrect(400 - gap, 200 - gap, 400 + gw + gap, 200 + gh + gap);

				outtextxy(400, 200, "预定");
			}

			if (jis) {
				setfillcolor(HOTPINK);

				fillrect(200 - gap, 300 - gap, 200 + gw + gap, 300 + gh + gap);

				outtextxy(200, 300, "记录");
			}

			if (xis) {
				setfillcolor(HOTPINK);

				fillrect(600 - gap, 300 - gap, 600 + gw + gap, 300 + gh + gap);

				outtextxy(600, 300, "修改");
			}

			if (qis) {
				setfillcolor(HOTPINK);

				fillrect(300 - gap, 400 - gap, 300 + gw + gap, 400 + gh + gap);

				outtextxy(300, 400, "签到");
			}

			if (fis) {
				setfillcolor(HOTPINK);

				fillrect(500 - gap, 400 - gap, 500 + gw + gap, 400 + gh + gap);

				outtextxy(500, 400, "返回");
			}

			if (!yis) {
				setfillcolor(PINK);

				fillrect(400 - gap, 200 - gap, 400 + gw + gap, 200 + gh + gap);

				outtextxy(400, 200, "预定");
			}

			if (!jis) {
				setfillcolor(PINK);

				fillrect(200 - gap, 300 - gap, 200 + gw + gap, 300 + gh + gap);

				outtextxy(200, 300, "记录");
			}

			if (!xis) {
				setfillcolor(PINK);

				fillrect(600 - gap, 300 - gap, 600 + gw + gap, 300 + gh + gap);

				outtextxy(600, 300, "修改");
			}

			if (!qis) {
				setfillcolor(PINK);

				fillrect(300 - gap, 400 - gap, 300 + gw + gap, 400 + gh + gap);

				outtextxy(300, 400, "签到");
			}

			if (!fis) {
				setfillcolor(PINK);

				fillrect(500 - gap, 400 - gap, 500 + gw + gap, 400 + gh + gap);

				outtextxy(500, 400, "返回");
			}

			if (mx >= 400 - gap && mx <= 400 + gw + gap && my >= 200 - gap && my <= 200 + gh + gap && msg.is_left() && msg.is_up()) {
				booking(Uid);

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(380, 45, "用户");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

			if (mx >= 200 - gap && mx <= 200 + gw + gap && my >= 300 - gap && my <= 300 + gh + gap && msg.is_left() && msg.is_up()) {
                checkRecord(Uid);

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(380, 45, "用户");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

			if (mx >= 600 - gap && mx <= 600 + gw + gap && my >= 300 - gap && my <= 300 + gh + gap && msg.is_left() && msg.is_up()) {
                modifyUserInfo(Uid);

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(380, 45, "用户");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

			if (mx >= 300 - gap && mx <= 300 + gw + gap && my >= 400 - gap && my <= 400 + gh + gap && msg.is_left() && msg.is_up()) {
                signIn(Uid);

				cleardevice();
				setfont(60, 0, "华文行楷");
				outtextxy(380, 45, "用户");
				setfont(40, 0, "楷体");
				setlinewidth(2);
				setlinecolor(LIGHTGRAY);
				line(100, 120, 800, 120);
				setlinecolor(PINK);
			}

			if (mx >= 500 - gap && mx <= 500 + gw + gap && my >= 400 - gap && my <= 400 + gh + gap && msg.is_left() && msg.is_up()) {
				initMnue();
			}


		}
	}

	getch();
}

void booking(char* Uid) {
    // 1. 加载数据
    CNode* computerList = loadComputersFromFile("computerList.txt");
    CRNode* comroomList = loadComroomsFromFile("comroomList.txt");

    if (computerList == NULL || comroomList == NULL) {
        // 实际项目中建议弹出提示框而不是直接返回，这里保持原逻辑
        return;
    }

    cleardevice();

    // --- 界面标题绘制 ---
    setfont(60, 0, "华文行楷");
    outtextxy(330, 45, "查看机房");
    setfont(20, 0, "楷体");
    setlinewidth(2);
    setlinecolor(LIGHTGRAY);
    line(100, 120, 800, 120);
    setlinecolor(PINK);

    int startx = 275;
    int base_gap = 130; // 第一行Y坐标起始位置
    int row_height = 30; // 每行的高度（包含文字和按钮）

    // 用于存储所有行的按钮信息，假设最大不超过100个机房
    RowButtonInfo1 rows[100];
    int rowCount = 0;

    // 初始化数组
    for (int i = 0; i < 100; i++) rows[i].isValid = false;

    int gap = base_gap;

    // --- 绘制表头 ---
    xyprintf(startx, gap, "%s\t %12s\t %12s\t %14s\n", "机房号", "最大容纳量", "状态", "操作");
    gap += row_height;

    // 计算按钮尺寸
    setfont(20, 0, "楷体");
    int btn_w = textwidth("预约") + 20; // 增加一点内边距
    int btn_h = textheight("预约") + 6;

    // 按钮位置设定 (靠右对齐)
    int btn_x_start = 700;
    int btn_x_end = btn_x_start + btn_w;

    CRNode* currentCR = comroomList;
    int count = 0;

    // --- 绘制列表并记录按钮坐标 ---
    while (currentCR != NULL && count < 100) {
        // 绘制文本信息
        xyprintf(startx, gap, "%s\t %8d\t %16s\t",
            currentCR->comroom.CRid,
            currentCR->comroom.maxCom,
            currentCR->comroom.isOpen ? "开放" : "不开放");

        // 记录这一行的按钮信息
        rows[count].y_top = gap - 2; // 稍微上下留点空隙
        rows[count].y_bottom = gap + btn_h + 2;
        rows[count].nodePtr = currentCR;
        rows[count].isValid = true;

        // 绘制默认状态的按钮
        // 如果机房不开放，按钮可以显示为灰色且不可点击（可选逻辑，这里先统一样式）
        if (!currentCR->comroom.isOpen) {
            setfillcolor(LIGHTGRAY);
            setlinecolor(GRAY);
        }
        else {
            setfillcolor(PINK);
            setlinecolor(PINK);
        }

        fillrect(btn_x_start, rows[count].y_top, btn_x_end, rows[count].y_bottom);
        rectangle(btn_x_start, rows[count].y_top, btn_x_end, rows[count].y_bottom);

        // 绘制按钮文字
        settextcolor(BLACK);
        outtextxy(btn_x_start + 10, rows[count].y_top + 4, "预约");

        rowCount++;
        gap += row_height;
        count++;
        currentCR = currentCR->next;
    }

    if (rowCount == 0) {
        outtextxy(300, 400, "暂无机房数据");
        getch();
        // 清理内存 (实际项目中需要实现释放链表的函数)
        // freeList(computerList); freeList(comroomList); 
        freeList(computerList);
        freeList(comroomList);
        return;
    }

    // --- 3. 鼠标交互循环 ---
    bool running = true;
    int lastHoveredIndex = -1; // 记录上一次悬停的行索引，用于优化重绘

    while (running) {
        // 处理鼠标消息
        while (mousemsg()) {
            mouse_msg msg = getmouse();
            int mx = msg.x;
            int my = msg.y;

            bool isLeftClick = (msg.is_left() && msg.is_down());
            bool isMouseMove = msg.is_move();

            int hoveredIndex = -1;

            // 遍历所有记录的按钮行，检查鼠标位置
            for (int i = 0; i < rowCount; i++) {
                if (!rows[i].isValid) continue;

                // 检查鼠标是否在按钮区域内
                if (mx >= btn_x_start && mx <= btn_x_end &&
                    my >= rows[i].y_top && my <= rows[i].y_bottom) {

                    hoveredIndex = i;

                    // 如果点击了
                    if (isLeftClick) {
                        // --- 执行预约逻辑 ---
                        CRNode* targetRoom = rows[i].nodePtr;

                        if (!targetRoom->comroom.isOpen) {
                            // 如果机房未开放，提示无法预约
                            cleardevice();
                            setfont(40, 0, "楷体");
                            settextcolor(RED);
                            outtextxy(250, 240, "该机房暂未开放，无法预约！");
                            settextcolor(BLACK);
                            outtextxy(250, 300, "按任意键返回...");
                            getch();
                            running = false;
                        }
                        else {
                            // 执行预约流程 (这里调用你现有的预约子函数，或者在此处编写逻辑)
                            // 示例：跳转到该机房的具体计算机选择界面
                            // enterBookingDetail(targetRoom, computerList); 

                            // 演示反馈：
                            enterRoomDetail(targetRoom, computerList, Uid);

                            /*cleardevice();
                            setfont(40, 0, "楷体");
                            settextcolor(GREEN);
                            char msgBuf[100];
                            sprintf(msgBuf, "成功进入 [%s] 预约界面", targetRoom->comroom.CRid);
                            outtextxy(200, 240, msgBuf);

                            settextcolor(BLACK);
                            outtextxy(250, 300, "按任意键返回主菜单...");*/
                            getch();
                            running = false;
                        }
                        break; // 退出for循环
                    }
                    break; // 找到命中的行即可，不需要继续检查后面的行
                }
            }

            if (!running) break;

            // --- 重绘按钮状态（悬停高亮） ---
            // 只有当悬停的行发生变化时，才重绘，避免闪烁
            if (hoveredIndex != lastHoveredIndex) {

                // 重绘之前悬停的行（恢复原色）
                if (lastHoveredIndex != -1 && lastHoveredIndex < rowCount) {
                    CRNode* prevNode = rows[lastHoveredIndex].nodePtr;
                    if (!prevNode->comroom.isOpen) {
                        setfillcolor(LIGHTGRAY);
                        setlinecolor(GRAY);
                    }
                    else {
                        setfillcolor(PINK);
                        setlinecolor(PINK);
                    }
                    fillrect(btn_x_start, rows[lastHoveredIndex].y_top, btn_x_end, rows[lastHoveredIndex].y_bottom);
                    rectangle(btn_x_start, rows[lastHoveredIndex].y_top, btn_x_end, rows[lastHoveredIndex].y_bottom);
                    settextcolor(BLACK);
                    outtextxy(btn_x_start + 10, rows[lastHoveredIndex].y_top + 4, "预约");
                }

                // 绘制当前悬停的行（高亮色）
                if (hoveredIndex != -1) {
                    CRNode* currNode = rows[hoveredIndex].nodePtr;
                    if (currNode->comroom.isOpen) {
                        // 只有开放的机房才高亮为深粉色/红色，未开放的不高亮
                        setfillcolor(HOTPINK);
                        setlinecolor(PINK);
                        fillrect(btn_x_start, rows[hoveredIndex].y_top, btn_x_end, rows[hoveredIndex].y_bottom);
                        rectangle(btn_x_start, rows[hoveredIndex].y_top, btn_x_end, rows[hoveredIndex].y_bottom);
                        settextcolor(BLACK);
                        outtextxy(btn_x_start + 10, rows[hoveredIndex].y_top + 4, "预约");
                    }
                }

                lastHoveredIndex = hoveredIndex;
            }
        }

        // 如果没有鼠标消息，稍微延时以防CPU占用过高，并允许其他后台消息处理
    }

    // 清理资源 (如果有释放函数的话)
    freeList(computerList);
    freeList(comroomList);

    getch();
}

void enterRoomDetail(CRNode* targetRoom, CNode* allComputers, char* Uid) {
    if (targetRoom == NULL) return;

    cleardevice();

    // --- 1. 绘制顶部标题和机房信息 ---
    setfont(60, 0, "华文行楷");
    outtextxy(280, 30, "机房详情");

    setfont(24, 0, "楷体");
    setlinewidth(2);
    setlinecolor(LIGHTGRAY);
    line(100, 90, 800, 90);

    // 显示当前机房基本信息
    char infoBuf[256];
    sprintf(infoBuf, "当前机房：%s   |   最大容量：%d   |   状态：%s",
        targetRoom->comroom.CRid,
        targetRoom->comroom.maxCom,
        targetRoom->comroom.isOpen ? "开放中" : "维护中");

    settextcolor(BLACK);
    outtextxy(120, 105, infoBuf);

    setlinecolor(PINK);
    line(100, 140, 800, 140); // 分割线

    // --- 2. 准备数据 ---
    int startx = 250;
    int base_gap = 170;
    int row_height = 35; // 行高稍微大一点

    RowButtonInfo rows[100]; // 假设一个机房最多100台电脑
    int rowCount = 0;

    // 初始化数组
    for (int i = 0; i < 100; i++) rows[i].isValid = false;

    // 计算按钮尺寸
    setfont(20, 0, "楷体");
    int btn_w = textwidth("使用") + 20;
    int btn_h = textheight("使用") + 6;
    int btn_x_start = 680;
    int btn_x_end = btn_x_start + btn_w;

    // 遍历总链表，筛选属于该机房的电脑
    CNode* current = allComputers;
    int count = 0;
    int gap = base_gap;

    // --- 绘制表头 ---
    xyprintf(startx, gap, "%-10s\t %-15s\t %-10s\t %10s\n", "机房号", "计算机编号", "当前状态", "操作");
    gap += row_height;

    while (current != NULL && count < 100) {
        // 关键：只处理属于当前机房的电脑
        if (strcmp(current->computer.CRid, targetRoom->comroom.CRid) == 0) {

            // 绘制文本
            const char* statusStr = current->computer.isOpen ? "空闲可用" : "占用/故障";
            int textColor = current->computer.isOpen ? BLACK : GRAY;

            settextcolor(textColor);
            xyprintf(startx, gap, "%-10s\t %-15s\t %-10s\t",
                current->computer.CRid,
                current->computer.Cid,
                statusStr);

            // 记录按钮区域
            rows[count].y_top = gap - 2;
            rows[count].y_bottom = gap + btn_h + 2;
            rows[count].nodePtr = current;
            rows[count].isValid = true;

            // 绘制按钮背景
            if (current->computer.isOpen) {
                setfillcolor(PINK);
                setlinecolor(PINK);
                settextcolor(BLACK);
            }
            else {
                setfillcolor(LIGHTGRAY);
                setlinecolor(GRAY);
                settextcolor(GRAY);
            }

            fillrect(btn_x_start, rows[count].y_top, btn_x_end, rows[count].y_bottom);
            rectangle(btn_x_start, rows[count].y_top, btn_x_end, rows[count].y_bottom);

            // 绘制按钮文字
            outtextxy(btn_x_start + 3, rows[count].y_top + 4, current->computer.isOpen ? "使用" : "不可用");

            rowCount++;
            gap += row_height;
            count++;
        }
        current = current->next;
    }

    // 如果没有找到任何电脑
    if (rowCount == 0) {
        settextcolor(RED);
        outtextxy(300, 300, "该机房下暂无计算机记录");
        settextcolor(BLACK);
        outtextxy(300, 340, "按任意键返回...");
        getch();
        return;
    }

    // --- 绘制“返回”按钮 ---
    int back_btn_x = 120;
    int back_btn_y = 500;
    int back_btn_w = 100;
    int back_btn_h = 40;

    setfillcolor(PINK);
    setlinecolor(PINK);
    fillrect(back_btn_x, back_btn_y, back_btn_x + back_btn_w, back_btn_y + back_btn_h);
    settextcolor(BLACK);
    outtextxy(back_btn_x + 10, back_btn_y + 10, "返回上级");

    // --- 3. 交互循环 ---
    bool running = true;
    int lastHoveredIndex = -1; // 用于列表按钮
    bool backBtnHovered = false; // 用于返回按钮

    while (running) {
        while (mousemsg()) {
            mouse_msg msg = getmouse();
            int mx = msg.x;
            int my = msg.y;
            bool isLeftClick = (msg.is_left() && msg.is_down());

            int hoveredIndex = -1;

            // A. 检查列表中的按钮
            for (int i = 0; i < rowCount; i++) {
                if (!rows[i].isValid) continue;

                // 只有开放的电脑才响应鼠标
                if (rows[i].nodePtr->computer.isOpen &&
                    mx >= btn_x_start && mx <= btn_x_end &&
                    my >= rows[i].y_top && my <= rows[i].y_bottom) {

                    hoveredIndex = i;

                    if (isLeftClick) {
                        // --- 执行具体计算机的使用逻辑 ---
                        CNode* selectedComp = rows[i].nodePtr;

                        // 模拟操作：修改状态并保存
                        selectedComp->computer.isOpen = false; // 标记为占用
                        time_t now = 0;
                        struct tm* local = { 0 };
                        char buffer[80] = { 0 };

                        now = time(NULL);

                        local = localtime(&now);
                        
                        strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", local);

                        Records record = { 0 };

                        strcpy(record.Cid, selectedComp->computer.Cid);
                        strcpy(record.CRid, selectedComp->computer.CRid);
                        strcpy(record.Uid, Uid);
                        strcpy(record.time, buffer);
                        record.status = 0;

                        RNode* recordList = loadRecordsFromFile("recordList.txt");

                        addNode(&recordList, record);

                        saveRecordsToFile(recordList, "recordList.txt");

                        freeList(recordList);

                        saveComputersToFile(allComputers, "computerList.txt"); // 实际项目中取消注释

                        cleardevice();
                        setfont(40, 0, "楷体");
                        settextcolor(BLACK);
                        char msgBuf[100];
                        sprintf(msgBuf, "已成功锁定计算机：%s", selectedComp->computer.Cid);
                        outtextxy(200, 240, msgBuf);
                        outtextxy(200, 300, "祝您使用愉快！");
                        settextcolor(BLACK);
                        outtextxy(200, 360, "按任意键返回...");
                        getch();

                        running = false; // 退出当前详情页
                        break;
                    }
                    break;
                }
            }

            if (!running) break;

            // B. 检查“返回”按钮
            bool isBackHovered = (mx >= back_btn_x && mx <= back_btn_x + back_btn_w &&
                my >= back_btn_y && my <= back_btn_y + back_btn_h);

            if (isBackHovered) {
                if (isLeftClick) {
                    running = false; // 直接返回
                    break;
                }
            }

            if (!running) break;

            // --- 重绘逻辑 (优化闪烁) ---

            // 1. 重绘列表按钮高亮
            if (hoveredIndex != lastHoveredIndex) {
                // 恢复上一个
                if (lastHoveredIndex != -1 && rows[lastHoveredIndex].isValid) {
                    CNode* prevNode = rows[lastHoveredIndex].nodePtr;
                    if (prevNode->computer.isOpen) {
                        setfillcolor(PINK); setlinecolor(PINK); settextcolor(BLACK);
                        fillrect(btn_x_start, rows[lastHoveredIndex].y_top, btn_x_end, rows[lastHoveredIndex].y_bottom);
                        rectangle(btn_x_start, rows[lastHoveredIndex].y_top, btn_x_end, rows[lastHoveredIndex].y_bottom);
                        outtextxy(btn_x_start + 3, rows[lastHoveredIndex].y_top + 4, "使用");
                    }
                }
                // 高亮当前
                if (hoveredIndex != -1) {
                    setfillcolor(HOTPINK); setlinecolor(PINK); settextcolor(BLACK);
                    fillrect(btn_x_start, rows[hoveredIndex].y_top, btn_x_end, rows[hoveredIndex].y_bottom);
                    rectangle(btn_x_start, rows[hoveredIndex].y_top, btn_x_end, rows[hoveredIndex].y_bottom);
                    outtextxy(btn_x_start + 3, rows[hoveredIndex].y_top + 4, "使用");
                }
                lastHoveredIndex = hoveredIndex;
            }

            // 2. 重绘返回按钮高亮
            if (isBackHovered != backBtnHovered) {
                if (isBackHovered) {
                    setfillcolor(HOTPINK); setlinecolor(PINK);
                }
                else {
                    setfillcolor(PINK); setlinecolor(PINK);
                }
                fillrect(back_btn_x, back_btn_y, back_btn_x + back_btn_w, back_btn_y + back_btn_h);
                settextcolor(WHITE);
                outtextxy(back_btn_x + 10, back_btn_y + 10, "返回上级");
                backBtnHovered = isBackHovered;
            }
        }
    }
    cleardevice();

    setfont(60, 0, "华文行楷");
    outtextxy(380, 45, "用户");

    setfont(40, 0, "楷体");
    settextcolor(BLACK);
    setlinewidth(2);
    setlinecolor(LIGHTGRAY);
    line(100, 120, 800, 120);
    setlinecolor(PINK);
    initUserFunc(Uid);
}

void modifyUserInfo(char* Uid) {
    // 1. 获取当前登录用户的学号 (假设有一个全局变量或函数获取)
    // 如果你的系统里 currentUser 是全局指针，直接用 currentUser->user.Uid
    // 这里沿用你的逻辑，假设需要重新输入或从全局获取
    char currentId[10] = { 0 };

    // 【重要】请根据实际情况修改这里：
    // 方案A: 如果已经登录，直接从全局变量拿 (推荐)
    // extern UNode* currentUserGlobal; 
    // if(currentUserGlobal) strcpy(currentId, currentUserGlobal->user.Uid);

    // 方案B: 如果没有全局变量，可能需要再次输入 (如你原代码)
    // 为了演示流畅，我这里假设你有一个全局变量 g_currentUserId
    // 请在你的主程序定义这个全局数组
    
    strcpy(currentId, Uid);

    // 2. 加载用户链表
    UNode* userList = loadUsersFromFile("userList.txt");
    if (userList == NULL) {
        MessageBox(NULL, "读取用户文件失败！", "错误", MB_OK);
        return;
    }

    // 3. 查找当前用户
    UNode* targetNode = NULL;
    UNode* p = userList;
    while (p != NULL) {
        if (strcmp(p->user.Uid, currentId) == 0) {
            targetNode = p;
            break;
        }
        p = p->next;
    }

    if (targetNode == NULL) {
        cleardevice();
        setfont(40, 0, "楷体");
        //settextcolor(RED);
        outtextxy(250, 240, "未找到该用户信息！");
        getch();
        freeList(userList);
        return;
    }

    // 4. 进入修改界面 (传入找到的节点和链表头以便保存)
    initModifyUserUI(targetNode, userList);

    // 5. 释放内存
    freeList(userList);
}

void initModifyUserUI(UNode* node, UNode* head) {
    bool running = true;

    // --- 1. 初始化输入框 ---
    setfont(20, 0, "楷书");
    int dh = textheight("示例");

    sys_edit editName, editId, editPwd, editTel;

    // 用户名
    editName.create(false);
    editName.move(325, 200);
    editName.size(250, dh + 8);
    editName.setmaxlen(14);
    editName.setbgcolor(PINK);
    editName.setcolor(BLACK);
    editName.setfont(20, 0, "宋体");
    editName.visible(true);
    editName.settext(node->user.name);

    // 学号 (通常不建议修改学号，这里设为可改但逻辑上最好只读，按你的需求改为可改)
    editId.create(false);
    editId.move(325, 250);
    editId.size(250, dh);
    editId.setmaxlen(8);
    editId.setbgcolor(PINK);
    editId.setcolor(BLACK);
    editId.setfont(20, 0, "宋体");
    editId.visible(true);
    editId.settext(node->user.Uid);
    editId.setreadonly(true);

    // 密码
    editPwd.create(false);
    editPwd.move(325, 300);
    editPwd.size(250, dh);
    editPwd.setmaxlen(20);
    editPwd.setbgcolor(PINK);
    editPwd.setcolor(BLACK);
    editPwd.setfont(20, 0, "宋体");
    editPwd.visible(true);
    editPwd.settext(node->user.password);

    // 电话
    editTel.create(false);
    editTel.move(325, 350);
    editTel.size(250, dh);
    editTel.setmaxlen(11);
    editTel.setbgcolor(PINK);
    editTel.setcolor(BLACK);
    editTel.setfont(20, 0, "宋体");
    editTel.visible(true);
    editTel.settext(node->user.tel);

    // 默认焦点给第一个
    editName.setfocus();

    // 按钮区域定义
    int btn_w = 100, btn_h = 40;
    int save_btn_x = 300, save_btn_y = 500;
    int back_btn_x = 500, back_btn_y = 500;

    // 标签绘制 (在循环外绘制一次背景，循环内只重绘按钮和输入框变化)
    cleardevice();
    setfont(60, 0, "华文行楷");
    outtextxy(330, 45, "修改用户");
    setfont(20, 0, "华文行楷");
    setlinewidth(2);
    setlinecolor(LIGHTGRAY);
    line(100, 120, 800, 120);
    setlinecolor(PINK);

    outtextxy(330, 180, "用户名");
    outtextxy(330, 230, "学号");
    outtextxy(330, 280, "密码");
    outtextxy(330, 330, "联系方式");

    char msgBuf[100] = { 0 }; // 用于显示提示信息

    while (running) {
        // --- 处理消息 ---
        bool needRedrawButtons = false;
        bool hoverSave = false;
        bool hoverBack = false;

        while (mousemsg()) {
            mouse_msg msg = getmouse();
            int mx = msg.x;
            int my = msg.y;
            bool isLeftDown = (msg.is_left() && msg.is_down());

            // 1. 检查是否点击了输入框 (切换焦点)
            // 注意：sys_edit 旧版 API 可能需要手动 setfocus
            if (mx >= 325 && mx <= 325 + 250 && my >= 200 && my <= 200 + dh && isLeftDown) {
                editName.setfocus();
            }
            else if (mx >= 325 && mx <= 325 + 250 && my >= 300 && my <= 300 + dh &&isLeftDown) {
                editId.setfocus();
            }
            else if (mx >= 325 && mx <= 325 + 250 && my >= 400 && my <= 400 + dh && isLeftDown) {
                editPwd.setfocus();
            }
            else if (mx >= 325 && mx <= 325 + 250 && my >= 500 && my <= 500 + dh && isLeftDown) {
                editTel.setfocus();
            }

            // 2. 检查保存按钮悬停
            hoverSave = (mx >= save_btn_x && mx <= save_btn_x + btn_w && my >= save_btn_y && my <= save_btn_y + btn_h);

            // 3. 检查返回按钮悬停
            hoverBack = (mx >= back_btn_x && mx <= back_btn_x + btn_w && my >= back_btn_y && my <= back_btn_y + btn_h);

            // 4. 处理点击
            if (isLeftDown) {
                if (hoverSave) {
                    // --- 执行保存逻辑 ---
                    char tempName[15] = { 0 }, tempId[9] = { 0 }, tempPwd[21] = { 0 }, tempTel[12] = { 0 };

                    editName.gettext(sizeof(tempName), tempName);
                    editId.gettext(sizeof(tempId), tempId);
                    editPwd.gettext(sizeof(tempPwd), tempPwd);
                    editTel.gettext(sizeof(tempTel), tempTel);

                    // 校验
                    if (strlen(tempName) == 0 || strlen(tempId) == 0 || strlen(tempPwd) == 0 || strlen(tempTel) == 0) {
                        strcpy(msgBuf, "请填写完整所有信息！");
                        settextcolor(RED);
                    }
                    else {
                        // 更新内存
                        strcpy(node->user.name, tempName);
                        strcpy(node->user.Uid, tempId);
                        strcpy(node->user.password, tempPwd);
                        strcpy(node->user.tel, tempTel);

                        // 保存到文件
                        saveUsersToFile(head, "userList.txt");
                            strcpy(msgBuf, "修改成功！已保存。");
                            settextcolor(GREEN);
                            // 延迟一下让用户看到，然后退出
                            getch();
                            running = false;
                    }
                    // 清空消息防止重复触发
                    while (mousemsg()) getmouse();
                }
                else if (hoverBack) {
                    running = false;
                }
            }

            needRedrawButtons = true;
        }

        // 处理键盘 (ESC 退出)
        if (kbhit()) {
            key_msg kmsg = getkey();
            if (kmsg.key == key_esc) {
                running = false;
            }
            // 如果需要支持 Tab 切换焦点，可以在这里添加逻辑
        }

        // --- 重绘区域 ---

        // 1. 重绘按钮 (避免闪烁，只重绘按钮区域)
        // 保存按钮
        if (hoverSave) {
            setfillcolor(HOTPINK); setlinecolor(PINK);
        }
        else {
            setfillcolor(PINK); setlinecolor(PINK);
        }
        fillrect(save_btn_x, save_btn_y, save_btn_x + btn_w, save_btn_y + btn_h);
        rectangle(save_btn_x, save_btn_y, save_btn_x + btn_w, save_btn_y + btn_h);
        settextcolor(BLACK);
        outtextxy(save_btn_x + 20, save_btn_y + 10, "保存");

        // 返回按钮
        if (hoverBack) {
            setfillcolor(HOTPINK); setlinecolor(PINK);
        }
        else {
            setfillcolor(PINK); setlinecolor(PINK);
        }
        fillrect(back_btn_x, back_btn_y, back_btn_x + btn_w, back_btn_y + btn_h);
        rectangle(back_btn_x, back_btn_y, back_btn_x + btn_w, back_btn_y + btn_h);
        settextcolor(BLACK);
        outtextxy(back_btn_x + 20, back_btn_y + 10, "返回");

        // 2. 绘制提示信息
        if (strlen(msgBuf) > 0) {
            // 先擦除旧提示 (简单用背景色覆盖)
            setfillcolor(WHITE);
            fillrect(250, 540, 550, 570);

            setfont(20, 0, "楷体");
            outtextxy(250, 545, msgBuf);

            // 如果不是成功退出的消息，过一会清空，防止一直显示
            // 这里简化处理，每次循环都画，只有成功才退出
        }

        delay_fps(144);
    }

    // 销毁控件
    editName.destroy();
    editId.destroy();
    editPwd.destroy();
    editTel.destroy();
}

void checkRecord(char* Uid) {
    RNode* recordList = loadRecordsFromFile("recordList.txt");

    if (recordList == NULL) {
        /*puts("No users found in the system or file error.");
        system("pause");*/
        return;
    }

    RNode* current = recordList;

    cleardevice();

    setfont(60, 0, "华文行楷");
    outtextxy(330, 45, "查看记录");
    setfont(20, 0, "楷体");
    setlinewidth(2);
    setlinecolor(LIGHTGRAY);
    line(100, 120, 800, 120);
    setlinecolor(PINK);

    int gap = 130;
    int startx = 105;

    setfont(20, 0, "楷体");
    xyprintf(startx, gap, "%7s\t %10s\t %14s\t %12s\t %16s\n", "学号", "机房号", "计算机号", "时间", "情况");

    while (current != NULL) {
        if (strcmp(Uid, current->record.Uid) == 0) {
            gap += 20;
            initCheckRecord(current, gap, startx);
        }
        current = current->next;
    }

    freeList(recordList);

    getch();
}

void initCheckRecord(RNode* current, int gap, int startx) {
    setfont(60, 0, "华文行楷");
    outtextxy(330, 45, "查看记录");
    setfont(20, 0, "楷体");
    setlinewidth(2);
    setlinecolor(LIGHTGRAY);
    line(100, 120, 800, 120);
    setlinecolor(PINK);

    char status[15] = { 0 };

    switch (current->record.status) {
    case 0:
        strcpy(status, "待签到");
        break;
    case 1:
        strcpy(status, "使用中");
        break;
    case 2:
        strcpy(status, "已完成");
        break;
    case 3:
        strcpy(status, "已取消");
        break;
    }

    xyprintf(startx, gap, "%s\t %9s\t %13s\t %20s\t %10s\n", current->record.Uid, current->record.CRid, current->record.Cid, current->record.time, status);
}

void signIn(char* Uid) {
    RNode* recordList = loadRecordsFromFile("recordList.txt");
    CNode* computerList = loadComputersFromFile("computerList.txt");

    if (recordList == NULL || computerList == NULL) {
        return;
    }

    cleardevice();

    // --- 界面标题绘制 ---
    setfont(60, 0, "华文行楷");
    outtextxy(330, 45, "签到签退");
    setfont(20, 0, "楷体");
    setlinewidth(2);
    setlinecolor(LIGHTGRAY);
    line(100, 120, 800, 120);
    setlinecolor(PINK);

    int startx = 50;
    int base_gap = 150;
    int row_height = 40;

    // 用于存储所有行的按钮信息
    typedef struct {
        int y_top;
        int y_bottom;
        RNode* nodePtr;
        bool isValid;
    } SignInRowInfo;

    SignInRowInfo rows[100];
    int rowCount = 0;

    // 初始化数组
    for (int i = 0; i < 100; i++) rows[i].isValid = false;

    int gap = base_gap;

    // --- 绘制表头 ---
    setfont(20, 0, "楷体");
    settextcolor(BLACK);
    xyprintf(startx, gap, "%6s\t %10s\t %12s\t %15s\t %14s\t %8s\t %8s",
        "学号", "机房号", "计算机号", "时间", "状态", "操作1", "操作2");
    gap += row_height;

    // 计算按钮尺寸
    setfont(18, 0, "楷体");
    int btn1_w = textwidth("签退") + 20;
    int btn1_h = textheight("签退") + 6;
    int btn2_w = textwidth("退订") + 20;
    int btn2_h = textheight("退订") + 6;

    // 按钮位置
    int btn1_x_start = 700;
    int btn1_x_end = btn1_x_start + btn1_w;
    int btn2_x_start = btn1_x_end + 25;
    int btn2_x_end = btn2_x_start + btn2_w;

    RNode* current = recordList;
    int count = 0;

    // --- 绘制列表并记录按钮坐标 ---
    while (current != NULL && count < 100) {
        // 只显示当前用户的记录
        if (strcmp(Uid, current->record.Uid) == 0) {
            char statusStr[15] = { 0 };
            char btn1Text[10] = { 0 };
            bool canSignIn = false;
            bool canCancel = false;

            // 根据状态设置显示文字和按钮可用性
            switch (current->record.status) {
            case 0:
                strcpy(statusStr, "待签到");
                strcpy(btn1Text, "签到");
                canSignIn = true;
                canCancel = true;
                break;
            case 1:
                strcpy(statusStr, "使用中");
                strcpy(btn1Text, "签退");
                canSignIn = true;
                canCancel = false;
                break;
            case 2:
                strcpy(statusStr, "已完成");
                canSignIn = false;
                canCancel = false;
                break;
            case 3:
                strcpy(statusStr, "已取消");
                canSignIn = false;
                canCancel = false;
                break;
            default:
                strcpy(statusStr, "未知");
                canSignIn = false;
                canCancel = false;
                break;
            }

            // 绘制文本信息
            settextcolor(BLACK);
            xyprintf(startx, gap, "%s\t %9s\t %13s\t %26s\t %10s",
                current->record.Uid,
                current->record.CRid,
                current->record.Cid,
                current->record.time,
                statusStr);

            gap += row_height;

            // 记录这一行的按钮信息
            rows[count].y_top = gap - 2;
            rows[count].y_bottom = gap + btn1_h + 2;
            rows[count].nodePtr = current;
            rows[count].isValid = true;

            // 绘制第一个按钮（签到/签退）
            if (canSignIn) {
                setfillcolor(PINK);
                setlinecolor(PINK);
                fillrect(btn1_x_start, rows[count].y_top, btn1_x_end, rows[count].y_bottom);
                rectangle(btn1_x_start, rows[count].y_top, btn1_x_end, rows[count].y_bottom);
                settextcolor(BLACK);
                int textX = btn1_x_start + (btn1_w - textwidth(btn1Text)) / 2;
                outtextxy(textX, rows[count].y_top + 4, btn1Text);
            }

            // 绘制第二个按钮（退订）- 只有待签到状态才显示
            if (canCancel) {
                setfillcolor(PINK);
                setlinecolor(PINK);
                fillrect(btn2_x_start, rows[count].y_top, btn2_x_end, rows[count].y_bottom);
                rectangle(btn2_x_start, rows[count].y_top, btn2_x_end, rows[count].y_bottom);
                settextcolor(BLACK);
                int textX = btn2_x_start + (btn2_w - textwidth("退订")) / 2;
                outtextxy(textX, rows[count].y_top + 4, "退订");
            }

            rowCount++;
            count++;
        }
        current = current->next;
        
    }

    if (rowCount == 0) {
        settextcolor(BLACK);
        outtextxy(300, 300, "暂无记录");
        getch();
        freeList(recordList);
        freeList(computerList);
        return;
    }

    // --- 绘制返回按钮 ---
    int back_btn_x = 350;
    int back_btn_y = 550;
    int back_btn_w = 100;
    int back_btn_h = 40;

    setfillcolor(PINK);
    setlinecolor(PINK);
    fillrect(back_btn_x, back_btn_y, back_btn_x + back_btn_w, back_btn_y + back_btn_h);
    rectangle(back_btn_x, back_btn_y, back_btn_x + back_btn_w, back_btn_y + back_btn_h);
    settextcolor(BLACK);
    outtextxy(back_btn_x + 35, back_btn_y + 10, "返回");

    // --- 鼠标交互循环 ---
    bool running = true;
    int lastHoveredIndex = -1;
    int lastHoveredBtn = 0; // 1表示第一个按钮，2表示第二个按钮
    bool backBtnHovered = false;

    while (running) {
        while (mousemsg()) {
            mouse_msg msg = getmouse();
            int mx = msg.x;
            int my = msg.y;
            bool isLeftClick = (msg.is_left() && msg.is_down());

            int hoveredIndex = -1;
            int hoveredBtn = 0;

            // 检查列表中的按钮
            for (int i = 0; i < rowCount; i++) {
                if (!rows[i].isValid) continue;

                RNode* node = rows[i].nodePtr;
                bool canSignIn = (node->record.status == 0 || node->record.status == 1);
                bool canCancel = (node->record.status == 0);

                // 检查第一个按钮
                if (canSignIn && mx >= btn1_x_start && mx <= btn1_x_end &&
                    my >= rows[i].y_top && my <= rows[i].y_bottom) {
                    hoveredIndex = i;
                    hoveredBtn = 1;

                    if (isLeftClick) {
                        // 执行签到/签退逻辑
                        if (node->record.status == 0) {
                            node->record.status = 1; // 待签到 -> 使用中
                        }
                        else if (node->record.status == 1) {
                            node->record.status = 2; // 使用中 -> 已完成
                            CNode* current1 = findComputers(computerList, node->record.CRid, node->record.Cid);
                            if (current1 != NULL) {
                                current1->computer.isOpen = true;
                            }
                        }

                        // 保存到文件
                        saveRecordsToFile(recordList, "recordList.txt");
                        saveComputersToFile(computerList, "computerList.txt");

                        // 刷新界面
                        cleardevice();
                        setfont(40, 0, "楷体");
                        settextcolor(BLACK);
                        char msgBuf[100];
                        if (node->record.status == 1) {
                            sprintf(msgBuf, "签到成功！");
                        }
                        else {
                            sprintf(msgBuf, "签退成功！");
                        }
                        outtextxy(300, 240, msgBuf);
                        outtextxy(250, 300, "按任意键返回...");
                        getch();
                        running = false;
                        break;
                    }
                    break;
                }

                // 检查第二个按钮（退订）
                if (canCancel && mx >= btn2_x_start && mx <= btn2_x_end &&
                    my >= rows[i].y_top && my <= rows[i].y_bottom) {
                    hoveredIndex = i;
                    hoveredBtn = 2;

                    if (isLeftClick) {
                        // 执行退订逻辑
                        node->record.status = 3; // 设置为已取消
                        CNode* current1 = findComputers(computerList, node->record.CRid, node->record.Cid);
                        if (current1 != NULL) {
                            current1->computer.isOpen = true;
                        }

                        // 保存到文件
                        saveRecordsToFile(recordList, "recordList.txt");
                        saveComputersToFile(computerList, "computerList.txt");

                        // 刷新界面
                        cleardevice();
                        setfont(40, 0, "楷体");
                        settextcolor(BLACK);
                        outtextxy(300, 240, "退订成功！");
                        outtextxy(250, 300, "按任意键返回...");
                        getch();
                        running = false;
                        break;
                    }
                    break;
                }
            }

            if (!running) break;

            // 检查返回按钮
            bool isBackHovered = (mx >= back_btn_x && mx <= back_btn_x + back_btn_w &&
                my >= back_btn_y && my <= back_btn_y + back_btn_h);

            if (isBackHovered && isLeftClick) {
                running = false;
                break;
            }

            // --- 重绘按钮状态（悬停高亮） ---
            if (hoveredIndex != lastHoveredIndex || hoveredBtn != lastHoveredBtn) {
                // 恢复上一个按钮状态
                if (lastHoveredIndex != -1 && lastHoveredIndex < rowCount && rows[lastHoveredIndex].isValid) {
                    RNode* prevNode = rows[lastHoveredIndex].nodePtr;

                    if (lastHoveredBtn == 1) {
                        // 恢复第一个按钮
                        bool canSignIn = (prevNode->record.status == 0 || prevNode->record.status == 1);
                        if (canSignIn) {
                            setfillcolor(PINK);
                            setlinecolor(PINK);
                            fillrect(btn1_x_start, rows[lastHoveredIndex].y_top, btn1_x_end, rows[lastHoveredIndex].y_bottom);
                            rectangle(btn1_x_start, rows[lastHoveredIndex].y_top, btn1_x_end, rows[lastHoveredIndex].y_bottom);
                            settextcolor(BLACK);
                            const char* btnText = (prevNode->record.status == 0) ? "签到" : "签退";
                            int textX = btn1_x_start + (btn1_w - textwidth(btnText)) / 2;
                            outtextxy(textX, rows[lastHoveredIndex].y_top + 4, btnText);
                        }
                    }
                    else if (lastHoveredBtn == 2) {
                        // 恢复第二个按钮
                        bool canCancel = (prevNode->record.status == 0);
                        if (canCancel) {
                            setfillcolor(PINK);
                            setlinecolor(PINK);
                            fillrect(btn2_x_start, rows[lastHoveredIndex].y_top, btn2_x_end, rows[lastHoveredIndex].y_bottom);
                            rectangle(btn2_x_start, rows[lastHoveredIndex].y_top, btn2_x_end, rows[lastHoveredIndex].y_bottom);
                            settextcolor(BLACK);
                            int textX = btn2_x_start + (btn2_w - textwidth("退订")) / 2;
                            outtextxy(textX, rows[lastHoveredIndex].y_top + 4, "退订");
                        }
                    }
                }

                // 绘制当前悬停按钮（高亮）
                if (hoveredIndex != -1) {
                    RNode* currNode = rows[hoveredIndex].nodePtr;

                    if (hoveredBtn == 1) {
                        setfillcolor(HOTPINK);
                        setlinecolor(PINK);
                        fillrect(btn1_x_start, rows[hoveredIndex].y_top, btn1_x_end, rows[hoveredIndex].y_bottom);
                        rectangle(btn1_x_start, rows[hoveredIndex].y_top, btn1_x_end, rows[hoveredIndex].y_bottom);
                        settextcolor(BLACK);
                        const char* btnText = (currNode->record.status == 0) ? "签到" : "签退";
                        int textX = btn1_x_start + (btn1_w - textwidth(btnText)) / 2;
                        outtextxy(textX, rows[hoveredIndex].y_top + 4, btnText);
                    }
                    else if (hoveredBtn == 2) {
                        setfillcolor(HOTPINK);
                        setlinecolor(PINK);
                        fillrect(btn2_x_start, rows[hoveredIndex].y_top, btn2_x_end, rows[hoveredIndex].y_bottom);
                        rectangle(btn2_x_start, rows[hoveredIndex].y_top, btn2_x_end, rows[hoveredIndex].y_bottom);
                        settextcolor(BLACK);
                        int textX = btn2_x_start + (btn2_w - textwidth("退订")) / 2;
                        outtextxy(textX, rows[hoveredIndex].y_top + 4, "退订");
                    }
                }

                lastHoveredIndex = hoveredIndex;
                lastHoveredBtn = hoveredBtn;
            }

            // 重绘返回按钮高亮
            if (isBackHovered != backBtnHovered) {
                if (isBackHovered) {
                    setfillcolor(HOTPINK);
                    setlinecolor(PINK);
                }
                else {
                    setfillcolor(PINK);
                    setlinecolor(PINK);
                }
                fillrect(back_btn_x, back_btn_y, back_btn_x + back_btn_w, back_btn_y + back_btn_h);
                rectangle(back_btn_x, back_btn_y, back_btn_x + back_btn_w, back_btn_y + back_btn_h);
                settextcolor(BLACK);
                outtextxy(back_btn_x + 35, back_btn_y + 10, "返回");
                backBtnHovered = isBackHovered;
            }
        }
    }

    // 清理资源
    freeList(recordList);
    freeList(computerList);
}