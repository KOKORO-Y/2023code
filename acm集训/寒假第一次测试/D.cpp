//#define _CRT_SECURE_NO_WARNINGS 1
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<stdlib.h>
//#include<cstring>
//#include<ctype.h>
//#include<sstream>
//#include<deque>
//using namespace std;
//string ans[106][50];
//int main()
//{
//	int t = 0;
//	cin >> t;
//	string str;
//	for (int i = 1; i <= t; i++)
//	{
//		int n = 0, m = 0;
//		cin >> n >> m;
//		int k = 0;
//		deque<int> que;
//		//printf("Case %d:\n", i);
//		for (int j = 0; j < m; j++)
//		{
//			cin >> str;
//			if (str == "pushLeft")
//			{
//				cin >> k;
//				if (que.size() < n)
//				{
//					que.push_front(k);
//					//printf("Pushed in left: %d\n", k);
//					string a = to_string(k);
//					string b = "Pushed in left: " + a;
//					ans[j][0] = (b);
//
//				}
//				else
//				{
//					//printf("The queue is full\n");
//					ans[j][0] = "The queue is full";
//				}
//
//			}
//			if (str == "pushRight")
//			{
//				cin >> k;
//				if (que.size() < n)
//				{
//					que.push_back(k);
//					//printf("Pushed in right: %d\n", k);
//					string a = to_string(k);
//					string b = "Pushed in right: " + a;
//					ans[j][0] = (b);
//				}
//				else
//				{
//					//printf("The queue is full\n");
//					ans[j][0] = "The queue is full";
//				}
//			}
//			if (str == "popLeft")
//			{
//				if (!que.empty())
//				{
//					//printf("Popped from left: %d\n", left_pop(que));
//					int t = que.front();
//					que.pop_front();
//					string a = to_string(t);
//					string b = "Popped from left: " + a;
//					ans[j][0] = b;
//				}
//				else
//				{
//					//printf("The queue is empty\n");
//					ans[j][0] = "The queue is empty";
//				}
//			}
//			if (str == "popRight")
//			{
//				if (!que.empty())
//				{
//					//printf("Popped from right: %d\n", right_pop(que));
//					int t = que.back();
//					que.pop_back();
//					string a = to_string(t);
//					string b = "Popped from right: " + a;
//					ans[j][0] = b;
//				}
//				else
//				{
//					//printf("The queue is empty\n");
//					ans[j][0] = "The queue is empty";
//				}
//			}
//
//		}
//		printf("Case %d:\n", i);
//		for (int op = 0; op < m ; op++)
//		{
//			cout << ans[op][0] << "\n";
//		}
//	}
//
//	return 0;
//}