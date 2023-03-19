//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <deque>
//using namespace std;
//
//int arr[2000005];
//int ans[2000005];
//int main()
//{
//	int num = 0, k = 0;
//	cin >> num >> k;
//	deque<int> que;
//	for (int i = 1; i <= num; i++)
//	{
//		scanf("%d", &arr[i]);
//		while (!que.empty() && arr[que.back()] > arr[i])
//		{
//			que.pop_back();
//		}
//		que.push_back(i);
//		while (!que.empty() && que.front() <= (i - k))
//		{
//			que.pop_front();
//		}
//		ans[i] = arr[que.front()];
//	}
//	
//	cout << 0 << endl;
//	for (int i = 1; i < num; i++)
//	{
//		printf("%d\n", ans[i]);
//	}
//
//	return 0;
//}
//
