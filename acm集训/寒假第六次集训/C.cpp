//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int length = 0;
//		int arr1[514] = { 0 }, arr2[514] = { 0 }, arr3[1145] = { 0 };
//		int flag = 1;
//		int a, b;
//		cin >> length >> a >> b;
//		for (int i = 0; i < a; i++)
//		{
//			cin >> arr1[i];
//		}
//		for (int i = 0; i < b; i++)
//		{
//			cin >> arr2[i];
//		}
//		int aa = 0, bb = 0;
//		for (int i = 0; i < a + b; i++)
//		{
//			if (arr1[aa] <= length && aa < a)
//			{
//				if (arr1[aa] == 0)
//				{
//					length++;
//				}
//				else
//				{
//					//cout << arr1[aa] << ' ';
//					arr3[i] = arr1[aa];
//				}
//				aa++;
//			}
//			else if (arr2[bb] <= length && bb < b)
//			{
//				if (arr2[bb] == 0)
//				{
//					length++;
//				}
//				else
//				{
//					//cout << arr2[bb] << ' ';
//					arr3[i] = arr2[bb];
//				}
//				bb++;
//			}
//			else
//			{
//				//cout << -1 << endl;
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			for (int i = 0; i < a + b; i++)
//			{
//				cout << arr3[i] << ' ';
//			}
//			cout << endl;
//		}
//		else
//		{
//			cout << -1 << endl;
//		}
//	}
//
//	return 0;
//}
//
