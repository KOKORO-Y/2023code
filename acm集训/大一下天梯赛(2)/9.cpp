//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//const int n = 1e4 + 5;
//int G[2 * n][2 * n] = { 0 };
//int num = 0, road = 0;
//int de[100001];
//
//void add(int x, int y)
//{
//	G[x][y] = 1;
//}
//
//void delete_road(int x)
//{
//	for (int i = 1; i <= num; i++)
//	{
//		if (G[x][i] == 1)
//		{
//			G[x][i] = -1;
//		}
//	}
//	for (int i = 1; i <= num; i++)
//	{
//		if (G[i][x] == 1)
//		{
//			G[i][x] = -1;
//		}
//	}
//}
//
//void re_road(int x)
//{
//	for (int i = 1; i <= num; i++)
//	{
//		if (G[x][i] == -1)
//		{
//			G[x][i] = 1;
//		}
//	}
//	for (int i = 1; i <= num; i++)
//	{
//		if (G[i][x] == -1)
//		{
//			G[i][x] = 1;
//		}
//	}
//}
//
//int main()
//{
//	cin >> num >> road;
//	for (int i = 0; i < road; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		add(x, y);
//		add(y, x);
//	}
//	int k = 0;
//	cin >> k;
//	while (k--)
//	{
//		int np = 0;
//		int c = 0;
//		cin >> np;
//		for (int i = 0; i < np; i++)
//		{
//			cin >> c;
//			delete_road(c);
//			de[i] = c;
//		}
//		int flag = 1;
//		for (int i = 1; i <= num; i++)
//		{
//			for (int j = 1; j <= num; j++)
//			{
//				if (G[i][j] == 1)
//				{
//					flag = 0;
//					break;
//				}
//			}
//		}
//		if (flag)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		for (int i = 0; i < np; i++)
//		{
//			re_road(de[i]);
//		}
//	}
//
//	return 0;
//}
//
