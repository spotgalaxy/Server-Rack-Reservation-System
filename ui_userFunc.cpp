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
				booking();

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
				//记录

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
				//修改

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
				//签到

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

void booking() {
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
                            enterRoomDetail(targetRoom, computerList);

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

void enterRoomDetail(CRNode* targetRoom, CNode* allComputers) {
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
                        saveComputersToFile(allComputers, "computerList.txt"); // 实际项目中取消注释

                        cleardevice();
                        setfont(40, 0, "楷体");
                        settextcolor(GREEN);
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
    initUserFunc();
}


