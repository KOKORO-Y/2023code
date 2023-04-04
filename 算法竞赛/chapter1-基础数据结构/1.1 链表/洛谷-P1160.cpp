#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <list>
#include <cstdlib>
using namespace std;
const int N = 1e5 + 5;
int n, m;
struct Node
{
	int data;
	int next, pre;
}List[N];
bool vis[N];
int index[N];
int main()
{
	cin >> n;
	List[1].data = 1;
	List[1].next = 1;
	List[1].pre = 1;
	index[1] = 1;
	int head = 1;
	int count = 1;
	for (int i = 2; i <= n; i++)
	{
		int pos = 0, op = 0;
		cin >> pos >> op;
		if (op == 0)
		{
			if (pos == head)
			{
				head = i;
			}
			List[i].data = i;
			index[i] = i;
			List[i].pre = List[pos].pre;
			List[pos].pre = i;
			List[i].next = pos;
			List[List[i].pre].next = i;
		}
		else
		{
			List[i].data = i;
			index[i] = i;
			List[i].next = List[pos].next;
			List[List[pos].next].pre = i;
			List[i].pre = pos;
			List[pos].next = i;

		}
		count++;
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int pos;
		cin >> pos;
		if (!vis[pos])
		{
			if (pos == head)
			{
				head = List[pos].next;
			}
			vis[pos] = 1;
			List[List[pos].pre].next = List[pos].next;
			List[List[pos].next].pre = List[pos].pre;
			count--;
		}
	}
	for (int i = head, j = 0; j < count; i = List[i].next, j++)
	{
		cout << List[i].data << ' ';
	}

	return 0;
}

//int n, m;
//const int N = 1e4 + 5;
//bool vis[N];
//int main()
//{
//	list<int> lis;
//	cin >> n;
//	decltype(lis.begin()) pos[N];
//	lis.push_back(1);
//	pos[1] = lis.begin();
//	for (int i = 2; i <= n; i++)
//	{
//		int index = 0, op = 0;
//		cin >> index >> op;
//		if (op == 0)
//		{
//			pos[i] = lis.insert(pos[index], i);
//		}
//		else
//		{
//			pos[i] = lis.insert(next(pos[index]), i);
//		}
//	}
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		int index = 0;
//		cin >> index;
//		if (!vis[index])
//		{
//			lis.erase(pos[index]);
//			vis[index] = 1;
//		}
//	}
//	for (auto i : lis)
//	{
//		cout << i << ' ';
//	}
//	return 0;
//}
//
