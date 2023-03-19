//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	string a;
//	cin >> a;
//	stack <char> st;
//	for (int i = 0; i < a.length(); i++)
//	{
//		if (a[i] == '(' || a[i] == ')')
//		{
//			if (st.empty())
//			{
//				st.push(a[i]);
//			}
//			else
//			{
//				if (a[i] == ')' && st.top() == '(')
//				{
//					st.pop();
//				}
//				else if (a[i] == ')' && st.top() != '(')
//				{
//					st.push(a[i]);
//				}
//				else if (a[i] == '(')
//				{
//					st.push(a[i]);
//				}
//			}
//		}
//	}
//	if (st.size())
//	{
//		cout << "NO\n";
//	}
//	else
//	{
//		cout << "YES\n";
//	}
//
//	return 0;
//}
//
