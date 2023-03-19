//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//int arr1[114][114], arr2[114][114];
//int main()
//{
//	int h1 = 0, h2 = 0, h3 = 0, c1 = 0, c2 = 0, c3 = 0;
//	cin >> h1 >> c1;
//	for (int i = 1; i <= h1; i++)
//	{
//		for (int j = 1; j <= c1; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	cin >> h2 >> c2;
//	for (int i = 1; i <= h2; i++)
//	{
//		for (int j = 1; j <= c2; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	if (c1 != h2)
//	{
//		printf("Error: %d != %d\n", c1, h2);
//	}
//	else
//	{
//		h3 = h1, c3 = c2;
//		printf("%d %d\n", h3, c3);
//		for (int i = 1; i <= h3; i++)
//		{
//			for (int j = 1; j <= c3; j++)
//			{
//				int sum = 0;
//				for (int k = 1; k <= c1; k++)
//				{
//					sum += arr1[i][k] * arr2[k][j];
//				}
//				if (j < c3)
//				{
//					printf("%d ", sum);
//				}
//				else
//				{
//					printf("%d\n", sum);
//				}
//			}
//		}
//
//	}
//
//	return 0;
//}
//
