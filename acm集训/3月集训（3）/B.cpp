#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
#define esp 1e-4
using namespace std;
string a, b;

void solve()
{
	cin >> a >> b;
	string s1;
	for (int i = 0; i <= 50; i++)
	{
		s1 += a;
		string s2;
		for (int j = 0; j <= 50; j++)
		{
			s2 += b;
			if (s2.length() > s1.length())
			{
				break;
			}
			if (s1 == s2)
			{
				cout << s1 << endl;
				return;
			}
		}
	}
	cout << -1 << endl;
}

int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}


//int f(int x, int y)
//{
//	int xx = x, yy = y;
//	while (1)
//	{
//		if (xx < yy)
//		{
//			swap(xx, yy);
//		}
//		if (xx % yy == 0)
//		{
//			return yy;
//		}
//		else
//		{
//			int z = xx % yy;
//			xx = yy;
//			yy = z;
//		}
//	}
//}
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		string a, b, c;
//		cin >> a >> b;
//		double a1 = 0, a2 = 0, b1 = 0, b2 = 0;
//		for (int i = 0; i < a.length(); i++)
//		{
//			if (a[i] == 'a')
//			{
//				a1++;
//			}
//			else
//			{
//				b1++;
//			}
//		}
//		for (int i = 0; i < b.length(); i++)
//		{
//			if (b[i] == 'a')
//			{
//				a2++;
//			}
//			else
//			{
//				b2++;
//			}
//		}
//		if (a1 == a2 && a1 == 0)
//		{
//			int len1 = a.length(), len2 = b.length(), num = 0;
//			if (len1 % len2 == 0 || len2 % len1 == 0)
//			{
//				num = len1 > len2 ? len1 : len2;
//			}
//			else
//			{
//				int max_y = 0;
//				max_y = f(a.length(), b.length());
//				num = (a.length() * b.length()) / max_y;
//			}
//			for (int i = 0; i < num; i++)
//			{
//				cout << 'b';
//			}
//			cout << '\n';
//		}
//		else if (b1 == b2 && b1 == 0)
//		{
//			int len1 = a.length(), len2 = b.length(), num = 0;
//			if (len1 % len2 == 0 || len2 % len1 == 0)
//			{
//				num = len1 > len2 ? len1 : len2;
//			}
//			else
//			{
//				int max_y = 0;
//				max_y = f(a.length(), b.length());
//				num = (a.length() * b.length()) / max_y;
//			}
//			for (int i = 0; i < num; i++)
//			{
//				cout << 'a';
//			}
//			cout << '\n';
//		}
//		else if ((a1 != 0 && a2 == 0) || (a2 != 0 && a1 == 0) || ((b1 != 0) && (b2 == 0)) || ((b1 == 0) && (b2 != 0)))
//		{
//			cout << -1 << endl;
//		}
//		else
//		{
//			double t1 = a1 / a2, t2 = b1 / b2;
//			if (fabs(t1 - t2) < esp)
//			{
//				int len1 = a.length(), len2 = b.length(), num = 0;
//				num = len1 > len2 ? len2 : len1;
//				int flag = 1;
//				for (int i = 0; i < num; i++)
//				{
//					if (a[i] != b[i])
//					{
//						flag = 0;
//						break;
//					}
//				}
//				if (flag)
//				{
//					int repet = 0;
//					if (len1 % len2 == 0 || len2 % len1 == 0)
//					{
//						repet = (len1 % len2 == 0) ? len1 / len2 : len2 / len1;
//					}
//					else
//					{
//						int minn = len1 < len2 ? len1 : len2;
//						int max_y = f(len1, len2);
//						int temp = len1 * len2 / max_y;
//						repet = temp / minn;
//					}
//					for (int i = 0; i < repet; i++)
//					{
//						if (len1 < len2)
//						{
//							cout << a;
//						}
//						else
//						{
//							cout << b;
//						}
//					}
//					cout << endl;
//				
//				}
//				else
//				{
//					cout << -1 << endl;
//				}
//			}
//			else
//			{
//				cout << -1 << endl;
//			}
//		}
//
//	}
//
//	return 0;
//}
//
