//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//const int INF = 0x7fffffff;
//int arr[1000005];
//int main()
//{
//	int t = 0;
//	cin >> t;
//	for (int j = 1; j <= t; j++)
//	{
//		int maxx = -INF, sum = 0;
//		int st = 1, ed = 1, temp = 1;
//		int n = 0;
//		cin >> n;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> arr[i];
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			sum += arr[i];
//			if (sum > maxx)
//			{
//				maxx = sum;
//				ed = i;
//				st = temp;
//			}
//			if (sum < 0)
//			{
//				sum = 0;
//				temp = i + 1;
//			}
//		}
//		printf("Case %d:\n%d %d %d\n", j, maxx, st, ed);
//		if (j != t)
//		{
//			cout << endl;
//		}
//	}
//
//	return 0;
//}

