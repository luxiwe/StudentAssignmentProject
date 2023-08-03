//��������ʵ��

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



//��ӡ����
void Welcome()
{
	printf("*****************************************************************\n");
	printf("*\t\t��ӭʹ�ø�Уѧ���ɼ�����ϵͳV1.0\t\t*\n");
	printf("*****************************************************************\n");
	printf("*****************************************************************\n");
	printf("*\t\t\t  ��ѡ�����б�\t\t\t*\n");
	printf("*\t\t\t  1.¼��ѧ����Ϣ\t\t\t*\n");
	printf("*\t\t\t  2.��ӡѧ����Ϣ\t\t\t*\n");
	printf("*\t\t\t  3.����ѧ����Ϣ\t\t\t*\n");
	printf("*\t\t\t  4.��ȡѧ����Ϣ\t\t\t*\n");
	printf("*\t\t\t  5.ͳ������ѧ������\t\t\t*\n");
	printf("*\t\t\t  6.����ѧ����Ϣ\t\t\t*\n");
	printf("*\t\t\t  7.�޸�ѧ����Ϣ\t\t\t*\n");
	printf("*\t\t\t  8.ɾ��ѧ����Ϣ\t\t\t*\n");
	printf("*\t\t\t  0.�˳�ϵͳ\t\t\t\t*\n");

	printf("*****************************************************************\n");
}
//����ѧ����Ϣ
void InputStudent()
{
	system("cls");

	//����һ���½ڵ�
	Node* pNewNode = (Node*)malloc(sizeof(Node));
	pNewNode->pNext = NULL;

	//ͷ�巨��β�巨
	//ͷ�巨
	if (g_pHead == NULL)
	{
		g_pHead = pNewNode;
	}
	else
	{
		pNewNode->pNext = g_pHead;
		g_pHead = pNewNode;
	}

	printf("\n������ѧ����������");
	scanf("%s", pNewNode->stu.name); //���������ǵ�ַ����Ҫ��ȡ��ַ����
	printf("\n������ѧ�������䣺");
	scanf("%d", &pNewNode->stu.age);
	printf("\n������ѧ����ѧ�ţ�");
	scanf("%d", &pNewNode->stu.stuNumber);
	printf("\n������ѧ���ĳɼ���");
	scanf("%d", &pNewNode->stu.grade);

	printf("ѧ����Ϣ¼��ɹ���");
	
	system("pause");
	system("cls");
}
//��ӡѧ����Ϣ
void PrintStudent()
{
	system("cls");

	printf("*****************************************************************\n");
	printf("*\t\t  ��ӭʹ�ø�Уѧ������ϵͳV1.0  \t\t*\n");
	printf("*****************************************************************\n");

	printf("*\tѧ��\t*\t����\t*\t����\t*\t�ɼ�\t*\n");
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

