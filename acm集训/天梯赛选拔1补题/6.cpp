//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		string a;
//		cin >> a;
//		int ans1 = 1, ans2 = 1;
//		int flag1 = 1, flag2 = 1;
//		if (a[0] == 'V')
//		{
//			ans1 = 0;
//			flag1 = 0;
//		}
//		if (flag1)
//		{
//			for (int i = 0; i < a.length() - 1; i++)
//			{
//				if (a[i] == 'N')
//				{
//					if (a[i + 1] == 'N')
//					{
//						ans1 = 0;
//						break;
//					}
//				}
//			}
//		}
//		if (flag2)
//		{
//			for (int i = 0; i < a.length() - 1; i++)
//			{
//				if (a[i] == 'N')
//				{
//					if (a[i + 1] == 'N')
//					{
//						ans2 = 0;
//						break;
//					}
//				}
//			}
//		}
//		cout << ans2 << ' ' << ans1 << endl;
//	}
//
//	return 0;
//}
//
