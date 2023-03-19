//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//using namespace std;
//int arr[105];
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		memset(arr, 0, sizeof(arr));
//		int n = 0, d = 0;
//		int flag2 = 0, flag1 = 1;
//		cin >> n >> d;
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (int i = 0; i < n; i++)
//		{
//			if (arr[i] > d)
//			{
//				flag1 = 0;
//				break;
//			}
//		}
//		if (flag1 == 0)
//		{
//			for (int i = 0; i < n; i++)
//			{
//				for (int j = i + 1; j < n; j++)
//				{
//					if (arr[i] + arr[j] <= d)
//					{
//						flag2 = 1;
//						break;
//					}
//				}
//			}
//		}
//		if (flag2 || flag1)
//		{
//			cout << "Yes\n";
//		}
//		else
//		{
//			cout << "No\n";
//		}
//	}
//
//	return 0;
//}
//
