//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stack>
//#include <queue>
//#include <cstring>
//
//using namespace std;
//int main()
//{
//	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		stack<int> s;
//		queue<int> q;
//		int a = 0;
//		char str[55] = { 0 };
//		cin >> a >> str;
//		if (strcmp(str, "FIFO") == 0)
//		{
//			for (int i = 0; i < a; i++)
//			{
//				char str2[6] = { 0 };
//				int o = 0;
//				cin >> str;
//				if (strcmp(str, "IN") == 0)
//				{
//					cin >> o;
//					q.push(o);
//				}
//				else if (strcmp(str, "OUT") == 0)
//				{
//					if (q.empty())
//					{
//						cout << "None" << endl;
//					}
//					else
//					{
//						cout << q.front() << '\n';
//						q.pop();
//					}
//				}
//			}
//		}
//		else
//		{
//			for (int i = 0; i < a; i++)
//			{
//				char str2[6] = { 0 };
//				int o = 0;
//				cin >> str;
//				if (strcmp(str, "IN") == 0)
//				{
//					cin >> o;
//					s.push(o);
//				}
//				else if (strcmp(str, "OUT") == 0)
//				{
//					if (s.empty())
//					{
//						cout << "None" << endl;
//					}
//					else
//					{
//						cout << s.top() << '\n';
//						s.pop();
//					}
//				}
//			}
//		}
//
//	}
//
//	return 0;
//}
//
