//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//int arr[114514] = { 0 };
//int arr2[114514] = { 0 };
//int maxx = 120;
//int main()
//{
//	int flag = 1;
//	int t = 0, k = 0;
//	int count = 0;
//	int op = 0;
//	cin >> t >> k;
//	while (t--)
//	{
//		int t1 = 0, t2 = 0;
//		cin >> t1 >> t2;
//		for (int i = t1; i <= t2; i++)
//		{
//			arr[i] += 1;
//		}
//	}
//	for (int i = 0; i <= maxx; i++)
//	{
//		if (arr[i] < k)
//		{
//			//cout << i << "-";
//			count++;
//			arr2[op] = i;
//			op++;
//			flag = 0;
//			for (int j = i; j <= maxx; j++)
//			{
//				if (arr[j] >= k)
//				{
//					//cout << j - 1 << endl;
//					arr2[op] = j - 1;
//					op++;
//
//					i = j;
//					break;
//				}
//				else if (j == maxx && arr[j] < k)
//				{
//					//cout << j << endl;
//					arr2[op] = j;
//					op++;
//					i = j;
//				}
//			}
//		}
//	}
//	if (flag)
//	{
//		cout << count << endl;
//	}
//	else
//	{
//		cout << count << endl;
//		for (int i = 0; i < op; i++)
//		{
//			if (i % 2 == 0)
//			{
//				cout << arr2[i];
//			}
//			if (i % 2 == 1)
//			{
//				cout << "-" << arr2[i] << endl;
//			}
//		}
//	}
//
//	return 0;
//}
//
