//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int x[100005];
//int n, m, ans;
//
//bool check(int mid)
//{
//	int num = 1, index = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (x[i] - x[index] >= mid)
//		{
//			index = i;
//			num++;
//		}
//		if (num >= m)
//		{
//			return true;
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x[i];
//	}
//	sort(x, x + n);
//	int l = x[0], r = x[n - 1] - x[0];
//	while (l <= r)
//	{
//		int mid = (l + r) >> 1;
//		if (check(mid))
//		{
//			l = mid + 1;
//			ans = mid;
//		}
//		else
//		{
//			r = mid - 1;
//		}
//	}
//	cout << ans;
//	return 0;
//}
//
