//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stack>
//#define mod 10000
//using namespace std;
//
//int main()
//{
//	int a = 0;
//	char c;
//	stack<long long int> st;
//	cin >> a;
//	a %= mod;
//	st.push(a);
//	while (cin >> c >> a)
//	{
//		if (c == '*')
//		{
//			long long int temp = 0;
//			temp = st.top();
//			st.pop();
//			st.push((temp * a) % mod);
//		}
//		else
//		{
//			st.push(a % mod);
//		}
//	}
//	long long ans = 0;
//	while (!st.empty())
//	{
//		ans += st.top();
//		ans %= mod;
//		st.pop();
//	}
//	cout << ans % mod;
//	return 0;
//}
//
