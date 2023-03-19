//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	double x1 = 0, y1 = 0, x2 = 0, y2 = 0;
//	double n = 0, x3 = 0, y3 = 0;
//	cin >> x1 >> y1 >> x2 >> y2;
//	cin >> n;
//
//	while (n--)
//	{
//		cin >> x3 >> y3;
//		if (x1 != x2 && y1 != y2)
//		{
//			if (((y3 - y1) / (x3 - x1) == (y3 - y2) / (x3 - x2)) &&((y3 > y1 && y3 < y2) || (y3 < y1 && y3 > y2)) &&
//				((x3 > x1 && x3 < x2) || (x3 < x1 && x3 > x2)))
//			{
//				cout << "Yes" << endl;
//			}
//			else
//			{
//				cout << "No" << endl;
//			}
//		}
//		else if (x1 == x2)
//		{
//			if (x3 == x1 && ((y3 > y1 && y3 < y2) || y3 < y1 && y3 > y2))
//			{
//				cout << "Yes" << endl;
//			}
//			else
//			{
//				cout << "No" << endl;
//			}
//		}
//		else if (y1 == y2)
//		{
//			if (y3 == y1 && ((x3 > x1 && x3 < x2) || x3 < x1 && x3 > x2))
//			{
//				cout << "Yes" << endl;
//			}
//			else
//			{
//				cout << "No" << endl;
//			}
//		}
//		else
//		{
//			cout << "No" << endl;
//		}
//	}
//
//	return 0;
//}