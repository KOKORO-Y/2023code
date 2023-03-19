//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	int flag = 0;
//	int flag2 = 0;
//	int count1 = 0, count2 = 0;
//	while (t--)
//	{
//		char str[114] = { 0 };
//		cin >> str;
//		if (strcmp(str, "CTRL") == 0)
//		{
//			flag = 1;
//		}
//		else if (strcmp(str, "UNCTRL") == 0)
//		{
//			flag = 0;
//		}
//		if (flag)
//		{
//			if (strcmp(str, "C") == 0)
//			{
//				flag2 = 1;
//				count1++;
//			}
//			if (flag2 && strcmp(str, "V") == 0)
//			{
//				count2++;
//			}
//		}
//	}
//	if (count1 && count2)
//	{
//		cout << "Yes" << endl;
//	}
//	else
//	{
//		cout << "No" << endl;
//	}
//
//	return 0;
//}
//
