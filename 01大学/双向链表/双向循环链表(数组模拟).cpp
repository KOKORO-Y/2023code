#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdlib>
using namespace std;

int _data[114] = { 0 }, pre[114] = { 0 }, _next[114] = { 0 };
int idx = 0;

void Initlist()
{
	pre[0] = 0;
	_next[0] = 0;
	idx = 1;
}

void rear_insert(int key)
{
	_data[idx] = key;
	_next[idx] = _next[idx - 1];
	pre[idx] = idx - 1;
	pre[_next[idx - 1]] = idx;
	_next[idx - 1] = idx;
	idx++;
}

int find(int key)
{
	int temp = _next[0];
	while (temp != 0)
	{
		if (_data[temp] == key)
		{
			return temp;
		}
		temp = _next[temp];
	}
	return -1;
}

void delete_list(int key)
{
	int temp = find(key);
	if (temp != -1)
	{
		_next[temp - 1] = _next[temp];
		pre[temp + 1] = pre[temp];
	}
	else
	{
		printf("ÕÒ²»µ½´ıÉ¾³ıÔªËØ%d\n", key);
	}
}

void print_list()
{
	for (int i = _next[0]; i != 0; i = _next[i])
	{
		printf("%d ", _data[i]);
	}
	printf("\n");
}

int main()
{
	
	Initlist();
	rear_insert(1);
	rear_insert(2);
	rear_insert(3);
	rear_insert(4);
	rear_insert(5);
	rear_insert(6);
	rear_insert(7);
	print_list();
	delete_list(2);
	delete_list(4);
	delete_list(6);
	print_list();
	delete_list(114);
	return 0;
}