//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//const int N = 114514;
//int arr[N] = { 0 };
//int main()
//{
//	int i = 1;
//	while (1)
//	{
//		cin >> arr[i];
//		i++;
//		char c;
//		c = getchar();
//		if (c == '\n')
//		{
//			break;
//		}
//	}
//	int flag = 0;
//	for (int k = 2; k <= i; k += 2)
//	{
//		if (arr[k] != 0)
//		{
//			flag = 1;
//		}
//	}
//	if (flag)
//	{
//		for (int j = 2; j <= i; j += 2)
//		{
//			if (arr[j] != 0 && j == 2 && arr[j - 1] != 0)
//			{
//				cout << (arr[j] * arr[j - 1]) << ' ' << (arr[j] - 1);
//			}
//			else if (arr[j] == 0 && j == 2 && arr[j - 1] == 0)
//			{
//				cout << 0 << ' ' << 0;
//			}
//			else if (arr[j] != 0 && j != 2 && arr[j - 1] != 0)
//			{
//				cout << ' ' << (arr[j] * arr[j - 1]) << ' ' << (arr[j] - 1);
//			}
//			else if (arr[j] == 0 && j != 2 && arr[j - 1] == 0)
//			{
//				cout << ' ' << 0 << ' ' << 0;
//			}
//		}
//	}
//	else
//	{
//		cout << 0 << ' ' << 0;
//	}
//
//	return 0;
//}