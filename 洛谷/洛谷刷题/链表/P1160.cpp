#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <list>
using namespace std;
int const N = 1e5 + 5;
bool del[N];
int main()
{
	list<int> lis;
	decltype(lis.begin()) pos[N];
	int n = 0;
	cin >> n;
	lis.push_back(1);
	pos[1] = lis.begin();
	for (int i = 2; i <= n; i++)
	{
		int index = 0, op = 0;
		cin >> index >> op;
		if (op == 0)
		{
			pos[i] = lis.insert(pos[index], i);
		}
		else
		{
			pos[i] = lis.insert(next(pos[index]), i);
		}
	}
	int m = 0;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int index = 0;
		cin >> index;
		if (!del[index])
		{
			lis.erase(pos[index]);
			del[index] = 1;
		}
	}
	for (list<int>::iterator it = lis.begin(); it != lis.end(); it++)
	{
		cout << *it << ' ';
	}
	return 0;
}

