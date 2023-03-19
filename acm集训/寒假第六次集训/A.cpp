//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//void solve()
//{
//	int x1, x2, x3, y1, y2, y3;
//	cin >> x1 >> y1;
//	cin >> x2 >> y2;
//	cin >> x3 >> y3;
//	int juli = 0;
//	if ((x3 - x1 == 0 && x2 - x1 == 0 && ((y3 < y1 && y3 > y2) || (y3 > y1 && y3 < y2))))
//	{ 
//		juli += abs(x2 - x1);
//		juli += abs(y2 - y1);
//		juli += 2;
//	}
//	else if (y3 - y1 == 0 && y2 - y1 == 0 && ((x3<x1 && x3>x2) || (x3 > x1 && x3 < x2)))
//	{
//		juli += abs(x2 - x1);
//		juli += abs(y2 - y1);
//		juli += 2;
//	}
//	else
//	{
//		juli += abs(x2 - x1);
//		juli += abs(y2 - y1);
//	}
//	cout << juli << endl;
//}
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		solve();
//	}
//
//	return 0;
//}
//
