//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//struct Edge
//{
//	int x;
//	int y;
//	int weight;
//	int flag;
//}s[5500];
//
//int n, m;
//int fa[1550];
//
//int cmp(struct Edge a, struct Edge b)
//{
//	return a.weight < b.weight;
//}
//
//int find(int x)
//{
//	while (fa[x] != x)
//	{
//		x = fa[x];
//	}
//	return x;
//}
//
//void Init(int n)
//{
//	for (int i = 0; i <= n; i++)
//	{
//		fa[i] = i;
//	}
//}
//
//int Kruskal(int pos, int cnt, int n)
//{
//	int x = 0, y = 0, sum = 0, c = 1;
//	for (int i = 0; i < cnt; i++)
//	{
//		if (i == pos)
//		{
//			continue;
//		}
//		else
//		{
//			int x = find(s[i].x);
//			int y = find(s[i].y);
//			if (x != y)
//			{
//				sum += s[i].weight;
//				c++;
//				fa[x] = y;
//			}
//		}
//
//	}
//	if (c != n)
//	{
//		return -1;
//	}
//	return sum;
//}
//
//int main()
//{
//	int t = 0, ans = 0, sum = 0, flag;
//	cin >> t;
//	while (t--)
//	{
//		memset(s, 0, sizeof(s));
//		ans = 0;
//		cin >> n >> m;
//		Init(n);
//		for (int i = 0; i < m; i++)
//		{
//			scanf("%d%d%d", &s[i].x, &s[i].y, &s[i].weight);
//		}
//		sort(s, s + m, cmp);
//		for (int i = 0; i < m; i++)
//		{
//			int x = find(s[i].x);
//			int y = find(s[i].y);
//			if (x != y)
//			{
//				ans += s[i].weight;
//				s[i].flag = 1;
//				fa[x] = y;
//			}
//		}
//		//cout << ans;
//		flag = 0;
//		for (int i = 0; i < m; i++)
//		{
//			if (s[i].flag == 1)
//			{
//				sum = 0;
//				Init(n);
//				sum = Kruskal(i, m, n);
//				if (sum == ans)
//				{
//					flag = 1;
//					break;
//				}
//			}
//		}
//		if (flag)
//		{
//			cout << "Not Unique!" << endl;
//		}
//		else
//		{
//			cout << ans << endl;
//		}
//	}
//
//	return 0;
//}
//
