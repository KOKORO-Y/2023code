//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	long long int t1 = 0, t2 = 0, t3 = 0, t4 = 0;
//	while (t--)
//	{
//		long long int moodA = 0, moodB = 0, ans = 0;
//		cin >> t1 >> t2 >> t3 >> t4;
//		moodA += t1, moodB += t1;
//		ans += t1;
//		if (t1 == 0)
//		{
//			ans = 1;
//		}
//		else
//		{
//			if (t2 != 0 && t3 != 0)
//			{
//				long long int temp = min(t2, t3);
//				ans += (2 * temp);
//				t2 -= temp; t3 -= temp;
//			}
//			if (t2 == 0 || t3 == 0)
//			{
//				long long int temp = (t2 == 0) ? t3 : t2;
//				if ((temp + t4) <= moodA)
//				{
//					ans += (t4 + temp);
//				}
//				else
//				{
//					ans += (moodA + 1);
//				}
//			}
//		}
//		cout << ans << endl;
//	}
//
//	return 0;
//}
//
