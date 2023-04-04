//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stack>
//#include <iostream>
//
//using namespace std;
//
//const int N = 3 * 1e6 + 5;
//int arr[N], ans[N];
//int n;
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
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
//		if (i == n)
//		{
//			cout << ans[i];
//		}
//		else
//		{
//			cout << ans[i] << ' ';
//		}
//	}
//	return 0;
//}
//
