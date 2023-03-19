//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//double n = 0, l = 0, r = 0;
//double arr[99] = { 0 };
//double f(double x)
//{
//	double sum = 0;
//	int j = 0;
//	for (int i = n; i >= 0; i--)
//	{
//		double temp = pow(x, i);
//		temp *= arr[j];
//		j++;
//		sum += temp;
//	}
//	return sum;
//}
//
//int main()
//{
//	cin >> n >> l >> r;
//	for (int i = 0; i <= n; i++)
//	{
//		cin >> arr[i];
//	}
//	double midl = 0, midr = 0;
//	double esp = 1e-7;
//	double ans = 0;
//	while (fabs(r - l) > esp)
//	{
//		midl = l + (r - l) / 3;
//		midr = r - (r - l) / 3;
//		if (f(midl) > f(midr))
//		{
//			r = midr;
//		}
//		else if (f(midl) < f(midr))
//		{
//			l = midl;
//		}
//	}
//	printf("%.5lf", r);
//
//	return 0;
//}
//
