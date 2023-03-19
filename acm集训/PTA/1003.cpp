//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	while (n--)
//	{
//		char str[114] = { 0 };
//		cin >> str;
//		int len = strlen(str);
//		int flag = 1;
//		int countP = 0, countT = 0, countA = 0;
//		int p = 0, t = 0;
//		for (int i = 0; i < len; i++)
//		{
//			if (str[i] == 'P')
//			{
//				countP++;
//				p = i;
//			}
//			else if (str[i] == 'T')
//			{
//				countT++;
//				t = i;
//			}
//			else if (str[i] == 'A')
//			{
//				countA++;
//			}
//			else
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag && countA)
//		{
//			int Al = 0, Az = 0, Ar = 0;
//			Al = p, Az = (t - p - 1), Ar = (len - t - 1);
//			if (Az != 0 && p < t && countP == 1 && countT == 1)
//			{
//				if (((Al * Az) == Ar))
//				{
//					flag = 0;
//					cout << "YES" << endl;
//				}
//				else
//				{
//					cout << "NO" << endl;
//				}
//			}
//			else if (p > t)
//			{
//				cout << "NO" << endl;
//			}
//			else
//			{
//				cout << "NO" << endl;
//			}
//		}
//		else
//		{
//			cout << "NO" << endl;
//		}
//	}
//
//	return 0;
//}
//
