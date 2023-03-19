//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int arr[100002] = { 0 };
//	int n = 0;
//	cin >> n;
//	while (n--)
//	{
//		int t = 0;
//		cin >> t;
//		arr[t]++;
//	}
//	for (int i = 0; i <= 100000; i++)
//	{
//		if (arr[i] % 2 == 1)
//		{
//			cout << "Conan" << endl;
//			return 0;
//		}
//	}
//	cout << "Agasa" << endl;
//	return 0;
//}
//
//
////int main()
////{
////	int n = 0;
////	scanf("%d", &n);
////	if (n <= 0)
////	{
////		return 0;
////	}
////	int arr[100001] = { 0 };
////	int flag = 1;
////	for (int i = 0; i < n; i++)
////	{
////		scanf("%d", &arr[i]);
////	}
////	int count = n;
////	int turns = 0;
////	/*for (int i = 0; i < n; i++)
////	{
////		for (int j = i; j < n; j++)
////		{
////			if (arr[i] < arr[j])
////			{
////				int t = arr[i];
////				arr[i] = arr[j];
////				arr[j] = t;
////			}
////		}
////	}*/
////	sort(arr, arr + n, greater<int>());
////	int Maxrepeat = 1;
////	for (int i = 0; i < n - 1; i++)
////	{
////		if (arr[i] == arr[i + 1] && arr[0] <= arr[i])
////		{
////			Maxrepeat++;
////		}
////	}
////	while (count != 0)
////	{
////		if (Maxrepeat == 1)
////		{
////			for (int i = 0; i < n; i++)
////			{
////				arr[i] = 0;
////			}
////			count = 0;
////		}
////		else
////		{
////			if (flag)
////			{
////				for (int i = Maxrepeat - 1; i < n; i++)
////				{
////					arr[i] = 0;
////				}
////				count -= (n - Maxrepeat + 1);
////				flag = 0;
////			}
////			else
////			{
////				count--;
////			}
////		}
////		turns++;
////	}
////	if (turns % 2 == 1)
////	{
////		printf("Conan\n");
////	}
////	else
////	{
////		printf("Agasa\n");
////	}
////
////	return 0;
////}