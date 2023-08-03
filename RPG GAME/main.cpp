#include <stdio.h>
#include <graphics.h>
#include <conio.h>


//����ͼƬ����
#define WINDOW_WIDTH 368
#define WINDOW_HEIGHT 234
//��ɫͼƬ����
#define PEOPLE_WIDTH 22
#define PEOPLE_HEIGHT 45

//��ʼ����׼������
void initGame();
//������ƣ���ͼ��
void darwGame();
//����
void ctrlGame();

//ͼƬ����
IMAGE bk, people;


//��������
int x, y;
//�˸��ֽ⶯��
int n;
//����ķ���			0 up; 1down; 2left; 3right;
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



void initGame()				//׼������
{
	initgraph(WINDOW_WIDTH, WINDOW_HEIGHT, SHOWCONSOLE);

	loadimage(&bk, L"bk.bmp");
	loadimage(&people, L"people.bmp");

	x = y = 100;
	dir = 1;
	n = 0;
}
void darwGame()				//��ͼ
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
	//�Ȼ�ȡ�û�����
	int ch = _getch();
	printf("ch:%d\n", ch);

	//�����û��������ı�
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