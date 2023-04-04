//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stack>
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	string a;
//	cin >> a;
//	stack<char> st;
//	for (int i = 0; i < a.length(); i++)
//	{
//		if (a[i] == '(')
//		{
//			st.push(a[i]);
//		}
//		else if (a[i] == ')')
//		{
//			if (!st.empty())
//			{
//				if (st.top() == '(')
//				{
//					st.pop();
//				}
//				else
//				{
//					st.push(a[i]);
//				}
//			}
//			else
//			{
//				st.push(a[i]);
//			}
//		}
//	}
//	if (st.size())
//	{
//		cout << "NO";
//	}
//	else
//	{
//		cout << "YES";
//	}
//	return 0;
//}
//
