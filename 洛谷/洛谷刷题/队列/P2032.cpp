//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <deque>
//using namespace std;
//int arr[2000005];
//int main()
//{
//	int num = 0, k = 0;
//	cin >> num >> k;
//	for (int i = 1; i <= num; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	deque<int> que;
//	for (int i = 1; i <= num; i++)
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
//			printf("%d\n", arr[que.front()]);
//		}
//	}
//	return 0;
//}
//
