//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		long long int l = 0, r = 0, a = 0, x = 0;
//		long long int ans = 0;
//		cin >> l >> r >> a;
//	/*	for (int i = l; i <= r; i++)
//		{
//			x = i;
//			ans = floor(x / a) + (x % a);
//			cout << ans << ' ';
//		}*/
//		if (l == r)
//		{
//			x = r;
//			ans = floor(x / a) + (x % a);
//		}
//		else if (r < a)
//		{
//			x = r;
//			ans = floor(x / a) + (x % a);
//		}
//		else if (r >= a)
//		{
//			long long int temp = 0;
//			temp = (r + 1) / a;
//			x = temp * a - 1;
//			if (x < l)
//			{
//				x = r;
//			}
//			ans = floor(x / a) + (x % a);
//		}
//		cout << ans << endl;
//	}
//
//	return 0;
//}
//
