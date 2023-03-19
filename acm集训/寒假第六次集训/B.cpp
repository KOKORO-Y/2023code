//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		char str[114] = { 0 };
//		cin >> str;
//		int len = strlen(str);
//		int flag = 1;
//		int left = 0, right = len - 1;
//		while (len--)
//		{
//			if (str[left] == ('a' + len))
//			{
//				left++;
//			}
//			else if (str[right] == ('a' + len))
//			{
//				right--;
//			}
//			else
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			cout << "NO" << endl;
//		}
//		else
//		{
//			cout << "YES" << endl;
//		}
//
//	}
//
//	return 0;
//}
//
