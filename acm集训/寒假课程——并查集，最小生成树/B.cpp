//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <iostream>
//#define maxn 1000+5
//using namespace std;
//
//int fa[maxn];
//
//int find(int u)
//{
//	if (u != fa[u])
//	{
//		fa[u] = find(fa[u]);
//	}
//	return fa[u];
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
//int main()
//{
//	int a, b;
//	while (1)
//	{
//		cin >> a;
//		if (a == 0)
//		{
//			break;
//		}
//		cin >> b;
//		for (int i = 1; i <= a; i++)
//		{
//			fa[i] = i;
//		}
//		for (int i = 0; i < b; i++)
//		{
//			int x, y;
//			cin >> x >> y;
//			merge(x, y);
//		}
//		for (int i = 1; i <= a; i++)
//		{
//			fa[i] = find(fa[i]);
//		}
//		int count = 0;
//		for (int i = 1; i <= a; i++)
//		{
//			if (fa[i] == i)
//			{
//				count++;
//			}
//		}
//		cout << count - 1 << endl;
//	}
//
//
//	return 0;
//}
