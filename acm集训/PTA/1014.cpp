//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	char str1[114] = { 0 }, str2[514] = { 0 }, str3[191] = { 0 }, str4[981] = { 0 };
//	cin >> str1 >> str2 >> str3 >> str4;
//	getchar();
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	int len3 = strlen(str3);
//	int len4 = strlen(str4);
//	int lenn1 = min(len1, len2);
//	int lenn2 = min(len3, len4);
//	int flag = 1;
//	int hour = 0, min = 0;
//	for (int i = 0; i < lenn1; i++)
//	{
//		if (flag)
//		{
//			if (str1[i] == str2[i] && str1[i] >= 'A' && str1[i] <= 'G')
//			{
//				switch (str1[i])
//				{
//				case 'A':
//					cout << "MON" << ' ';
//					break;
//				case 'B':
//					cout << "TUE" << ' ';
//					break;
//				case 'C':
//					cout << "WED" << ' ';
//					break;
//				case 'D':
//					cout << "THU" << ' ';
//					break;
//				case 'E':
//					cout << "FRI" << ' ';
//					break;
//				case 'F':
//					cout << "SAT" << ' ';
//					break;
//				case 'G':
//					cout << "SUN" << ' ';
//					break;
//				default:
//					break;
//				}
//				flag = 0;
//			}
//		}
//		else
//		{
//			if (str1[i] == str2[i] && str1[i] >= '0' && str1[i] <= '9')
//			{
//				hour = (str1[i] - '0');
//				break;
//			}
//			else if (str1[i] == str2[i] && str1[i] >= 'A' && str1[i] <= 'N')
//			{
//				hour = (str1[i] - 'A' + 10);
//				break;
//			}
//		}
//	}
//	for (int i = 0; i < lenn2; i++)
//	{
//		if (str3[i] == str4[i] && 
//			((str3[i] >= 'a' && str3[i] <= 'z') || (str3[i] >= 'A' && str3[i] <= 'Z')))
//		{
//			min = i;
//			break;
//		}
//	}
//	printf("%02d:%02d", hour, min);
//
//	return 0;
//}
//
