//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	char c = ' ';
//	cin >> n;
//	int x = 0, y = 0;
//	int state = 0;
//	while (n--)
//	{
//		cin >> c;
//		int j = 0;
//		if (c == 'F')
//		{
//			cin >> j;
//			int temp = state;
//			while (temp < 0)
//			{
//				temp += 4;
//			}
//			if (temp % 4 == 0)
//			{
//				y += j;
//			}
//			else if (temp % 4 == 1)
//			{
//				x += j;
//			}
//			else if (temp % 4 == 2)
//			{
//				y -= j;
//			}
//			else if (temp % 4 == 3)
//			{
//				x -= j;
//			}
//		}
//		else if (c == 'R')
//		{
//			state += 1;
//		}
//		else if (c == 'L')
//		{
//			state -= 1;
//		}
//	}
//	cout << x << ' ' << y;
//
//	return 0;
//}
//
//
