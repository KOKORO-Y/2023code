#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct NODELIST
{
	int element;
	struct NODELIST* next;
}NODE;

NODE* headNODE(NODE* node)//初始化头结点
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

void head_insert(NODE* node, int element)//头插函数
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->next = node->next;
	node->next = temp;
	temp->element = element;
}

void wei_insert(NODE* node, int element)//尾后插函数
{
	//NODE* temp = (NODE*)malloc(sizeof(NODE));
	NODE* temp;
	temp = node;
	while (temp->next != node)
	{
		temp = temp->next;//找到最末尾的结点
	}
	NODE* temp2 = (NODE*)malloc(sizeof(NODE));//添加新结点
	temp2->element = element;
	temp2->next = temp->next;
	temp->next = temp2;
}

void elementhou_insert(NODE* node, int element, int element2)//在指定元素element后插入element2
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp = node->next;
	while (temp->element != element)//定位指定元素
	{
		temp = temp->next;
	}
	NODE* temp2 = (NODE*)malloc(sizeof(NODE));//添加新结点
	temp2->element = element2;
	temp2->next = temp->next;
	temp->next = temp2;
}
void elementqian_insert(NODE* node, int element, int element2)//在指定元素element前插入element2
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	NODE* temp2 = (NODE*)malloc(sizeof(NODE));//用于储存指定元素结点的上一个结点
	temp = node->next;
	temp2 = node;
	while (temp->element != element)//定位指定元素
	{
		temp = temp->next;
		temp2 = temp2->next;
	}
	NODE* temp3 = (NODE*)malloc(sizeof(NODE));//添加新结点
	temp3->element = element2;
	temp3->next = temp;
	temp2->next = temp3;
}

NODE* find(NODE* node, int element)//查找函数 返回查找元素的上个结点指针
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	NODE* temp2 = (NODE*)malloc(sizeof(NODE));//用于存储上一个结点
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

void deletee(NODE* node, int element)//删除函数
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp = find(node, element);
	if (temp == NULL)
	{
		printf("找不到待删除的数据:%d\n", element);
		return;
	}
	NODE* d = temp->next;//存储待删除结点
	temp->next = temp->next->next;
	d->next = NULL;//将待删除结点指针重置为NULL
	free(d);//释放
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
	while (dayin->next != HEAD)//打印链表
	{
		printf("%d\n", dayin->next->element);
		dayin = dayin->next;
	}

	return 0;
}