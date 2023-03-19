//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <cwctype>
//typedef long long LL;
//const int N = 1e5 + 10;
//const LL MOD = 1e9 + 7;
//using namespace std;
//int fa[N];
//int a[N], b[N], c[N];
//
//int find(int x)
//{
//	while (x != fa[x])
//	{
//		x = fa[x];
//	}
//	return x;
//}
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
//			cin >> a[i];
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cin >> b[i];
//		}
//		int cycle = 0;
//		for (int i = 0; i < n; ++i)
//		{
//			cin >> c[i];
//			if (!c[i])
//			{
//				int x = find(a[i]);
//				int y = find(b[i]);
//				if (find(a[i]) == find(b[i]) && a[i] != b[i])
//				{
//					++cycle;
//				}
//				else
//				{
//					fa[x] = y;
//				}
//			}
//		}
//		int ans = 1;
//		for (int i = 1; i <= cycle; ++i)
//		{
//			ans = (ans << 1) % MOD;
//		}
//		cout << ans << '\n';
//	}
//	
//	return 0;
//}
//
