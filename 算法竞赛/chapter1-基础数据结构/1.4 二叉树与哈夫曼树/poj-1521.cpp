//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	while (1)
//	{
//		string a;
//		cin >> a;
//		if (a == "END")
//		{
//			break;
//		}
//		priority_queue <int, vector<int>, greater<int>> que;
//		sort(a.begin(), a.end());
//		int num = 1;
//		for (int i = 1; i <= a.length(); i++)
//		{
//			if (a[i] == a[i - 1])
//			{
//				num++;
//			}
//			else
//			{
//				que.push(num);
//				num = 1;
//			}
//		}
//		int ans = 0;
//		if (que.size() == 1)
//		{
//			ans = que.top();
//		}
//		while (que.size() > 1)
//		{
//			int a = que.top();
//			que.pop();
//			int b = que.top();
//			que.pop();
//			que.push(a + b);
//			ans += a + b;
//		}
//		printf("%d %d %.1lf\n", a.length() * 8, ans, (double)(a.length() * 8) / ans);
//	}	
//	
//
//	return 0;
//}
//
