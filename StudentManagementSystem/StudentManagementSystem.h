#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void Welcome();
void InputStudent();
void PrintStudent();

//����һ��ѧ��
typedef struct _Student
{
	char name[20];	//����
	int age;				//����
	int stuNumber;	//ѧ��
	int grade;				//�ɼ�
}Student;
//�ڵ㣨���ᣩ
typedef struct  _Node
{
	Student stu;					//ѧ��
	struct _Node* pNext;	//ָ����һ���ڵ��ָ��
}Node;

Node* g_pHead = NULL; //ͷָ�루����ͷ�ڵ��ַ��ָ���������	




