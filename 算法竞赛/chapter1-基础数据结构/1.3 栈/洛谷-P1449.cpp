//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stack>
//#include <string>
//#include <ctype.h>
//using namespace std;
//
//int main()
//{
//	string a, b;
//	string* stop;
//	stack<int> st;
//	getline(cin, a);
//	for (int i = 0; i < a.length(); i++)
//	{
//		if (a[i] <= '9' && a[i] >= '0')
//		{
//			b += a[i];
//		}
//		else if(a[i] == '.')
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
//		else if (a[i] == '-')
//		{
//			int x = st.top();
//			st.pop();
//			int y = st.top();
//			st.pop();
//			st.push(y - x);
//		}
//		else if (a[i] == '+')
//		{
//			int x = st.top();
//			st.pop();
//			int y = st.top();
//			st.pop();
//			st.push(y + x);
//		}
//		else if (a[i] == '/')
//		{
//			int x = st.top();
//			st.pop();
//			int y = st.top();
//			st.pop();
//			st.push(y / x);
//		}
//		else if (a[i] == '*')
//		{
//			int x = st.top();
//			st.pop();
//			int y = st.top();
//			st.pop();
//			st.push(y * x);
//		}
//	}
//	cout << st.top();
//	return 0;
//}
//
