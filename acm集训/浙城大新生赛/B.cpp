//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cmath>
//#include <map>
//using namespace std;
//
//int main()
//{
//	map<int, int> m;
//	long long int hp = 0, levelupgrowth = 0, event = 0;
//	double damage = 0;
//	int lifegrowt = 0;
//	int min = { 0 }, s = { 0 }, number = 0, hero[6] = {1,1,1,1,1};
//	int flag = 0;
//	cin >> hp >> levelupgrowth >> event;
//	while (event--)
//	{
//		long long int nowtime = 0;
//		scanf("%d:%d %d", &min, &s, &number);
//		nowtime = min * 60 + s;
//		if (number == 1)
//		{
//			hp += 800;
//			flag = 1;
//		}
//		else if(number == 2)
//		{
//			hp += levelupgrowth;
//		}
//		else if (number == 3)
//		{
//			int k = 0;
//			cin >> k;
//			if (flag)
//			{
//				if (hero[k - 1])//第一次被叠刚
//				{
//					hero[k - 1] = 0;
//					m[k - 1] = nowtime;
//					damage = (double)(125.0 + 0.06 * (double)hp);
//					long long int temp = (long long int)(damage * 0.1);
//					hp += temp;
//				}
//				else
//				{
//					if (nowtime - m[k - 1] >= 30)
//					{
//						m[k - 1] = nowtime;
//						damage = (double)(125.0 + 0.06 * (double)hp);
//						long long int temp = (long long int)(damage * 0.1);
//						hp += temp;
//					}
//				}
//			}
//
//		}
//	}
//	cout << hp;
//
//	return 0;
//}
//
