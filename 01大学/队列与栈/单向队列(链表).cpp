//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Queue
//{
//	int element;
//	Queue* next;
//}queue;
//
//Queue* Initqueue()
//{
//	Queue* que = (Queue*)malloc(sizeof(Queue));
//	if (que == NULL)
//	{
//		printf("malloc error\n");
//	}
//	else
//	{
//		que->next = NULL;
//		que->element = -114514;
//		return que;
//	}
//}
//
//void push(Queue* que, int key)
//{
//	Queue* temp = que;
//	while (temp->next != NULL)
//	{
//		temp = temp->next;
//	}
//	Queue* new_node = (Queue*)malloc(sizeof(Queue));
//	new_node->element = key;
//	new_node->next = temp->next;
//	temp->next = new_node;
//}
//
//void pop(Queue* que)
//{
//	Queue* temp = que->next;
//	que->next = que->next->next;
//	free(temp);
//}
//
//void print_queue(Queue* que)
//{
//	Queue* temp = que->next;
//	while (temp != NULL)
//	{
//		printf("%d ",temp->element);
//		temp = temp->next;
//	}
//	printf("\n");
//}
//
//int main()
//{
//	Queue* que = Initqueue();
//	push(que, 1);
//	push(que, 2);
//	push(que, 3);
//	push(que, 4);
//	print_queue(que);
//	pop(que);
//	print_queue(que);
//
//	return 0;
//}