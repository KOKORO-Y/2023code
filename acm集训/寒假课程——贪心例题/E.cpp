//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//int sum[114514] = { 0 }, a[114514] = { 0 };
//int vis[66] = { 0 };
//void solve()
//{
//	int n = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		vis[i] = 0;
//	}
//	for (int i = 0; i <= 32; i++)
//	{
//		sum[i] = 0;
//	}
//	for (int i = 32; i >= 1; i--)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (a[j] & (1 << (i - 1)) && !vis[j])
//				vis[j] = 1, sum[i]++;
//		}
//	}
//	int ans = 0;
//	for (int i = 1; i <= 32; i++)
//		if (sum[i])
//			ans += (sum[i] * (sum[i] - 1) / 2);
//	cout << ans << endl;
//}
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		solve();
//	}
//	return 0;
//}
//
