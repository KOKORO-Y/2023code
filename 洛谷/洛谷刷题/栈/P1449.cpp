//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stack>
//#include <ctype.h>
//using namespace std;
//
//int main()
//{
//	string a;
//	cin >> a;
//	stack <int> st;
//	string b;
//	for (int i = 0; i < a.length(); i++)
//	{
//		if (a[i] >= '0' && a[i] <= '9')
//		{
//			b += a[i];
// 		}
//		else if (a[i] == '.')
//		{
//			int temp = 0;
//			for (int i = 0; i < b.length(); i++)
//			{
//				temp += (b[i] - '0');
//				if (i < b.length() - 1)
//				{
//					temp *= 10;
//				}
//			}
//			st.push(temp);
//			b.clear();
//		}
//		else
//		{
//			if (!st.empty() && a[i] == '-')
//			{
//				int x = st.top();
//				st.pop();
//				int y = st.top();
//				st.pop();
//				int temp = (y - x);
//				st.push(temp);
//			}
//			else if (!st.empty() && a[i] == '/')
//			{
//				int x = st.top();
//				st.pop();
//				int y = st.top();
//				st.pop();
//				int temp = (y / x);
//				st.push(temp);
//			}
//			else if (!st.empty() && a[i] == '*')
//			{
//				int x = st.top();
//				st.pop();
//				int y = st.top();
//				st.pop();
//				int temp = x * y;
//				st.push(temp);
//			}
//			else if(!st.empty() && a[i] == '+')
//			{
//				int x = st.top();
//				st.pop();
//				int y = st.top();
//				st.pop();
//				int temp = x + y;
//				st.push(temp);
//			}
//		}
//	}
//	cout << st.top();
//
//	return 0;
//}
//
