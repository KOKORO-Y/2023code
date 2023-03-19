//#define _crt_secure_no_warnings 1
//#include <iostream>
//#include <algorithm>
//
//int fa[10001] = { 0 };
//void Init()
//{
//	for (int i = 0; i <= 10000; i++)
//	{
//		fa[i] = i;
//	}
//}
//
//int find(int x)
//{
//	if (fa[x] == x)
//	{
//		return x;
//	}
//	else
//	{
//		return fa[x] = find(fa[x]);
//	}
//}
//
//void merge(int x, int y)
//{
//	int u = find(x);
//	int v = find(y);
//	if (u != v)
//	{
//		fa[v] = u;
//	}
//}
//using namespace std;
//int sum, maxn, vis[10001];
//int main()
//{
//	Init();
//
//	int n = 0;
//	cin >> n;
//	while (n--)
//	{
//		int k = 0;
//		int a, b = 0;
//		cin >> k >> a;
//		maxn = a;
//		for (int i = 1; i < k; i++)
//		{
//			cin >> b;
//			if (i != 0)
//			{
//				merge(a, b);
//				maxn = max(maxn, b);
//			}
//		}
//		sum = max(sum, maxn);
//	}
//	int q = 0;
//	cin >> q;
//	int x = 0;
//	for (int i = 1; i <= sum; i++) 
//	{
//		fa[i] = find(i);  
//		vis[fa[i]]++;
//	}
//	for (int i = 1; i <= sum; i++) 
//	{
//		if (vis[i] > 0)
//		{
//			x++;
//		}
//	}
//	printf("%d %d\n", sum, x);
//	while (q--)
//	{
//		int a, b;
//		cin >> a >> b;
//		if (find(a) != find(b))
//		{
//			printf("N\n");
//		}
//		else
//		{
//			printf("Y\n");
//		}
//	}
//
//	return 0;
//}
//
