//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//typedef long long int ll;
//const ll mod = 200907;
//ll fastpow(ll a, ll b)
//{
//	ll ans = 1;
//	while (b)
//	{
//		if (b & 1) ans = (a * ans) % mod;
//		a = (a * a) % mod;
//		b >>= 1;
//	}
//	return ans;
//}
//
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	while (t--)
//	{
//		ll res = 0;
//		ll a, b, c, n;
//		scanf("%lld %lld %lld %lld", &a, &b, &c, &n);
//		if (a + c == 2 * b)
//		{
//			res = (a % mod + (n - 1) * (b - a) % mod) % mod;
//		}
//		else
//		{
//			res = (a * fastpow(b / a, n - 1)) % mod;
//		}
//		printf("%lld\n", res);
//	}
//	return 0;
//}