//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <deque>
//#include <climits>
//using namespace std;
//const int N = 5 * 1e5 + 5;
//long long int arr[N], sum[N];
//long long int n, k;
//int main()
//{
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%lld", &arr[i]);
//		sum[i] = sum[i - 1] + arr[i];
//	}
//	deque <long long int> que;
//	long long int maxx = sum[1];
//	for (int i = 1; i <= n; i++)
//	{
//		while (!que.empty() && sum[que.back()] > sum[i])
//		{
//			que.pop_back();
//		}
//		que.push_back(i);
//		if (i >= k)
//		{
//			while (!que.empty() && que.front() <= i - k)
//			{
//				que.pop_front();
//			}
//			if ((sum[i] - sum[que.front()]) > maxx)
//			{
//				maxx = (sum[i] - sum[que.front()]);
//			}
//		}
//	}
//	cout << maxx;
//
//	return 0;
//}
//
