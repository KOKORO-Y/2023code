//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <deque>
//using namespace std;
//const int N = 2 * 1e6 + 5;
//long long int arr[N];
//long long int sum[N];
//int main()
//{
//	int n = 0, ans = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%lld", &arr[i]);
//	}
//	for (int i = 1; i < n; i++)
//	{
//		arr[i + n] = arr[i];
//	}
//	for (int i = 1; i < 2 * n; i++)
//	{
//		sum[i] = sum[i - 1] + arr[i];
//	}
//	deque<long long int> que;
//	for (int i = 1; i < 2 * n; i++)
//	{
//		while (!que.empty() && que.front() < (i - n))
//		{
//			que.pop_front();
//		}
//		while (!que.empty() && sum[que.back()] >= sum[i])
//		{
//			que.pop_back();
//		}
//		que.push_back(i);
//		if (i - n + 1 > 0 && sum[que.front()] - sum[i - n] >= 0)
//		{
//			ans++;
//		}
//	}
//	cout << ans;
//	return 0;
//}
//
