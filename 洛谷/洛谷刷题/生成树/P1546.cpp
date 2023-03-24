#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
using namespace std;

int fa[105] = { 0 }, n, cnt = 1;
struct Edges
{
	int x, y, w;
}Edge[100005];

int cmp(Edges a, Edges b)
{
	return a.w < b.w;
}

int find(int x)
{
	while (x != fa[x])
	{
		x = fa[x];
	}
	return x;
}
int main()
{
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		fa[i] = i;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int x = 0;
			cin >> x;
			if (x != 0)
			{
				Edge[cnt].x = i;
				Edge[cnt].y = j;
				Edge[cnt].w = x;
				cnt++;
			}
		}
	}
	sort(Edge + 1, Edge + cnt, cmp);
	int ans = 0;
	for (int i = 1; i < cnt; i++)
	{
		int X = find(Edge[i].x);
		int Y = find(Edge[i].y);
		if (X != Y)
		{
			fa[X] = Y;
			ans += Edge[i].w;
		}
	}
	cout << ans;
	return 0;
}

