#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 50 * 99 + 5;
int fa[MAXN];

struct Edge
{
	int x;
	int y;
	int weight;
	int flag;
}s[MAXN];

int find(int x)
{
	while (fa[x] != x)
	{
		x = fa[x];
	}
	return x;
}

void merge(int x, int y)
{
	int xx = find(x);
	int yy = find(y);
	if (xx != yy)
	{
		fa[xx] = yy;
	}
}

int cmp(struct Edge a, struct Edge b)
{
	return a.weight < b.weight;
}

int main()
{
	int n;
	while (cin >> n && n)
	{
		int m = n * (n - 1) / 2;
		for (int i = 1; i <= n; i++)
		{
			fa[i] = i;
		}
		for (int i = 0; i < m; i++)
		{
			scanf("%d%d%d%d", &s[i].x, &s[i].y, &s[i].weight, &s[i].flag);
			if (s[i].flag == 1)
			{
				merge(s[i].x, s[i].y);
			}
		}
		int sum = 0;
		sort(s, s + m, cmp);
		for (int i = 0; i < m; i++)
		{
			if (find(s[i].x) != find(s[i].y))
			{
				merge(s[i].x, s[i].y);
			    sum += s[i].weight;
			}
		}
		cout << sum << endl;
	}

	return 0;
}

