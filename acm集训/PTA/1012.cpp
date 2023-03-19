//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	int a1 = 0, a2 = 0, a3 = 0, a5 = 0;//初始化 
//	double a4 = 0.0;
//
//	int num, i = 1, j = 0;
//	while (n)
//	{
//		scanf("%d", &num);
//		{
//			if (num % 5 == 0 && num % 2 == 0)//同时能被2和5整除 
//			{
//				a1 = a1 + num;
//			}
//			if (num % 5 == 1)
//			{
//				if (i % 2 == 0)//交错求和 
//					num = -num;
//				a2 = a2 + num;
//				i++;
//			}
//			if (num % 5 == 2)
//			{
//				a3++;
//			}
//			if (num % 5 == 3)
//			{
//				a4 = a4 + num;
//				j++;//计数 
//			}
//			if (num % 5 == 4)
//			{
//				if (num > a5)
//					a5 = num;
//			}
//		}
//		n--;
//	}
//
//	if (a1)
//	{
//		printf("%d ", a1);
//	}
//	else printf("N ");
//	if (i > 1)
//	{
//		printf("%d ", a2);
//	}
//	else printf("N ");
//	if (a3)
//	{
//		printf("%d ", a3);
//	}
//	else printf("N ");
//	if (j)
//	{
//		printf("%.1lf ", (double)a4 / j);
//	}
//	else printf("N ");
//	if (a5)
//	{
//		printf("%d\n", a5);
//	}
//	else printf("N\n");
//
//	return 0;
//}
//
//
////#include <iostream>
////
////using namespace std;
////
////int main()
////{
////	long long int a1 = 0, a2 = 0, a3 = 0,a5 = -1;
////	double a4 = 0;
////	long long int  count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
////	long long int k = 0;
////	int flag = 1;
////	int n = 0;
////	cin >> n;
////	while (n--)
////	{
////		cin >> k;
////		if (k % 5 == 0 && k % 2 == 0)
////		{
////			count1++;
////			a1 += k;
////		}
////		else if (k % 5 == 1)
////		{
////			count2++;
////			a2 += (k * flag);
////			flag = -flag;
////		}
////		else if (k % 5 == 2)
////		{
////			count3++;
////		}
////		else if (k % 5 == 3)
////		{
////			count4++;
////			a4 += k;
////		}
////		else if (k % 5 == 4)
////		{
////			count5++;
////			if (k > a5)
////			{
////				a5 = k;
////			}
////		}
////	}
////	if (count1)
////	{
////		printf("%lld ", a1);
////	}
////	else
////	{
////		printf("n ");
////	}
////	if (count2 && a2)
////	{
////		printf("%lld ", a2);
////	}
////	else
////	{
////		printf("n ");
////	}
////	if (count3)
////	{
////		printf("%lld ", count3);
////	}
////	else
////	{
////		printf("n ");
////	}
////	if (count4)
////	{
////		printf("%.1lf ", (a4 / (count4 * 1.0)));
////	}
////	else
////	{
////		printf("n ");
////	}
////	if (count5)
////	{
////		printf("%lld", a5);
////	}
////	else
////	{
////		printf("n");
////	}
////
////
////	return 0;
////}
////
