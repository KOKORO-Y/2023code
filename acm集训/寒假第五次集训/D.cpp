//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//long long int arr[1919810] = { 0 };
//long long int my_gcd(long long int max, long long int min)
//{
//	if (max == 0 || min == 0)
//	{
//		return (max == 0 ? min : max);
//	}
//	long long int z = max % min;
//	while (z)
//	{
//		max = min;
//		min = z;
//		z = max % min;
//	}
//	return min;
//}
//
//int main()
//{
//	int n = 0;
//	long long int maxx = -1;
//	long long int m = 1145141919810;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> arr[i];
//		maxx = max(arr[i], maxx);
//	}
//	if (n == 2)
//	{
//		cout << 1 << ' ' << abs(arr[1] - arr[2]);
//		return 0;
//	}
//	long long int sum = 0;
//	long long int zdgys = 0;
//	zdgys = maxx - arr[1];
//	for (int i = 1; i <= n; i++)
//	{
//		sum += (maxx - arr[i]);
//		zdgys = my_gcd(maxx - arr[i], zdgys);
//	}
//	
//	long long int renshu = (sum / zdgys);
//	cout << renshu << ' ' << zdgys << endl;
//
//	return 0;
//}
//
