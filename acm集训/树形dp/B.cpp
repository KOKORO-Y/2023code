//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//const int maxn = 1000013;
//typedef long long ll;
//ll u[maxn], ne[maxn], v[maxn], idx = 0, d[maxn], w[maxn];
//bool vis[maxn];
//void add(int x, int y, int z)
//{
//	v[idx] = y;
//	w[idx] = z;
//	ne[idx] = u[x];
//	u[x] = idx++;
//}
//void dfs(int x, int father)
//{
//	for (int i = u[x]; i != -1; i = ne[i])
//	{
//		int j = v[i];
//		if (j == father)
//		{
//			continue;
//		}
//		d[j] = d[x] + w[i];
//		dfs(j, x);
//	}
//}
//int main()
//{
//	int n, m, e;
//	cin >> n >> m;
//	memset(u, -1, sizeof(u));
//	char str[2];
//	int x = 0, y = 0, z = 0;
//	while (m--)
//	{
//		scanf("%d%d%d%s", &x, &y, &z, str);
//		add(x, y, z); 
//		add(y, x, z);
//	}
//	dfs(1, 0);
//	ll ans = -1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (d[i] > ans)
//		{
//			ans = d[i];
//			e = i;
//		}
//	}
//	memset(d, 0, sizeof d);
//	dfs(e, 0);
//	for (int i = 1; i <= n; i++)
//	{
//		if (d[i] > ans)
//		{
//			ans = d[i];
//		}
//	}
//	printf("%lld", ans);
//	return 0;
//}