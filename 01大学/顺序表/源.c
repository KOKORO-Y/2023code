#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef struct ArrayList
{
	int *list;//数组
	int count;//当前元素个数
	int maxSize;//最大容纳个数
}List;
List* initList();
void insert(List* list, int key);
int find(List* list, int key);
void insert_front(List* list, int dis, int key);
void deletee(List* list, int data);
void print(List* list);
void extended(List* list)//扩容函数
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
List* initList()//初始化顺序表
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
在某个元素之前插入
1、插入什么元素
2、在哪个顺序表插入
3、在哪个元素之前插入
*/
void insert(List* list, int key)
{
	if (list->count < list->maxSize)//没满才能插入
	{
		list->list[list->count] = key;
		list->count++;
	}
	else//否则扩容再插入
	{
		extended(list);
		list->list[list->count] = key;
		list->count++;
	}
}

int find(List* list, int key)//查找函数
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
			printf("找不到对应元素%d\n", dis);
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
	else//满了要扩容
	{
		extended(list);
		int index = find(list, dis);
		if (index == -1)
		{
			printf("找不到对应元素%d\n", dis);
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
			printf("找不到待删除数据%d\n", data);
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
