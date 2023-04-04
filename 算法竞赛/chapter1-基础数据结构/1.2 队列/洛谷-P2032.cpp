//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <deque>
//using namespace std;
//const int N = 2 * 1e6 + 5;
//int arr[N];
//int n, k;
//int main()
//{
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	deque<int> que;
//	for (int i = 1; i <= n; i++)
//	{
//		while (!que.empty() && arr[que.back()] < arr[i])
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
//			printf("%d\n", arr[que.front()]);
//		}
//	}
//
//	return 0;
//}
//
