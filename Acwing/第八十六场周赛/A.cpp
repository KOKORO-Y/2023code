//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//typedef long long int ll;
//
//int main()
//{
//	ll chest = 0, biceps = 0, back = 0;
//	ll arr[114] = { 0 };
//	int n = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 3 == 1)
//		{
//			chest += arr[i];
//		}
//		else if (i % 3 == 2)
//		{
//			biceps += arr[i];
//		}
//		else
//		{
//			back += arr[i];
//		}
//	}
//	if (chest > biceps && chest > back)
//	{
//		cout << "chest" << endl;
//	}
//	if (chest < biceps && back < biceps)
//	{
//		cout << "biceps" << endl;
//	}
//	if (back > chest && back > biceps)
//	{
//		cout << "back" << endl;
//	}
//
//	return 0;
//}
//
