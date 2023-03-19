//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//typedef long long ll;
//
//int main()
//{
//	ll n = 0, p = 0;
//	ll ans = 0, cnt = 0;
//	cin >> n >> p;
//	for (int i = 1; i < 64; i++)
//	{
//		cnt = 0;
//		ll m = n - i * p;
//		while (m > 0)
//		{
//			cnt += m & 1;
//			m >>= 1;
//		}
//		if (cnt <= i && i <= n - i * p)
//		{
//			ans = i;
//			cout << ans;
//			return 0;
//		}
//	}
//	cout << -1;
//	
//	return 0;
//}
//
