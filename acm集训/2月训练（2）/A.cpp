//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	string a;
//	char b;
//	int t = 0, flag = 0;
//	cin >> t;
//	while (t--)
//	{
//		cin >> a >> b;
//		int index = a.find(b);
//		flag = 1;
//		if (index == -1)
//		{
//			flag = 0;
//		}
//		else
//		{
//			flag = 0;
//			for (int i = 0; i < a.length(); i++)
//			{
//				if (a[i] == b)
//				{
//					if (i % 2 == 0)
//					{
//						flag = 1;
//						break;
//					}
//				}
//			}
//		}
//		if (flag)
//		{
//			cout << "YES\n";
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
