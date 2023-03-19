//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//const int N = 11451419;
//int arr[N] = { 0 };
//int arr2[N] = { 0 };
//void judge(int tnnd)
//{
//	while (tnnd != 1)
//	{
//		if (tnnd % 2 == 0)
//		{
//			tnnd /= 2;
//			arr[tnnd] = 0;
//		}
//		else
//		{
//			tnnd = (tnnd * 3 + 1) / 2;
//			arr[tnnd] = 0;
//		}
//	}
//}
//int main()
//{
//	int k = 0;
//	cin >> k;
//	int count = 0;
//	for (int i = 0; i < k; i++)
//	{
//		cin >> arr2[i];
//		arr[arr2[i]] = 1;
//	}
//	for (int i = 0; i < k; i++)
//	{
//		judge(arr2[i]);
//	}
//	for (int i = 100; i >= 0; i--)
//	{
//		if (arr[i])
//		{
//			count++;
//		}
//	}
//	for (int i = 100; i >= 0; i--)
//	{
//		if (arr[i])
//		{
//			cout << i;
//			if ((count - 1))
//			{
//				cout << ' ';
//				count--;
//			}
//		}
//	}
//	return 0;
//}
//
