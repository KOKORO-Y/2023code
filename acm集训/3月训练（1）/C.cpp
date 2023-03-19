//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[2005];
//int sum[2005];
//int n = 0;
//
//int judge(int index, int num)
//{
//	for (int i = index + 1; i <= n; i++)
//	{
//		if (sum[i] - sum[index] > num)
//		{
//			return n;
//		}
//		else if (sum[i] - sum[index] == num)
//		{
//			if (i == n)
//			{
//				return (i - index);
//			}
//			else
//			{
//				return max(i - index, judge(i, num));
//			}
//		}
//	}
//}
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> arr[i];
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			sum[i] = arr[i] + sum[i - 1];
//		}
//		int ans = n;
//		for (int i = 1; i <= n; i++)
//		{
//			ans = min(ans, max(i, judge(i, sum[i])));
//		}
//		cout << ans << endl;
//	}
//	
//
//	return 0;
//}
//
