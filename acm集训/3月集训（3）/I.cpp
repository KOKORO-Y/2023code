//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <climits>
//const int N = 5 * 1e4 + 5;
//using namespace std;
//
//
//int a[N], b[N];
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int n = 0;
//		cin >> n;
//		int maxx = -1e11;
//		int flag = 1;
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &a[i]);
//		}
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &b[i]);
//			if (b[i] > a[i])
//			{
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			int flag2 = 1;
//			for (int i = 0; i < n; i++)
//			{
//				if (a[i] - b[i] > maxx)
//				{
//					maxx = (a[i] - b[i]);
//				}
//			}
//			for (int i = 0; i < n; i++)
//			{
//				a[i] -= maxx;
//				if (a[i] < 0)
//				{
//					a[i] = 0;
//				}
//			}
//			for (int i = 0; i < n; i++)
//			{
//				if (a[i] != b[i])
//				{
//					flag2 = 0;
//					break;
//				}
//			}
//			if (flag2)
//			{
//				cout << "YES\n";
//			}
//			else
//			{
//				cout << "NO\n";
//			}
//
//		}
//		else
//		{
//			cout << "NO\n";
//		}
//	}
//
//	return 0;
//}
//
