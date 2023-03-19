//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <climits>
//#include <algorithm>
//using namespace std;
//int sum[200005];
//char str[200005];
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int n = 0, k = 0;
//		cin >> n >> k;
//		scanf("%s", str + 1);
//		for (int i = 1; i <= n; i++)
//		{
//			if (str[i] == 'B')
//			{
//				sum[i] = sum[i - 1] + 1;
//			}
//			else
//			{
//				sum[i] = sum[i - 1];
//			}
//		}
//		int ans = 1e9 + 5;
//		for (int i = k; i <= n; i++)
//		{
//			ans = min(ans, k - (sum[i] - sum[i - k]));
//		}
//		cout << ans << endl;
//	}
//
//	return 0;
//}
//
