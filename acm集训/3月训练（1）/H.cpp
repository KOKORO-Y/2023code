//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int fa[4];
//int vis[4];
//int count1 = 0;
//int find(int x)
//{
//	count1 = 0;
//	vis[x] = 1;
//	count1++;
//	while (x != fa[x])
//	{
//		x = fa[x];
//		vis[x] = 1;
//		count1++;
//	}
//	return count1;
//}
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int start = 0;
//		cin >> start;
//		for (int i = 0; i <= 3; i++)
//		{
//			fa[i] = i;
//		}
//		for (int i = 1; i <= 3; i++)
//		{
//			int x = 0;
//			cin >> x;
//			fa[i] = x;
//		}
//		int sum = find(start);
//		if (sum == 4)
//		{
//			cout << "YES" << endl;
//		}
//		else
//		{
//			cout << "NO" << endl;
//		}
//	}
//	return 0;
//}
//
