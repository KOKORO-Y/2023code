#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int flag = 0;  //�����������廹���Ҳ� 1�� 2��
typedef struct Deque
{
	int* queue;  //����
	int left;  //��ָ��
	int right;  //��ָ��
	int maxsize;  //�������
	int size;  //��ǰԪ�ظ���
}deque;

Deque* Init_deque(int max)
{
	Deque* que = (Deque*)malloc(sizeof(Deque));
	que->queue = (int*)malloc(sizeof(int) * max);
	que->left = 0;
	que->right = 0;
	que->maxsize = max;
	que->size = 0;
	return que;
}

int isEmpty(Deque* que)
{
	if (que->size == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//
int isFull(Deque* que)
{
	if (que->size == que->maxsize)
	{
		return 1;//����
	}
	else
	{
		return 0;
	}
}

void left_push(Deque* que, int key) //��� ��ָ��
{
	if (isFull(que))
	{
		printf("��������\n");
	}
	else
	{
		if (isEmpty(que))
		{
			que->queue[que->left] = key;
		}
		else
		{
			if (que->left == 0)
			{
				que->left = que->maxsize;
			}
			que->left--;
			que->queue[que->left] = key;
		}
		que->size++;
		flag = 1;
	}
}

void left_pop(Deque* que)  //��ɾ ��ָ��++
{
	if (isEmpty(que))
	{
		printf("�����ѿ��޷�ɾ��\n");
	}
	else
	{
		if (que->left == (que->maxsize - 1))
		{
			que->left = 0;
			que->size--;
		}
		else
		{
			que->left++;
			que->size--;
		}
	}
}

void right_push(Deque* que, int key)  //�Ҳ� ��ָ��
{
	if (isFull(que))
	{
		printf("��������\n");
	}
	else
	{
		if (isEmpty(que))
		{
			que->queue[que->right] = key;
		}
		else
		{
			if (que->right == (que->maxsize - 1))
			{
				que->right = -1;
			}
			que->right++;
			que->queue[que->right] = key;
		}
		que->size++;
		flag = 2;
	}
}

void right_pop(Deque* que)  //��ɾ ��ָ��--
{
	if (isEmpty(que))
	{
		printf("�����ѿ��޷�ɾ��\n");
	}
	else
	{
		if (que->right == 0)
		{
			que->right = (que->maxsize - 1);
			que->size--;
		}
		else
		{
			que->right--;
			que->size--;
		}
	}
}

void print_deque(Deque* que)
{
	if (flag == 1)
	{
		int temp_right = que->right;
		int count = 0;
		while (count < que->size)
		{
			printf("%d ", que->queue[temp_right]);
			count++;
			temp_right--;
			if (temp_right < 0)
			{
				temp_right = que->maxsize - 1;
			}
		}
		printf("\n");
	}
	else if (flag == 2)
	{
		int temp_left = que->left;
		int count = 0;
		while (count < que->size)
		{
			printf("%d ", que->queue[temp_left]);
			count++;
			temp_left++;
			if (temp_left >= que->maxsize)
			{
				temp_left = 0;
			}
		}
		printf("\n");
	}
}

int main()
{
	Deque* que = Init_deque(20);
	for (int i = 0; i < 20; i++)
	{
		left_push(que, i);
	}
	left_pop(que);
	left_pop(que);
	left_push(que, 114);
	left_push(que, 514);
	print_deque(que);


	return 0;
}