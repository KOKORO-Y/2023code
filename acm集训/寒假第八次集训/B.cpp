//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	long long int arr1[114] = { 0 }, arr2[114] = { 0 };
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int n = 0, m = 0;
//		cin >> n >> m;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> arr1[i];
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cin >> arr2[i];
//		}
//		sort(arr1, arr1 + n);
//		sort(arr2, arr2 + n, greater<int>());
//		for (int i = 0; i < m; i++)
//		{
//			if (i >= n)
//			{
//				break;
//			}
//			if (arr1[i] < arr2[i])
//			{
//				swap(arr1[i], arr2[i]);
//			}
//		}
//		long long int sum = 0;
//		for (int i = 0; i < n; i++)
//		{
//			sum += arr1[i];
//		}
//		cout << sum << endl;
//	}
//
//	return 0;
//}
//
