//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <deque>
//using namespace std;
//const int N = 2 * 1e6 + 5;
//int arr[N], sum[N];
//int n;
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum[i] = sum[i - 1] + arr[i];
//	}
//	for (int i = n + 1; i < 2 * n; i++)
//	{
//		arr[i] = arr[i - n];
//		sum[i] = sum[i - 1] + arr[i];
//	}
//	deque<int> que;
//	int ans = 0;
//	for (int i = 1; i < 2 * n; i++)
//	{
//		while (!que.empty() && sum[que.back()] > sum[i])
//		{
//			que.pop_back();
//		}
//		que.push_back(i);
//		if (i >= n)
//		{
//			while (!que.empty() && que.front() <= i - n)
//			{
//				que.pop_front();
//			}
//			if ((sum[que.front()] - sum[i - n]) >= 0)
//			{
//				ans++;
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}
//
