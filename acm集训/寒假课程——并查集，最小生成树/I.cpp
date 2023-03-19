//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//int fa[100001];
//int ans[100001];
//
//int find(int x)
//{
//	if (x != fa[x])
//	{
//		fa[x] = find(fa[x]);
//	}
//	return fa[x];
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
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int n = 0;
//		cin >> n;
//		for (int i = 0; i <= n; i++)
//		{
//			fa[i] = i;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			int x, y;
//			cin >> x >> y;
//			merge(x, y);
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			if (fa[i] != i)
//			{
//				fa[i] = find(fa[i]);
//			}
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			ans[fa[i]]++;
//		}
//		int maxx = -1;
//		for (int i = 1; i <= n; i++)
//		{
//			if (maxx < ans[i])
//			{
//				maxx = ans[i];
//			}
//		}
//		cout << maxx << endl;
//		
//	}
//
//	return 0;
//}
//
