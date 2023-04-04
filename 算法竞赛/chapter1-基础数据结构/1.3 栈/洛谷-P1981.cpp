//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stack>
//using namespace std;
//int mod = 10000;
//int main()
//{
//	stack<long long int> st;
//	int x = 0; char ch;
//	cin >> x;
//	st.push(x % mod);
//	while (cin >> ch >> x)
//	{
//		if (ch == '+')
//		{
//			st.push(x % mod);
//		}
//		else if (ch == '*')
//		{
//			long long int temp = st.top();
//			st.pop();
//			st.push((temp * x) % mod);
//		}
//	}
//	long long int ans = 0;
//	while (!st.empty())
//	{
//		ans += st.top();
//		st.pop();
//		ans %= mod;
//	}
//	cout << ans;
//	return 0;
//}
//
