#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void Welcome();
void InputStudent();
void PrintStudent();

//定义一个学生
typedef struct _Student
{
	char name[20];	//姓名
	int age;				//年龄
	int stuNumber;	//学号
	int grade;				//成绩
}Student;
//节点（车厢）
typedef struct  _Node
{
	Student stu;					//学生
	struct _Node* pNext;	//指向下一个节点的指针
}Node;

Node* g_pHead = NULL; //头指针（保存头节点地址的指针变量）；	




