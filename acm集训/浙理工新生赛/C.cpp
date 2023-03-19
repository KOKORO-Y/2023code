//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//int isrun(int year)
//{
//	int flag = 0;
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		flag = 1;
//	}
//	return flag;
//}
//int main()
//{
//	int ans = 0;
//	int year = 2014, month = 3, day = 13;
//	
//	for (int i = 0;; i++)
//	{
//		if (isrun(year))
//		{
//			day++;
//			ans++;
//			if (month == 2)
//			{
//				if (day == 30)
//				{
//					day = 1;
//					month += 1;
//				}
//			}
//			else if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
//			{
//				if (day == 31)
//				{
//					day = 1;
//					month += 1;
//				}
//			}
//			else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10))
//			{
//				if (day == 32)
//				{
//					day = 1;
//					month += 1;
//				}
//			} 
//			else if (month == 12)
//			{
//				if (day == 32)
//				{
//					day = 1;
//					month = 1;
//					year += 1;
//				}
//			}
//			
//		}
//		else
//		{
//			day++;
//			ans++;
//			if (month == 2)
//			{
//				if (day == 29)
//				{
//					day = 1;
//					month += 1;
//				}
//			}
//			else if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
//			{
//				if (day == 31)
//				{
//					day = 1;
//					month += 1;
//				}
//			}
//			else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10))
//			{
//				if (day == 32)
//				{
//					day = 1;
//					month += 1;
//				}
//			}
//			else if (month == 12)
//			{
//				if (day == 32)
//				{
//					day = 1;
//					month = 1;
//					year += 1;
//				}
//			}
//		}
//		if (year == 2023 && month == 1 && day == 24)
//		{
//			break;
//		}
//	}
//	cout << ans;
//
//	return 0;
//}
//
