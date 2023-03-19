//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <deque>
//#include <algorithm>
//#include <climits>
//using namespace std;
//long long int arr[500005];
//long long int sum[500005];
//int main()
//{
//	int n = 0, m = 0;
//	cin >> n >> m;
//	long long int ans = -LLONG_MAX;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%lld", &arr[i]);
//		sum[i] = sum[i - 1] + arr[i];
//	}
//	deque <long long int> que;
//	for (int i = 1; i <= n; i++)
//	{
//		while (!que.empty() && (i - que.front()) > m)
//		{
//			que.pop_front();
//		}
//		if (que.empty())
//		{
//			ans = sum[i];
//		}
//		else
//		{
//			ans = max(ans, sum[i] - sum[que.front()]);
//		}
//		while (!que.empty() && sum[i] <= sum[que.back()])
//		{
//			que.pop_back();
//		}
//		que.push_back(i);
//	}
//	cout << ans;
//	return 0;
//}
//
