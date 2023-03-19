#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

using namespace std;
#include<stdio.h>
#include<stdlib.h>
typedef struct NODELIST
{
	int element;
	struct NODELIST* next;
}NODE;

NODE* headNODE(NODE* node ,int key)//��ʼ��ͷ���
{
	node = (NODE*)malloc(sizeof(NODE));
	if (node == NULL)
	{
		printf("error\n");
	}
	else
	{
		node->element = key;
		node->next = node;
		return node;
	}
}

void head_insert(NODE* node, int element)//ͷ�庯��
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->next = node->next;
	node->next = temp;
	temp->element = element;
}

void wei_insert(NODE* node, int element)//β��庯��
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp = node;
	while (temp->next != node)
	{
		temp = temp->next;//�ҵ���ĩβ�Ľ��
	}
	NODE* temp2 = (NODE*)malloc(sizeof(NODE));//����½��
	temp2->next = node;
	temp2->element = element;
	temp->next = temp2;

}
NODE* find(NODE* node, int element)//���Һ��� ���ز���Ԫ�ص��ϸ����ָ��
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	NODE* temp2 = (NODE*)malloc(sizeof(NODE));//���ڴ洢��һ�����
	temp = node->next;
	temp2 = node;
	while (temp != node)
	{
		if (temp->element == element)
		{
			return temp2;
			break;
		}
		temp = temp->next;
		temp2 = temp2->next;
	}
	return NULL;
}

void deletee(NODE* node, int element)//ɾ������
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp = find(node, element);
	if (temp == NULL)
	{
		printf("�Ҳ�����ɾ��������:%d\n", element);
		return;
	}
	NODE* d = temp->next;//�洢��ɾ�����
	temp->next = temp->next->next;
	d->next = NULL;//����ɾ�����ָ������ΪNULL
	free(d);//�ͷ�
}
void print(NODE* node)
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp = node;
	do
	{
		printf("%d ", temp->element);
		temp = temp->next;
	}
	while (temp != node);
}
int main()
{
	int n = 0, m = 0, k = 0;
	cin >> n >> m >> k;
	NODE* node1 = NULL;
	node1 = headNODE(node1, 1);
	NODE* node2 = NULL;
	node2 = headNODE(node2, n + 1);
	NODE* temp1 = NULL;
	NODE* temp2 = NULL;
	temp1 = node1;
	temp2 = node2;
	for (int i = 2; i <= n; i++)//��һ������
	{
		wei_insert(node1, i);
	}
	for (int i = n + 2; i <= 2 * n; i++)//�ڶ�������
	{
		wei_insert(node2, i);
	}
	if (m == 1)
	{
		for (int j = 1; j <= k; j++)
		{
			/*int temp = temp1->element;
			temp1->element = temp2->element;
			temp2->element = temp;*/
			swap(temp1->element, temp2->element);
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		print(node1);
		print(node2);
	}
	else
	{
		for (int j = 2; j <= k; j++)
		{
			temp1 = temp1->next;
			temp2 = temp2->next;
			if (j % m == 0)
			{
				swap(temp1->element, temp2->element);
			}
		}
		print(node1);
		print(node2);
	}

	return 0;
}

