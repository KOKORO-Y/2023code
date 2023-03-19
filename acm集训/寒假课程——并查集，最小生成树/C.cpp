//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//const int inf = 0x3f3f3f3f;//ÎÞÇî´ó
//const int maxn = 1e2 + 2;
//typedef long long ll; 
//#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
//
//int G[maxn][maxn];
//int n, m;
//int lowcost[maxn];
//int cnt;
//
//void prim()
//{
//	//cnt = 0;
//	//memset(lowcost, 0, sizeof(lowcost));
//	for (int i = 1; i <= m; i++)
//	{
//		if (i == 1)
//		{
//			lowcost[i] = 0;
//		}
//		else
//		{
//			lowcost[i] = G[1][i];
//		}
//	}
//	int minn = 0, index = 0, sum = 0;
//	cnt = 1;
//	for (int i = 2; i <= m; i++)
//	{
//		minn = inf;
//		for (int j = 1; j <= m; j++)
//		{
//			if (lowcost[j] != 0 && lowcost[j] < minn)
//			{
//				minn = lowcost[j];
//				index = j;
//			}
//		}
//		if (minn == inf)
//		{
//			break;
//		}
//		sum += minn;
//		cnt++;
//		lowcost[index] = 0;
//		for (int j = 2; j <= m; j++)
//		{
//			if (lowcost[j] != 0 && G[index][j] < lowcost[j])
//			{
//				lowcost[j] = G[index][j];
//			}
//		}
//	}
//	if (cnt == m)
//	{
//		cout << sum << endl;
//	}
//	else
//	{
//		cout << "?" << endl;
//	}
//
//}
//
//int main()
//{
//	IOS;
//	while (cin >> n >> m && n)
//	{
//		memset(G, inf, sizeof(G));
//		while (n--)
//		{
//			int x, y, w;
//			cin >> x >> y >> w;
//			G[x][y] = w;
//			G[y][x] = w;
//		}
//		prim();
//	}
//
//	return 0;
//}
//
