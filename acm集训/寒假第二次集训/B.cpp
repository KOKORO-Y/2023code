//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		char str1[114] = { 0 };
//		char str2[114] = { 0 };
//		int k = 0;
//		cin >> k;
//		cin >> str1 >> str2;
//		if (strcmp(str1, str2) == 0)
//		{
//			cout << "YES" << endl;
//		}
//		else
//		{
//			int flag = 1;
//			for (int i = 0; i < k; i++)
//			{
//				if (str1[i] != str2[i])
//				{
//					if (str1[i] == 'G' && str2[i] == 'B')
//					{
//						continue;
//					}
//					else if (str1[i] == 'B' && str2[i] == 'G')
//					{
//						continue;
//					}
//					else
//					{
//						flag = 0;
//						break;
//					}
//				}
//			}
//			if (flag)
//			{
//				cout << "YES" << endl;
//			}
//			else
//			{
//				cout << "NO" << endl;
//			}
//		}
//
//	}
//	return 0;
//}
//
