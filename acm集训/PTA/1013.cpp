//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//int isPrime(int i)
//{
//	int flag = 1;
//	for (int j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	return flag;
//}
//int main()
//{
//	int a = 0, b = 0;
//	cin >> a >> b;
//	int count = 0, count2 = 0;
//	for (int i = 2;; i++)
//	{
//		if (isPrime(i))
//		{
//			count++;
//		}
//		if (count >= a && count <= b && isPrime(i))
//		{
//			cout << i;
//			count2++;
//			if (count2 % 10 != 0 && count != b)
//			{
//				cout << ' ';
//			}
//			else
//			{
//				cout << endl;
//			}
//		}
//		if (count > b)
//		{
//			break;
//		}
//	}
//
//	return 0;
//}
//
