//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//using namespace std;
//struct Edge
//{
//	int x,y;
//	int weight;
//}edge[114];
//int n, m;
//int fa[114];
//int cmp(Edge a, Edge b)
//{
//	return a.weight < b.weight;
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
//void kruskal()
//{
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		int x = find(edge[i].x);
//		int y = find(edge[i].y);
//		if (x != y)
//		{
//			printf("%d %d\n", edge[i].x, edge[i].y);
//			sum += edge[i].weight;
//			fa[x] = y;
//		}
//	}
//	cout << sum << endl;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		fa[i] = i;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int x, y, w;
//		cin >> x >> y >> w;
//		edge[i].x = x;
//		edge[i].y = y;
//		edge[i].weight = w;
//	}
//	sort(edge, edge + m, cmp);
//	kruskal();
//
//	return 0;
//}
//
