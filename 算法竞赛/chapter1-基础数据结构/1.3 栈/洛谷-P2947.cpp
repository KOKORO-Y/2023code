//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stack>
//using namespace std;
//const int N = 1e5 + 5;
//int arr[N], ans[N];
//int n;
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> arr[i];
//	}
//	stack<int> st;
//	for (int i = n; i >= 1; i--)
//	{
//		while (!st.empty() && arr[st.top()] <= arr[i])
//		{
//			st.pop();
//		}
//		if (st.empty())
//		{
//			ans[i] = 0;
//		}
//		else
//		{
//			ans[i] = st.top();
//		}
//		st.push(i);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << ans[i] << endl;
//	}
//
//	return 0;
//}
//
