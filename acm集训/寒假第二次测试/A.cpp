//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//using namespace std;
//char str[200005] = { 0 };
//void fun(int len, char str[])
//{
//	if (len == 2)
//	{
//		int temp = (str[0] - '0') + (str[1] - '0');
//		if (temp >= 10)
//		{
//			str[0] = (temp / 10) + '0';
//			str[1] = (temp % 10) + '0';
//		}
//		else
//		{
//			str[0] = temp + '0';
//			str[1] = '\0';
//		}
//	}
//	else
//	{
//		int flag = 1;
//		int min = 11, index = 0;
//		for (int i = len - 2; i >= 0; i--)
//		{
//			int temp = (str[i] - '0') + (str[i + 1] - '0');
//			if (temp >= 10)
//			{
//				str[i] = (temp / 10) + '0';
//				str[i + 1] = (temp % 10) + '0';
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			int temp = (str[0] - '0') + (str[1] - '0');
//			str[0] = temp + '0';
//			for (int i = 1; i < len; i++)
//			{
//				str[i] = str[i + 1];
//			}
//			
//		}
//	}
//
//}
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		cin >> str;
//		int len = strlen(str);
//		//fun(len, str);
//		cout << str << endl;
//	}
//	return 0;
//}
//
