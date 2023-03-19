//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//char a[114][114], b[114][114], c[114][114];
//int main()
//{
//	char ch;
//	int n = 0;
//	scanf("%c %d", &ch, &n);
//	getchar();
//	for (int i = 0; i < n; i++)
//	{
//		gets(a[i]);
//		//getchar();
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i][j] == '@')
//			{
//				b[n - i - 1][n - j - 1] = ch;
//				c[n - i - 1][n - j - 1] = a[i][j];
//			}
//			else
//			{
//				b[n - i - 1][n - j - 1] = a[i][j];
//				c[n - i - 1][n - j - 1] = a[i][j];
//			}
//		}
//	}
//	int flag = 1;
//	for (int i = 0; i < n; i++)
//	{
//		if (strcmp(a[i], c[i]) != 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag)
//	{
//		printf("bu yong dao le\n");
//		for (int i = 0; i < n; i++)
//		{
//			printf("%s\n", b[i]);
//		}
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			printf("%s\n", b[i]);
//		}
//	}
//	return 0;
//}
//
