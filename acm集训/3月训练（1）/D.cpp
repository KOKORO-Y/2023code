//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int arr[1145140];
//int arr2[1145140];
//int cnt = 0;
//
//void solve(int l, int r)
//{
//	if (l == r)
//	{
//		return;
//	}
//	int mid = (l + r) >> 1;
//	int length = (r - l + 1) >> 1;
//	solve(l, mid), solve(mid + 1, r);
//	if (arr[l] > arr[r])
//	{
//		cnt++;
//		for (int i = l; i <= mid; i++)
//		{
//			swap(arr[i], arr[i + length]);
//		}
//	}
//}
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int n = 0;
//		cin >> n;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> arr[i];
//			arr2[i] = arr[i];
//		}
//		sort(arr2 + 1, arr2 + 1 + n);
//		cnt = 0;
//		solve(1, n);
//		int flag = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			if (arr[i] != arr2[i])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			cout << cnt << endl;
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
