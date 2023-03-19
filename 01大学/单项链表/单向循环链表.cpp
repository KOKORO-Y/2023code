#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct NODELIST
{
	int element;
	struct NODELIST* next;
}NODE;

NODE* headNODE(NODE* node)//��ʼ��ͷ���
{
	node = (NODE*)malloc(sizeof(NODE));
	if (node == NULL)
	{
		printf("error\n");
	}
	else
	{
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
	//NODE* temp = (NODE*)malloc(sizeof(NODE));
	NODE* temp;
	temp = node;
	while (temp->next != node)
	{
		temp = temp->next;//�ҵ���ĩβ�Ľ��
	}
	NODE* temp2 = (NODE*)malloc(sizeof(NODE));//����½��
	temp2->element = element;
	temp2->next = temp->next;
	temp->next = temp2;
}

void elementhou_insert(NODE* node, int element, int element2)//��ָ��Ԫ��element�����element2
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp = node->next;
	while (temp->element != element)//��λָ��Ԫ��
	{
		temp = temp->next;
	}
	NODE* temp2 = (NODE*)malloc(sizeof(NODE));//����½��
	temp2->element = element2;
	temp2->next = temp->next;
	temp->next = temp2;
}
void elementqian_insert(NODE* node, int element, int element2)//��ָ��Ԫ��elementǰ����element2
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	NODE* temp2 = (NODE*)malloc(sizeof(NODE));//���ڴ���ָ��Ԫ�ؽ�����һ�����
	temp = node->next;
	temp2 = node;
	while (temp->element != element)//��λָ��Ԫ��
	{
		temp = temp->next;
		temp2 = temp2->next;
	}
	NODE* temp3 = (NODE*)malloc(sizeof(NODE));//����½��
	temp3->element = element2;
	temp3->next = temp;
	temp2->next = temp3;
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
int main(int argc, char* argv[])
{
	NODE* HEAD = NULL;
	HEAD = headNODE(HEAD);

	head_insert(HEAD, 10);
	head_insert(HEAD, 20);
	head_insert(HEAD, 30);
	head_insert(HEAD, 40);
	head_insert(HEAD, 50);
	deletee(HEAD, 50);
	wei_insert(HEAD, 114);
	wei_insert(HEAD, 514);
	elementhou_insert(HEAD, 20, 1919810);
	elementqian_insert(HEAD, 514, 6);
	deletee(HEAD, 6666);

	NODE* dayin = (NODE*)malloc(sizeof(NODE));
	dayin = HEAD;
	while (dayin->next != HEAD)//��ӡ����
	{
		printf("%d\n", dayin->next->element);
		dayin = dayin->next;
	}

	return 0;
}