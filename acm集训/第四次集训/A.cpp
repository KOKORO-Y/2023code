//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int maxodd = -1, mineven = 1145141919;
//	int evencount = 0, oddcount = 0;
//	int k = 0;
//	while (scanf("%d", &k) == 1)
//	{
//		if (k % 2 == 0)
//		{
//			evencount++;
//			if (k < mineven)
//			{
//				mineven = k;
//			}
//		}
//		else
//		{
//			oddcount++;
//			if (k > maxodd)
//			{
//				maxodd = k;
//			}
//		}
//		char c = getchar();
//		if (c == '\n')
//		{
//			break;
//		}
//	}
//	if (evencount == 0 || oddcount == 0)
//	{
//		cout << "None" << endl;
//	}
//	else
//	{
//		cout << (maxodd - mineven) << endl;
//	}
//
//	return 0;
//}
//
