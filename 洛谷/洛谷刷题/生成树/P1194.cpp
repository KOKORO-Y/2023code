//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//struct Edges
//{
//	int x, y, w;
//}Edge[1000005];
//
//int fa[100000] = { 0 }, cnt = 1;
//int cmp(Edges a, Edges b)
//{
//	return a.w < b.w;
//}
//
//int find(int x)
//{
//	while (x != fa[x])
//	{
//		x = fa[x];
//	}
//	return x;
//}
//
//int main()
//{
//	int price = 0, m = 0;
//	cin >> price >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		Edge[cnt].x = 0;
//		Edge[cnt].y = i;
//		Edge[cnt].w = price;
//		cnt++;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			int x = 0;
//			cin >> x;
//			if (x != 0)
//			{
//				Edge[cnt].x = i;
//				Edge[cnt].y = j;
//				Edge[cnt].w = x;
//				cnt++;
//			}
//		}
//	}
//	for (int i = 0; i <= m; i++)
//	{
//		fa[i] = i;
//	}
//	int ans = 0;
//	sort(Edge + 1, Edge + cnt, cmp);
//	for (int i = 1; i < cnt; i++)
//	{
//		int X = find(Edge[i].x);
//		int Y = find(Edge[i].y);
//		if (X != Y)
//		{
//			fa[X] = Y;
//			ans += Edge[i].w;
//		}
//
//	}
//	cout << ans;
//	return 0;
//}
//
