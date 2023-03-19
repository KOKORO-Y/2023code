//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <iostream>
//
//using namespace std;
//int fa[1145] = { 0 };
//int n = 0, m = 0;
//
//int find(int x)
//{
//	if (fa[x] != x)
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
//	int sum = 0, a, b;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		fa[i] = i;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> a >> b;
//		merge(a, b);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		fa[i] = find(fa[i]);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (fa[i] == i)
//		{
//			sum++;
//		}
//	}
//	cout << sum << endl;
//	
//	return 0;
//}
//
