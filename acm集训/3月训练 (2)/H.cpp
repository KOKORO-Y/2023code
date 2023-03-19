//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		string a;
//		int left = 0, flag = 0;
//		cin >> a;
//		int e = a.length();
//		for (int i = 0; i < e; i++)
//		{
//			if (left < 0)
//			{
//				flag = 1;
//				break;
//			}
//			if (a[i] == a[0])
//				left++;
//			else if (a[i] == a[e - 1])
//				left--;
//			else
//				left++;
//		}
//		if (left != 0)
//			flag = 1;
//		if (flag == 0)
//			printf("YES\n");
//		else
//		{
//			left = 0, flag = 0;
//			for (int i = 0; i < e; i++)
//			{
//				if (left < 0)
//				{
//					flag = 1;
//					break;
//				}
//				if (a[i] == a[0])
//					left++;
//				else if (a[i] == a[e - 1])
//					left--;
//				else
//					left--;
//			}
//			if (left != 0)
//				flag = 1;
//			if (flag == 0) 
//				printf("YES\n");
//			else 
//				printf("NO\n");
//		}
//	}
//	return 0;
//}
