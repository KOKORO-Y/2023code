//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <map>
//#include <cstring>
//
//using namespace std;
//char str[1145141] = { 0 };
//int main()
//{
//	int n = 0;
//	cin >> n;
//	cin >> str;
//	int count0 = 0, count1 = 0, count2 = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (str[i] == '0')
//		{
//			count0++;
//		}
//		else if (str[i] == '1')
//		{
//			count1++;
//		}
//		else
//		{
//			count2++;
//		}
//	}
//	if (count0 > (n / 3))
//	{
//		for (int i = n - 1; i >= 0; i--)
//		{
//			if (str[i] == '0')
//			{
//				if (count2 < (n / 3))
//				{
//					str[i] = '2';
//					count2++;
//					count0--;
//				}
//				else if (count1 < (n / 3))
//				{
//					str[i] = '1';
//					count1++;
//					count0--;
//				}
//			}
//			if (count0 == (n / 3))
//			{
//				break;
//			}
//		}
//	}
//	if (count1 > (n / 3))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (str[i] == '1')
//			{
//				if (count0 < (n / 3))
//				{
//					str[i] = '0';
//					count0++;
//					count1--;
//				}
//			}
//			if (count1 == (n / 3))
//			{
//				break;
//			}
//		}
//		for (int i = n - 1; i >= 0; i--)
//		{
//			if (str[i] == '1')
//			{
//				if (count2 < (n / 3))
//				{
//					str[i] = '2';
//					count2++;
//					count1--;
//				}
//			}
//			if (count1 == (n / 3))
//			{
//				break;
//			}
//		}
//	}
//	if (count2 > (n / 3))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (str[i] == '2')
//			{
//				if (count0 < (n / 3))
//				{
//					str[i] = '0';
//						count0++;
//						count2--;
//				}
//				else if (count1 < (n / 3))
//				{
//					str[i] = '1';
//					count1++;
//					count2--;
//				}
//			}
//			if (count2 == (n / 3))
//			{
//				break;
//			}
//		}
//	}
//	/*while (!(count0 == (n / 3) && count1 == (n / 3) && count2 == (n / 3)))
//	{
//		if (count0 > (n / 3))
//		{
//			if (count2 < (n / 3))
//			{
//				for (int i = n - 1; i >= 0; i--)
//				{
//					if (str[i] == '0')
//					{
//						str[i] = '2';
//						count2++;
//						count0--;
//						break;
//					}
//				}
//			}
//			else if (count1 < (n / 3))
//			{
//				for (int i = n - 1; i >= 0; i--)
//				{
//					if (str[i] == '0')
//					{
//						str[i] = '1';
//						count1++;
//						count0--;
//						break;
//					}
//				}
//			}
//		}
//		else if (count1 > (n / 3))
//		{
//			if (count2 < (n / 3))
//			{
//				for (int i = n - 1; i >= 0; i--)
//				{
//					if (str[i] == '1')
//					{
//						str[i] = '2';
//						count2++;
//						count1--;
//						break;
//					}
//				}
//			}
//			else if (count0 < (n / 3))
//			{
//				for (int i = 0; i < n; i++)
//				{
//					if (str[i] == '1')
//					{
//						str[i] = '0';
//						count0++;
//						count1--;
//						break;
//					}
//				}
//			}
//		}
//		else if (count2 > (n / 3))
//		{
//			if (count1 < (n / 3))
//			{
//				for (int i = n - 1; i >= 0; i--)
//				{
//					if (str[i] == '2')
//					{
//						str[i] = '1';
//						count1++;
//						count2--;
//						break;
//					}
//				}
//			}
//			else if (count0 < (n / 3))
//			{
//				for (int i = 0; i < n; i++)
//				{
//					if (str[i] == '2')
//					{
//						str[i] = '0';
//						count0++;
//						count2--;
//						break;
//					}
//				}
//			}
//		}
//	}*/
//	cout << str << endl;
//
//	return 0;
//}
//
