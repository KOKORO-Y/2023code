//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int W, H, w, h;
//		int x1, x2, y1, y2;
//		cin >> W >> H;
//		cin >> x1 >> y1 >> x2 >> y2;
//		cin >> w >> h;
//		if ((w + x2 - x1 > W) && ((y2 - y1) + h > H))
//		{
//			cout << -1 << endl;
//		}
//		else if (x1 >= w || y1 >= h || (W - x2) >= w || (H - y2) >= h)
//		{
//			cout << "0.000000000" << endl;
//		}
//		else
//		{
//			int wmax = max(x1, W - x2);
//			int hmax = max(y1, H - y2);
//			double a = 1e8, b = 1e8;
//			if (((w + (x2 - x1)) <= W) && (w > wmax))
//			{
//				a = (double)(w - wmax);
//			}
//			if ((h + (y2 - y1) <= H) && (h > hmax))
//			{
//				b = (double)(h - hmax);
//			}
//			printf("%.9lf\n", min(a, b));
//		}
//	}
//
//	return 0;
//}
//
