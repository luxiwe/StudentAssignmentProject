#include <stdio.h>
#include <graphics.h>
#include <conio.h>


//背景图片常量
#define WINDOW_WIDTH 368
#define WINDOW_HEIGHT 234
//角色图片常量
#define PEOPLE_WIDTH 22
#define PEOPLE_HEIGHT 45

//初始化，准备工作
void initGame();
//界面绘制（贴图）
void darwGame();
//控制
void ctrlGame();

//图片变量
IMAGE bk, people;


//人物坐标
int x, y;
//八个分解动作
int n;
//人物的方向			0 up; 1down; 2left; 3right;
int dir;

int main(void)
{

	initGame();

	while (1)
	{
		darwGame();
		Sleep(200);
		n++;
		if (n >= 4) n = 0;
		ctrlGame();
	};

	return 0;
}



void initGame()				//准备工作
{
	initgraph(WINDOW_WIDTH, WINDOW_HEIGHT, SHOWCONSOLE);

	loadimage(&bk, L"bk.bmp");
	loadimage(&people, L"people.bmp");

	x = y = 100;
	dir = 1;
	n = 0;
}
void darwGame()				//贴图
{
	switch (dir)
	{
	case 0:
		putimage(0, 0, &bk);
		putimage(x, y, PEOPLE_WIDTH, PEOPLE_HEIGHT, &people, 5 + n * PEOPLE_WIDTH + 11 * n, 2 + 3 * PEOPLE_HEIGHT + 4 * 3, SRCPAINT);
		break;
	case 1:
		putimage(0, 0, &bk);
		putimage(x, y, PEOPLE_WIDTH, PEOPLE_HEIGHT, &people, 5 + n * PEOPLE_WIDTH + 11 * n, 2 + 0 * PEOPLE_HEIGHT + 4 * 0, SRCPAINT);
		break;
	case 2:
		putimage(0, 0, &bk);
		putimage(x, y, PEOPLE_WIDTH, PEOPLE_HEIGHT, &people, 5 + n * PEOPLE_WIDTH + 11 * n, 2 + 1 * PEOPLE_HEIGHT + 4 * 1, SRCPAINT);
		break;
	case 3:
		putimage(0, 0, &bk);
		putimage(x, y, PEOPLE_WIDTH, PEOPLE_HEIGHT, &people, 5 + n * PEOPLE_WIDTH + 11 * n, 2 + 2 * PEOPLE_HEIGHT + 4 * 2, SRCPAINT);
		break;
	}
}
void ctrlGame()
{
	//先获取用户输入
	int ch = _getch();
	printf("ch:%d\n", ch);

	//根据用户输入来改变
	switch (ch)
	{
	case 'w':
	case 'W':
	case 72:
		dir = 0;
		y -= 3;
		break;

	case 's':
	case 'S':
	case 80:
		dir = 1;
		y += 3;
		break;

	case 'a':
	case 'A':
	case 75:
		dir = 2;
		x -= 3;
		break;

	case 'd':
	case 'D':
	case 77:
		dir = 3;
		x += 3;
		break;
	}
}