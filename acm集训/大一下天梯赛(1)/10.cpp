#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;

struct Node
{
	int next, data;
}node[1000001];
int address[1000001];
int main()
{
	int start, num, temp;
	cin >> start >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> temp;
		scanf("%d%d", &node[temp].data, &node[temp].next);
	}
	address[0] = start;
	int index = 0;
	for (int i = 1;; i++)
	{
		if (node[address[i - 1]].next == -1)
		{
			index = i;
			break;
		}
		address[i] = node[address[i - 1]].next;
	};
	int a = 0, b = index - 1, flag = -1;
	for (int i = 1; i < index; i++, flag *= -1)
	{
		if (flag == -1)
		{
			node[address[b--]].next = address[a];
		}
		else
		{
			node[address[a++]].next = address[b];
		}
	}
	node[address[a]].next = -1, temp = address[index - 1];
	for (int i = 1; i < index; i++)
	{
		printf("%05d %d %05d\n", temp, node[temp].data, node[temp].next);
		temp = node[temp].next;
	}
	printf("%05d %d %d\n", temp, node[temp].data, node[temp].next);
	return 0;
}

