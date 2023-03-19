//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Queue
//{
//	int* queue;  //��������
//	int head;  //��ͷָ��
//	int rear;  //��βָ��
//	int maxsize;  //���Ԫ�ظ���
//	int count;  //��ǰ����Ԫ�ظ���
//}queue;
//
//queue* InitQueue(int max)  //��ʼ������
//{
//	queue* que = (queue*)malloc(sizeof(queue));
//	que->queue = (int*)malloc(sizeof(int) * max);
//	que->head = 0;
//	que->rear = 0;
//	que->maxsize = max;
//	que->count = 0;
//	return que;
//}
//
//void pop(queue* que, int key)  //��Ӻ���
//{
//	if ((que->rear + 1) % que->maxsize != que->head)
//	{
//		que->queue[que->rear] = key;
//		que->rear = (que->rear + 1) % que->maxsize;
//		que->count++;
//	}
//	else
//	{
//		printf("��������\n");
//	}
//}
//
//void push(queue* que)
//{
//	if (que->head != que->rear)
//	{
//		que->head = (que->head + 1) % que->maxsize;
//		que->count--;
//	}
//	else
//	{
//		printf("�����ѿ�\n");
//	}
//}
//
//void print_queue(queue* que)
//{
//	int temp_head = que->head;
//	int temp_rear = que->rear;
//	int count = 0;
//	//while (count < que->count)  //���õ�ǰԪ�ظ����������
//	//{
//	//	printf("%d ", que->queue[temp_head]);
//	//	temp_head = (temp_head + 1) % que->maxsize;
//	//	count++;
//	//}
//	for (int i = temp_head; i != temp_rear; i = (i + 1) % que->maxsize)
//	{
//		printf("%d ", que->queue[i]);
//	}
//	printf("\n");
//}
//
//int empty(queue* que)
//{
//	if (que->count == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int queue_size(queue* que)
//{
//	return que->count;
//}
//
//int main()
//{
//	queue* que = InitQueue(20);
//	pop(que, 1);
//	pop(que, 2);
//	pop(que, 3);
//	pop(que, 4);
//	print_queue(que);
//	printf("%d\n", queue_size(que));
//	push(que);
//	push(que);
//	print_queue(que);
//	printf("%d\n", queue_size(que));
//	printf("%d\n", empty(que));
//	push(que);
//	push(que);
//	printf("%d\n", queue_size(que));
//	printf("%d\n", empty(que));
//	//for (int i = 1; i <= 21; i++)
//	//{
//	//	pop(que, i);
//	//}
//	//print_queue(que);
//	//for (int i = 1; i <= 21; i++)
//	//{
//	//	push(que);
//	//}
//	//print_queue(que);
//
//	return 0;
//}