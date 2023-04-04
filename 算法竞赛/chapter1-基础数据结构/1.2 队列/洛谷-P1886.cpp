//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <deque>
//using namespace std;
//const int N = 1e6 + 5;
//int n, m;
//int arr[N];
//
//int main()
//{
//	cin >> n >> m;
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
//		while (!que.empty() && i - que.front() >= m)
//		{
//			que.pop_front();
//		}
//		if (i >= m)
//		{
//			cout << arr[que.front()] << ' ';
//		}
//	}
//	que.clear();
//	cout << endl;
//	for (int i = 1; i <= n; i++)
//	{
//		while (!que.empty() && arr[que.back()] < arr[i])
//		{
//			que.pop_back();
//		}
//		que.push_back(i);
//		while (!que.empty() && i - que.front() >= m)
//		{
//			que.pop_front();
//		}
//		if (i >= m)
//		{
//			cout << arr[que.front()] << ' ';
//		}
//	}
//	return 0;
//}
//
