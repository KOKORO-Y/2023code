//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <map>
//using namespace std;
//int arr[100009] = { 0 };
//int sum[100009] = { 0 };
//int main()
//{
//	int t = 0;
//	scanf("%d", &t);
//	while (t--)
//	{
//		int n = 0;
//		int cnt = 0;
//		scanf("%d", &n);
//		int left = 0;
//		int right = n;
//		for (int i = 1; i <= n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			sum[i] = sum[i - 1] + arr[i];
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			left = i;
//			right = n;
//			while (left <= right)
//			{
//				int mid = (left + right) / 2;
//				if (sum[mid] - sum[i - 1] == 7777)
//				{
//					cnt++;
//					break;
//				}
//				else if (sum[mid] - sum[i - 1] > 7777)
//				{
//					right = mid - 1;
//				}
//				else if (sum[mid] - sum[i - 1] < 7777)
//				{
//					left = mid + 1;
//				}
//			}
//
//		}
//		printf("%d\n", cnt);
//	}
//
//	return 0;
//}