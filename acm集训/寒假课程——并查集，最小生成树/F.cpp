//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
//struct l
//{
//	int t1, t2;
//	double t3;
//} stud[400100];
//
//int fa[1000];
//int n = 0, m = 0;
//int x[10001], y[10001];
//
//int cmp(l a, l b)
//{
//	return a.t3 < b.t3;
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
//	cin >> n;
//	int t = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> x[i] >> y[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = i + 1; j <= n; j++)
//		{
//			stud[t].t1 = i;
//			stud[t].t2 = j;
//			stud[t].t3 = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j])) * 1.0;
//			t++;
//		}
//	}
//	sort(stud + 1, stud + t + 1, cmp);
//	for (int i = 0; i <= n; i++)
//	{
//		fa[i] = i;
//	}
//	cin >> m;
//	int cnt = 0, k = 0;
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		int x = find(a), y = find(b);
//		if (x != y)
//		{
//			cnt++;
//			fa[x] = y;
//		}
//	}
//	if (cnt == n - 1)
//	{
//		cout << '\n';
//	}
//	else
//	{
//		for (int i = 1; i <= t; i++)
//		{
//			int x = find(stud[i].t1), y = find(stud[i].t2);
//			if (x != y)
//			{
//				fa[x] = y;
//				cnt++;
//				cout << stud[i].t1 << ' ' << stud[i].t2 << endl;
//				if (cnt == n - 1)
//				{
//					break;
//				}
//			}
//			
//		}
//	}
//
//	return 0;
//}
//
