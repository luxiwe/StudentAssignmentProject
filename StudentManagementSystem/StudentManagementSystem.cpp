//基于链表实现

#include "StudentManagementSystem.h"

int main(void)
{
	while (1)
	{
		Welcome();
		char ch = _getch();
		switch (ch)
		{
		case '1':
			InputStudent();
			break;
		case '2':
			PrintStudent();
			break;
		case '3':
			break;
		case '4':
			break;
		case '5':
			break;
		case '6':
			break;
		case '7':
			break;
		case '8':
			break;
		case '0':
			exit(0);
			break;
		}
	}

	return 0;
}



//打印界面
void Welcome()
{
	printf("*****************************************************************\n");
	printf("*\t\t欢迎使用高校学生成绩管理系统V1.0\t\t*\n");
	printf("*****************************************************************\n");
	printf("*****************************************************************\n");
	printf("*\t\t\t  请选择功能列表\t\t\t*\n");
	printf("*\t\t\t  1.录入学生信息\t\t\t*\n");
	printf("*\t\t\t  2.打印学生信息\t\t\t*\n");
	printf("*\t\t\t  3.保存学生信息\t\t\t*\n");
	printf("*\t\t\t  4.读取学生信息\t\t\t*\n");
	printf("*\t\t\t  5.统计所有学生人数\t\t\t*\n");
	printf("*\t\t\t  6.查找学生信息\t\t\t*\n");
	printf("*\t\t\t  7.修改学生信息\t\t\t*\n");
	printf("*\t\t\t  8.删除学生信息\t\t\t*\n");
	printf("*\t\t\t  0.退出系统\t\t\t\t*\n");

	printf("*****************************************************************\n");
}
//输入学生信息
void InputStudent()
{
	system("cls");

	//创建一个新节点
	Node* pNewNode = (Node*)malloc(sizeof(Node));
	pNewNode->pNext = NULL;

	//头插法、尾插法
	//头插法
	if (g_pHead == NULL)
	{
		g_pHead = pNewNode;
	}
	else
	{
		pNewNode->pNext = g_pHead;
		g_pHead = pNewNode;
	}

	printf("\n请输入学生的姓名：");
	scanf("%s", pNewNode->stu.name); //数组名就是地址，不要加取地址符。
	printf("\n请输入学生的年龄：");
	scanf("%d", &pNewNode->stu.age);
	printf("\n请输入学生的学号：");
	scanf("%d", &pNewNode->stu.stuNumber);
	printf("\n请输入学生的成绩：");
	scanf("%d", &pNewNode->stu.grade);

	printf("学生信息录入成功！");
	
	system("pause");
	system("cls");
}
//打印学生信息
void PrintStudent()
{
	system("cls");

	printf("*****************************************************************\n");
	printf("*\t\t  欢迎使用高校学生管理系统V1.0  \t\t*\n");
	printf("*****************************************************************\n");

	printf("*\t学号\t*\t姓名\t*\t年龄\t*\t成绩\t*\n");
	printf("*****************************************************************\n");

	Node* p = g_pHead;

	while (p != NULL)
	{
		printf("*\t%s\t*\t%d\t*\t%d\t*\t%d\t*\n",
					p->stu.name,
					p->stu.age,
					p->stu.stuNumber,
					p->stu.grade);
		p = p->pNext;
	}

	printf("*****************************************************************\n");

	system("pause");
	system("cls");
}

