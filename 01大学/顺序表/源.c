#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef struct ArrayList
{
	int *list;//����
	int count;//��ǰԪ�ظ���
	int maxSize;//������ɸ���
}List;
List* initList();
void insert(List* list, int key);
int find(List* list, int key);
void insert_front(List* list, int dis, int key);
void deletee(List* list, int data);
void print(List* list);
void extended(List* list)//���ݺ���
{
	int* temp = (int*)malloc(sizeof(int) * (list->maxSize + 5));
	for (int i = 0; i < list->maxSize; i++)
	{
		temp[i] = list->list[i];
	}
	int* templist = list->list;
	list->list = temp;
	list->maxSize += 5;
	free(templist);
}
List* initList()//��ʼ��˳���
{
	List* list = (List*)malloc(sizeof(List));
	list->count = 0;
	list->maxSize = 10;
	list->list = (int*)malloc((sizeof(int) * 10));
	return list;
}
int main()
{
	List* list = initList();
	insert(list, 1);
	insert(list, 2);
	insert(list, 3);
	insert(list, 4);
	insert(list, 5);
	insert(list, 6);
	insert(list, 114514);
	print(list);
	insert_front(list, 6, 1919810);
	print(list);
	deletee(list, 6);
	print(list);
	insert_front(list, 0, 1919810);
	deletee(list, 6);
	insert(list, 7);
	insert(list, 8);
	insert(list, 9);
	insert(list, 19);
	insert(list, 19);
	insert(list, 19);
	insert(list, 19);
	insert(list, 19);
	insert(list, 19);
	insert(list, 19);
	print(list);


	return 0;
}
/*
��ĳ��Ԫ��֮ǰ����
1������ʲôԪ��
2�����ĸ�˳������
3�����ĸ�Ԫ��֮ǰ����
*/
void insert(List* list, int key)
{
	if (list->count < list->maxSize)//û�����ܲ���
	{
		list->list[list->count] = key;
		list->count++;
	}
	else//���������ٲ���
	{
		extended(list);
		list->list[list->count] = key;
		list->count++;
	}
}

int find(List* list, int key)//���Һ���
{
	for (int i = 0; i < list->count; i++)
	{
		if (list->list[i] == key)
		{
			return i;
		}
	}
	return -1;
}

void insert_front(List* list, int dis ,int key)
{
	if (list->count < list->maxSize)
	{
		int index = find(list, dis);
		if (index == -1)
		{
			printf("�Ҳ�����ӦԪ��%d\n", dis);
			return;
		}
		else
		{
			for (int i = list->count; i > index; i--)
			{
				list->list[i] = list->list[i - 1];
			}
			list->count++;
			list->list[index] = key;
		}
	}
	else//����Ҫ����
	{
		extended(list);
		int index = find(list, dis);
		if (index == -1)
		{
			printf("�Ҳ�����ӦԪ��%d\n", dis);
			return;
		}
		else
		{
			for (int i = list->count; i >= index; i--)
			{
				list->list[i] = list->list[i - 1];
				list->count++;
				list->list[index] = key;
			}
		}
	}
}

void deletee(List* list, int data)
{
	if (list->count == 0)
	{
		return;
	}
	else
	{
		int index = find(list, data);
		if (index == -1)
		{
			printf("�Ҳ�����ɾ������%d\n", data);
			return;
		}
		else
		{
			for (int i = index; i < list->count; i++)
			{
				list->list[i] = list->list[i + 1];
			}
			list->count--;
			return;
		}
	}
}

void print(List* list)
{
	for (int i = 0; i < list->count; i++)
	{
		printf("%d ", list->list[i]);
	}
	printf("\n");
	return;
}
