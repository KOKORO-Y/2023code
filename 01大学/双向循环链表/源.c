#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct doubleloop
{
	struct doubleloop* front;
	int element;
	struct doubleloop* next;
}Node;
Node* node;
void initNode()
{
	node = (Node*)malloc(sizeof(Node));
	node->front = node;
	node->next = node;
}

void insert_head(Node* node, int key)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->element = key;
	temp->next = node->next;
	temp->front = node;
	node->next->front = temp;
	node->next = temp;
}

Node* find(int key)//返回被查找元素的前一个指针
{
	Node* temp = (Node*)malloc(sizeof(Node));
	Node* temp2 = (Node*)malloc(sizeof(Node));
	temp = node->next;
	temp2->next = node->next;
	while (temp != node)
	{
		if (temp->element == key)
		{
			return temp2;
		}
		temp = temp->next;
		temp2 = temp2->next;
	}
	return NULL;
}

void insert_element(int key,int data)//指定元素前插入
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp = find(key);
	if (temp == NULL)
	{
		printf("找不到指定元素%d\n", key);
	}
	else
	{
		insert_head(temp, data);
	}
}

void delete_node(int key)
{
	if (node == NULL)
	{
		printf("error -1\n");
		return;
	}
	else
	{
		Node* temp = (Node*)malloc(sizeof(Node));
		temp = find(key);
		Node* temp2 = (Node*)malloc(sizeof(Node));
		temp2 = temp->next;
		temp->next = temp->next->next;
		temp->next->next->front = temp;
		free(temp2);
	}
}
void print()
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp = node->next;
	while (temp != node)
	{
		printf("%d ", temp->element);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{
	initNode();
	insert_head(node, 5);
	insert_head(node, 4);
	insert_head(node, 3);
	insert_head(node, 2);
	insert_head(node, 1);
	print();
	insert_element(4, 114514);
	print();
	delete_node(4);
	print();

	return 0;
}