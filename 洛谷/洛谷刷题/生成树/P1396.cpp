//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//struct Edges
//{
//	int st, ed;
//	int w;
//}Edge[20005];
//int fa[10005] = { 0 };
//int n, m, s, t;
//
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
//void merge(int x, int y)
//{
//	int xx = find(x);
//	int yy = find(y);
//	if (xx != yy)
//	{
//		fa[xx] = yy;
//	}
//}
//
//
//void kruscal()
//{
//	for (int i = 1; i <= m; i++)
//	{
//		merge(Edge[i].st, Edge[i].ed);
//		if (find(s) == find(t))
//		{
//			cout << Edge[i].w << endl;
//			return;
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> m >> s >> t;
//	for (int i = 0; i <= n; i++)
//	{
//		fa[i] = i;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> Edge[i].st >> Edge[i].ed >> Edge[i].w;
//	}
//	sort(Edge + 1, Edge + 1 + m, cmp);
//	kruscal();
//
//	return 0;
//}
//
