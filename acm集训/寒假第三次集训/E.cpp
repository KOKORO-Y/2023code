//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//int arr[11451419] = { 0 };
//int main()
//{
//	map<int, int> m;
//	int n = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//		m[arr[i]] = i;
//	}
//	int ans = 1;
//	int right = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (i <= right)
//		{
//			right = max(m[arr[i]], right);
//		}
//		else
//		{
//			ans = ans * 2 % 998244353;
//			right = max(m[arr[i]], right);
//		}
//	}
//	cout << ans << endl;
//
//	return 0;
//}
//
