//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	priority_queue<int> q;
//	long long int t = 0, cnt = 0;
//	long long int init = 1597;
//	cin >> t;
//	for (long long int i = 0; i < t; i++)
//	{
//		long long int a = 0;
//		cin >> a;
//		init += a;
//		cnt++;
//		if (a < 0)
//		{
//			q.push(-a);
//		}
//		while (init < 1597 && !q.empty())
//		{
//			init += q.top();
//			q.pop();
//			cnt--;
//		}
//	}
//	//printf("%lld\n", cnt);
//	cout << cnt;
//	return 0;
//}
//
