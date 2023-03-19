//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int m = 0, a = 0, b = 0;
//	int ans = 1e10;
//	cin >> m >> a >> b;
//	if (m % a == 0 || m % b == 0)
//	{
//		cout << 0 << endl;
//	}
//	else
//	{
//		for (int i = 0; i <= 1000; i++)
//		{
//			for (int j = 0; j <= 1000; j++)
//			{
//				if ((a * i + b * j )> m)
//				{
//					continue;
//				}
//				else
//				{
//					ans = min(ans, (m - (a * i + b * j)));
//				}
//			}
//		}
//		cout << ans << endl;
//	}
//
//	return 0;
//}
//
