//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//int isnotPrime(int i)
//{
//	int flag = 0;
//	for (int k = 2; k <= sqrt(i); k++)
//	{
//		if (i % k == 0)
//		{
//			flag = 1;
//		}
//	}
//	return flag;
//}
//int main()
//{
//	int max = -1;
//	int count = 0;
//	int n = 0, q = 0;
//	int L = 0, R = 0;
//	cin >> n >> q;
//	while (q--)
//	{
//		cin >> L >> R;
//		count = 0;
//		max = -1;
//		for (int i = L; i <= R; i++)
//		{
//			if (L == R && L == 1)
//			{
//				count = 1;
//				if (count > max)
//				{
//					max = count;
//				}
//				break;
//			}
//			if (isnotPrime(i))
//			{
//				count++;
//				if (count > max)
//				{
//					max = count;
//				}
//			}
//			else
//			{
//				count = 0;
//			}
//		}
//		cout << max << endl;
//	}
//
//	return 0;
//}
//
