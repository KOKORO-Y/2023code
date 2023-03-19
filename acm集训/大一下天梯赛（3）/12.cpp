//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	int n = 0, volume = 0, num = 0;
//	cin >> n >> volume >> num;
//	while (num--)
//	{
//		stack<int> st;
//		int index = 1;
//		int flag = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			int x = 0;
//			cin >> x;
//			if (x == index)
//			{
//				index++;
//			}
//			else
//			{
//				st.push(x);
//			}
//			while (!st.empty())
//			{
//				if (st.top() == index)
//				{
//					index++;
//					st.pop();
//				}
//				else
//				{
//					break;
//				}
//			}
//			if (st.size() > volume)
//			{
//				flag = 0;
//			}
//		}
//		if (index == (n + 1) && flag)
//		{
//			cout << "YES\n";
//		}
//		else
//		{
//			cout << "NO\n";
//		}
//	}
//
//	return 0;
//}
//
