#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct NODELIST
{
	int element;
	struct NODELIST* next;
}NODE;

NODE* headNODE(NODE* node)//��ʼ��
{
	node = (NODE*)malloc(sizeof(NODE));
	if (node == NULL)
	{
		printf("error\n");
	}
	else
	{
		node->next = NULL;
		return node;
	}
}
void Stackin(NODE* node, int element)//��ջ����
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->next = node->next;
	node->next = temp;
	temp->element = element;
}
void Stackout(NODE* node)//��ջ����
{
	//NODE* temp = (NODE*)malloc(sizeof(NODE));
	if (node->next == NULL)
	{
		printf("ջ�ѿ�\n");
		return;
	}
	NODE* d = node->next;//�洢��ɾ�����
	node->next = node->next->next;
	free(d);//�ͷ�
}
int Countelement(NODE* node)
{
	int count = 0;
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->next = node->next;
	while (temp->next != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}
void Printstack(NODE* node)
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp = node->next;
	while (temp != NULL)
	{
		printf("%d ", temp->element);
		temp = temp->next;
	}
	printf("\n");
	int count = Countelement(node);
	printf("ջԪ��Ϊ%d\n", count);
}

//int main()
//{
//	NODE* head = (NODE*)malloc(sizeof(NODE));
//	head = headNODE(head);
//	for (int i = 1; i <= 4; i++)
//	{
//		Stackin(head, i);
//	}
//	Printstack(head);
//
//	Stackout(head);
//	Stackout(head);
//	Stackout(head);
//	Stackout(head);
//	Printstack(head);
//
//	Stackin(head, 1919810);
//	Stackin(head, 114514);
//	Printstack(head);
//	Stackout(head);
//	Printstack(head);
//
//	return 0;
//}