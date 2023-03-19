//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//typedef long long int ll;
//char str[114][114];
//void hanshu(ll h, ll w)
//{
//	
//	memset(str, 0, sizeof(str));
//	for (ll i = 1; i <= h; i++) 
//	{
//		scanf("%s", str[i] + 1);
//	}
//	for (ll i = 1; i <= h; i++) 
//	{
//		for (ll j = 1; j <= w; j++) 
//		{
//			if (str[i][j] == '*') 
//			{
//				ll count = 0, xsum = 0, ysum = 0;
//				for (ll x = i - 1; x <= i + 1; x++) 
//				{
//					for (ll y = j - 1; y <= j + 1; y++) 
//					{
//						if (str[x][y] == '*') 
//						{
//							count++;
//							xsum += x;
//							ysum += y;
//						}
//					}
//				}
//				if (count != 3 || ysum % 3 == 0 || xsum % 3 == 0)
//				{
//					cout << "NO" << endl;
//					return;
//				}
//			}
//		}
//	}
//	cout << "YES" << endl;
//	return;
//}
//
//int main() 
//{
//	ll t;
//	cin >> t;
//	while (t--) 
//	{
//		ll h = 0, w = 0;
//		cin >> h >> w;
//		hanshu(h, w);
//	}
//	return 0;
//}