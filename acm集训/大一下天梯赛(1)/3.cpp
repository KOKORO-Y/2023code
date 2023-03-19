//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//struct book
//{
//	int flag;  //0表示未被借出 1表示被借出
//	int time1;
//}books[1001];
//
//int main()
//{
//	char order;
//	int day = 0;
//	cin >> day;
//	while (day--)
//	{
//		int x = 0, hour = 0, min = 0;
//		int count = 0, res = 0;
//		for (int i = 0; i <= 1000; i++)
//		{
//			books[i].flag = 0;
//		}
//		while (1)
//		{
//			scanf("%d %c %d:%d", &x, &order, &hour, &min);
//			if (x == 0)
//			{
//				break;
//			}
//			else
//			{
//				if (order == 'S')
//				{
//					books[x].time1 = (hour * 60 + min);
//					books[x].flag = 1;
//				}
//				else if ((order == 'E') && (books[x].flag == 1))
//				{
//					count++;
//					res += ((hour * 60 + min) - (books[x].time1));
//					books[x].time1 = 0;
//					books[x].flag = 0;
//				}
//			}
//		}
//		if (count == 0)
//		{
//			printf("0 0\n");
//		}
//		else
//		{
//			printf("%d %d\n", count, (int)((double)res / count + 0.5));
//		}
//	}
//
//	return 0;
//}