//#define _CRT_SECURE_NO_WARNINGS 1
//#include <deque>
//#include <iostream>
//
//using namespace std;
//
//int arr[1000005] = { 0 };
//int main()
//{
//	int n = 0, k = 0;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> arr[i];
//	}
//	deque<int> que;
//	for (int i = 1; i <= n; i++)
//	{
//		while (!que.empty() && arr[que.back()] > arr[i])
//		{
//			que.pop_back();
//		}
//		que.push_back(i);
//		if (i >= k)
//		{
//			while (!que.empty() && que.front() <= (i - k))
//			{
//				que.pop_front();
//			}
//			cout << arr[que.front()] << ' ';
//		}
//	}
//	cout << '\n';
//	que.clear();
//	for (int i = 1; i <= n; i++)
//	{
//		while (!que.empty() && arr[que.back()] < arr[i])
//		{
//			que.pop_back();
//		}
//		que.push_back(i);
//		if (i >= k)
//		{
//			while (!que.empty() && que.front() <= (i - k))
//			{
//				que.pop_front();
//			}
//			cout << arr[que.front()] << ' ';
//		}
//	}
//
//	return 0;
//}
//
